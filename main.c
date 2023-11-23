#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "telas.h"
#include "questionario.h"

struct ingresso
{
    int id;
    char obra[100];
    char tipoIngresso[100];
    char dono[100];
    int idDono;
    char  validaIngresso[50];
};

typedef struct ingresso ingresso;

struct resposta
{
    int numeroQuestao;
    char alternativa[24];
    int idUsuario;
};

typedef struct resposta resposta;

void retornaObra(int opcaoObra, char obra[]);
void realizarLogin(usuario usuarios[], ingresso ingressos[], resposta respostas[]);
void userLogado(usuario usuarios[], int id, ingresso ingressos[], resposta respostas[]);
void validaIngresso(ingresso ingressos[], usuario usuarios[], int idU, resposta respostas[]);
void verObra(usuario usuarios[], int opcaoObra, resposta respostas[], int idU);
void realizaQuesionario(int opcaoObra, usuario usuarios[], resposta respostas[], int idU);
void populaUsuario(usuario usuarios[]);
void populaIngressos(ingresso ingressos[]);


int contIngresso = 0, contUsuario = 0, contResposta = 0;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    usuario usuarios[100];
    populaUsuario(usuarios);

    ingresso ingressos[100];
    populaIngressos(ingressos);

    resposta respostas[200];

    int opcaoInicio;

    do{

        telaInicio();
        scanf("%d", &opcaoInicio);

        if(opcaoInicio != NULL){
            system("cls");
        }

        switch(opcaoInicio){
            case 0:
                telaAnucioLogado();
                break;
            case 1:
                realizarLogin(usuarios, ingressos, respostas);
                break;
            case 2:
                telaObras();
                break;
            default:
                telaOpcaoInvalida();
                break;
        }

    }while(opcaoInicio != 0);


}

void realizarLogin(usuario usuarios[], ingresso ingressos[], resposta respostas[])
{

    char emailValidar[50];
    char senhaValidar[15];
    int compSenha, compEmail, compCPF, logado, idLogado;

            telaLogin();
            fflush(stdin);
            printf("Informe seu e-mail ou CPF: \n");
            gets(emailValidar);
            fflush(stdin);
            printf("Informe sua senha: \n");
            gets(senhaValidar);
            fflush(stdin);
            puts("=====================");

            for (int i = 0; i <= contUsuario; i++)
            {

                compCPF = strcmp(usuarios[i].cpf, emailValidar);
                compEmail = strcmp(usuarios[i].email, emailValidar);
                compSenha = strcmp(usuarios[i].senha, senhaValidar);

                if(compCPF == 0 || compEmail == 0){
                    if (compSenha == 0)
                    {
                    logado = 1;
                    idLogado = i;
                    break;
                    }else{
                        logado = 0;
                    }

                }else{
                    logado = 0;
                }

            }

            if (logado)
            {
                telaAnucioLogado();
                userLogado(usuarios, idLogado, ingressos, respostas);
            }
            else
            {
                system("cls");
                printf("E-mail/CPF ou senha inválidos \n");
            }


}

void userLogado(usuario usuarios[], int id, ingresso ingressos[], resposta respostas[]){
    int opcaoLogado, comparador;

    do{
        telaUsuarioLogado(usuarios, id);
        scanf("%d", &opcaoLogado);

        switch(opcaoLogado){
            case 0:
                telaSaidaLogin();
                break;
            case 1:
                validaIngresso(ingressos, usuarios, id, respostas);
                break;
            case 2:
                telaIngressos();

                for(int i = 0; i < contIngresso; i++){

                    comparador = strcmp(ingressos[i].dono, usuarios[id].nome);

                    if(comparador == 0 && ingressos[i].idDono == usuarios[id].id)
                    {
                        printf("\nID Ingresso: %d\n", ingressos[i].id);
                        printf("Dono Ingresso: %s\n", ingressos[i].dono);
                        printf("Obra: %s\n", ingressos[i].obra);
                        printf("Tipo Ingresso: %s\n", ingressos[i].tipoIngresso);
                        printf("Status: %s\n", ingressos[i].validaIngresso);
                        printf("--------------------------------- \n");
                    }

                }

                break;
        }
    }while(opcaoLogado != 0);
}

void validaIngresso(ingresso ingressos[], usuario usuarios[], int idU, resposta respostas[]){

    int opcaoObra, compObra, compValida, compMeia, compUsado, idIngressoObra, motivoM, comparador, existeIngresso = 0, compVerObra, ingressoObra = 0;
    char obra[100], valido[100], usado[100], meia[100];

    strcpy(valido, "Válida");
    strcpy(usado, "Usado");
    strcpy(meia, "Meia");

        telaObras();
        scanf("%d", &opcaoObra);

        retornaObra(opcaoObra, obra);


        telaIngressosParaObra();
        for(int i = 0; i < contIngresso; i++){

            comparador = strcmp(ingressos[i].dono, usuarios[idU].nome);
            compVerObra = strcmp(ingressos[i].obra, obra);

            if(comparador == 0 && ingressos[i].idDono == usuarios[idU].id && compVerObra == 0)
            {
                printf("\nID Ingresso: %d\n", ingressos[i].id);
                printf("Obra: %s\n", ingressos[i].obra);
                printf("Status: %s\n", ingressos[i].validaIngresso);
                printf("--------------------------------- \n");
                ingressoObra++;
            }

        }

        if(ingressoObra > 0){
            solicitaId();
            scanf("%d", &idIngressoObra);
            puts("==========================================================");

            for(int i = 0; i < contIngresso; i++){

                if(idIngressoObra == ingressos[i].id){
                    idIngressoObra = i;
                    existeIngresso = 1;
                    break;
                }else{
                    existeIngresso = 0;
                }
            }

            if(existeIngresso == 0){
                mensagemNaoExiste();
            }else{


                if(opcaoObra == 0){
                    telaVoltando();
                }else{

                    compUsado = strcmp(ingressos[idIngressoObra].validaIngresso, usado);

                    if(compUsado == 0){
                        mensagemUltilizado();
                    }else{

                        if(ingressos[idIngressoObra].idDono != usuarios[idU].id){
                            mensagemOutroDono();
                        }else{
                            compObra =  strcmp(ingressos[idIngressoObra].obra, obra);

                            if(compObra == 0){
                            strcpy(ingressos[idIngressoObra].validaIngresso, usado);
                            mensagemBoaObra();
                            verObra(usuarios, opcaoObra, respostas, idU);
                            }else{
                                mensagemOutraObra();
                            }
                        }

                    }
                }
            }
    }else{
        telaNaoTemIngresso();
    }




}


void verObra(usuario usuarios[], int opcaoObra, resposta respostas[], int idU)
{
    int verObra = opcaoObra;

    if(opcaoObra == 9){
        verObra = 1;
    }

    for(int i = verObra; i <= 8; i++){
        switch(i){
        case 1:
            tochaOlimpica();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 2:
            mascote();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 3:
            pranchaMedina();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 4:
            toucaMP();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 5:
            disco();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 6:
            maquete();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 7:
            breakdance();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        case 8:
            bolaBasquete();
            realizaQuesionario(i, usuarios, respostas, idU);
            break;
        default:
            telaOpcaoInvalida();
            break;
        }

        if(opcaoObra != 9){
            break;
        }
    }

}

void realizaQuesionario(int opcaoObra, usuario usuarios[], resposta respostas[], int idU)
{
     char opcaoQuest;

     pulaLinha();

     respostas[contResposta].idUsuario = usuarios[idU].id;

     questSN();
     fflush(stdin);
     scanf("%c", &opcaoQuest);

     pulaLinha();

     if(opcaoQuest == 's'){
        switch(opcaoObra){
            case 1:
                questTocha1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questTocha2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questTocha3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);

                respostas[contResposta].numeroQuestao = 1;

                contResposta++;
                break;
            case 2:
                questMascote1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questMascote2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questMascote3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);

                respostas[contResposta].numeroQuestao = 2;
                contResposta++;
                break;
            case 3:
                questSurf1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questSurf2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questSurf3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 3;
                contResposta++;
                break;
            case 4:
                questTouca1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questTouca2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questTouca3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 4;
                contResposta++;
                break;
            case 5:
                questDisco1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questDisco2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questDisco3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 5;
                contResposta++;
                break;
            case 6:
                questMaquete1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questMaquete2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questMaquete3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 6;
                contResposta++;
                break;
            case 7:
                questBreakdance1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questBreakdance2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questBreakdance3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 7;
                contResposta++;
                break;
            case 8:
                questBasquete1();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[0]);

                questBasquete2();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[1]);

                questBasquete3();
                fflush(stdin);
                scanf("%c", &respostas[contResposta].alternativa[2]);
                respostas[contResposta].numeroQuestao = 8;
                contResposta++;
                break;
            default:
                telaOpcaoInvalida();
                break;

        }

        converteRespostaCSV(respostas);

     }else{
        puts("Aproveite a Obra!");
        pulaLinha();
        pulaLinha();
     }


     //registrarResposta
}


void retornaObra(int opcaoObra, char obra[])
{
    char obra1[50] = "Tocha Olimpica de Paris";
    char obra2[50] = "Phryges(Mascote)";
    char obra3[50] = "Prancha do Italo Ferreira";
    char obra4[50] = "Toca Michel Phelps";
    char obra5[50] = "Disco(Lançamento de disco)";
    char obra6[50] = "Maquete Stade de France";
    char obra7[50] = "BreakDance";
    char obra8[50] = "Bola de basquete Lebrom James";
    char passeLivre[50] = "Passe Livre";
    char obraErro[50] = "Erro";

    switch(opcaoObra)
    {
        case 1:
            strcpy(obra, obra1);
            break;
        case 2:
            strcpy(obra, obra2);
            break;
		case 3:
		    strcpy(obra, obra3);
            break;
        case 4:
            strcpy(obra, obra4);
            break;
		case 5:
		    strcpy(obra, obra5);
            break;
		case 6:
		    strcpy(obra, obra6);
            break;
        case 7:
            strcpy(obra, obra7);
            break;
		case 8:
		    strcpy(obra, obra8);
            break;
        case 9:
            strcpy(obra, passeLivre);
            break;
        default:
            strcpy(obra, obraErro);
            break;

    }
}

void populaUsuario(usuario usuarios[]){


    FILE *arquivoCSV = fopen("C:\\Users\\fcngu\\workspace C\\testeMuseu\\usuarios.csv", "r");
    if (arquivoCSV == NULL) {
        perror("Erro ao abrir o arquivo CSV");
    }

    char linha[5000];
    while(fgets(linha, sizeof(linha), arquivoCSV)){

        char *token = strtok(linha, ", ");
        int id = atoi(token);

        token = strtok(NULL, ", ");
        char nome[100];
        strcpy(nome, token);

        token = strtok(NULL, ", ");
        int idade = atoi(token);

        token = strtok(NULL, ", ");
        char email[100];
        strcpy(email, token);

        token = strtok(NULL, ", ");
        char senha[100];
        strcpy(senha, token);

        token = strtok(NULL, ", ");
        char cpf[100];
        strcpy(cpf, token);

        token = strtok(NULL, ", ");
        char dataNascimento[100];
        strcpy(dataNascimento, token);

        usuarios[contUsuario].id = id;
        strcpy(usuarios[contUsuario].nome, nome);
        usuarios[contUsuario].idade = idade;
        strcpy(usuarios[contUsuario].email, email);
        strcpy(usuarios[contUsuario].senha, senha);
        strcpy(usuarios[contUsuario].cpf, cpf);
        strcpy(usuarios[contUsuario].data_nascimento, dataNascimento);


        printf("Id: %d \n", usuarios[contUsuario].id);
        printf("Nome: %s \n", usuarios[contUsuario].nome);
        printf("Idade: %d \n", usuarios[contUsuario].idade);
        printf("E-mail: %s \n", usuarios[contUsuario].email);
        printf("Senha: %s \n", usuarios[contUsuario].senha);
        printf("CPF: %s \n", usuarios[contUsuario].cpf);
        printf("Data Nascimento: %s \n", usuarios[contUsuario].data_nascimento);
        puts("=============================================");


        contUsuario++;

    }

    fclose(arquivoCSV);

}

void populaIngressos(ingresso ingressos[]) {

    FILE *arquivoCSV2 = fopen("C:\\Users\\fcngu\\workspace C\\testeMuseu\\ingressos.csv", "r");
    if (arquivoCSV2 == NULL) {
        perror("Erro ao abrir o arquivo CSV");
        return;  // Adicionei um return para evitar que o código continue em caso de erro.
    }

    char linha[6000];
    while (fgets(linha, sizeof(linha), arquivoCSV2)) {

        char *token = strtok(linha, ", ");
        int id = atoi(token);

        token = strtok(NULL, ",");
        char obra[100];
        strcpy(obra, token);

        token = strtok(NULL, ",");
        char tipoIngresso[100];
        strcpy(tipoIngresso, token);

        token = strtok(NULL, ", ");
        char dono[100];
        strcpy(dono, token);

        token = strtok(NULL, ",");
        int idDono = atoi(token);

        token = strtok(NULL, ",");
        char status[100];
        strcpy(status, token);

        ingressos[contIngresso].id = id;
        strcpy(ingressos[contIngresso].obra, obra);
        strcpy(ingressos[contIngresso].tipoIngresso, tipoIngresso);
        strcpy(ingressos[contIngresso].dono, dono);
        ingressos[contIngresso].idDono = idDono;
        strcpy(ingressos[contIngresso].validaIngresso, status);


        printf("\nID Ingresso: %d\n", ingressos[contIngresso].id);
        printf("Obra: %s\n", ingressos[contIngresso].obra);
        printf("Tipo Ingresso: %s\n", ingressos[contIngresso].tipoIngresso);
        printf("Dono Ingresso: %s\n", ingressos[contIngresso].dono);
        printf("ID Dono: %d \n", ingressos[contIngresso].idDono);
        printf("Status: %s\n", ingressos[contIngresso].validaIngresso);
        puts("=============================================");

        contIngresso++;
    }

    fclose(arquivoCSV2);
}

void converteRespostaCSV(resposta respostas[])
{

    FILE *arquivoCSV = fopen("respostas.csv", "w");
    if (arquivoCSV == NULL)
    {
        perror("Erro ao abrir o arquivo CSV");
    }

    for(int i = 0; i <= contResposta; i++){
        fprintf(arquivoCSV,"ID Usuario: %d | resposta da obra %d | questão 1: %c, questão 2: %c questão 3: %c \n", respostas[i].idUsuario,
                respostas[i].numeroQuestao, respostas[i].alternativa[0], respostas[i].alternativa[1], respostas[i].alternativa[2]);
    }

    fclose(arquivoCSV);
}

