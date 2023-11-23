struct usuario
{
    int id;
    char nome[100];
    int idade;
    char email[100];
    char senha[150];
    char cpf[140] ;
    char data_nascimento[100];
};

typedef struct usuario usuario;

void telaInicio()
{
    puts("---------------------------");
    puts("| Museu das Olimpíadas    |");
    puts("| Validar Ticket          |");
    puts("|                         |");
    puts("| 1 - Fazer login         |");
    puts("| 2 - Ver Catálogo        |");
    puts("| 0 - sair                |");
    puts("|                         |");
    puts("|                         |");
    puts("|                         |");
    puts("---------------------------");
}

void telaUsuarioLogado(usuario usuaarios[], int i)
{
    puts("---------------------------");
    printf(" %s                    \n \n", usuaarios[i].nome);
    puts("| 1 - Ver Obras           |");
    puts("| 2 - Meus ingressos      |");
    puts("| 0 - sair                |");
    puts("|                         |");
    puts("|                         |");
    puts("|                         |");
    puts("---------------------------");
}

void telaLogin()
{
    puts("=====================");
    puts("     TELA LOGIN      ");
    puts("=====================");

}

void telaIngressos()
{
    puts("======================");
    puts("    TELA INGRESSOS    ");
    puts("======================");

}

void telaIngressosParaObra()
{
    puts("================================");
    puts("    INGRESSOS PARA ESSA OBRA:   ");
    puts("================================");

}

void telaNaoTemIngresso()
{
    puts("=============================================");
    puts("    VOCÊ NÃO TEM INGRESSOS PARA ESSA OBRA!   ");
    puts("=============================================");

}

void telaAnucioLogado()
{
    puts("===========================");
    puts("     VOCÊ ESTA LOGADO!     ");
    puts("===========================");

}

void telaSaida()
{
    puts("=========================================");
    puts("  Obrigado por acessar o nosso sistema!  ");
    puts("=========================================");

}

void telaSaidaLogin()
{
    puts("==================================");
    puts("  SAINDO DA SUA CONTA, ATÉ MAIS!  ");
    puts("==================================");

}

void telaOpcaoInvalida()
{
    puts("===================");
    puts("  OPÇÃO INVÁLIDA!  ");
    puts("===================");

}

void telaVoltando()
{
    puts("=============");
    puts("  VOLTANDO!  ");
    puts("=============");

}

void telaObras()
{
    puts("----------------------------------");
    puts("| Escolha a obra que você        |");
    puts("| deseja ver:                    |");
    puts("|                                |");
    puts("| 1 - Tocha Olimpica de Paris    |");
    puts("| 2 - Phryges(Mascote)           |");
    puts("| 3 - Prancha do Italo Ferreira  |");
    puts("| 4 - Toca Michel Phelps         |");
    puts("| 5 - Disco(Lançamento de disco) |");
    puts("| 6 - Maquete Stade de France    |");
    puts("| 7 - BreakDance                 |");
    puts("| 8 - Bola de basquete           |");
    puts("|     Lebrom James               |");
    puts("| 9 - Passe livre                |");
    puts("| 0 - Voltar                     |");
    puts("|                                |");
    puts("|                                |");
    puts("|                                |");
    puts("----------------------------------");
}

void mensagemUltilizado(){

    puts("============================");
    puts(" Ingresso já foi utilizado! ");
    puts("============================");

}

void mensagemOutraObra(){

    puts("=====================================");
    puts(" Este ingresso não é para essa obra! ");
    puts("=====================================");

}

void mensagemOutroDono(){

    puts("====================================");
    puts(" Este ingresso não pertence a você! ");
    puts("====================================");

}

void mensagemNaoExiste(){

    puts("===========================");
    puts(" Este ingresso não existe! ");
    puts("===========================");

}

void mensagemBoaObra(){

    puts("===========");
    puts(" BOA OBRA! ");
    puts("===========");

}

void solicitaId(){

    puts("==========================================================");
    puts(" Qual ingresso você deseja usar para assistir essa obra ? ");
    puts("Insira o número do ID do ingresso");


}

void questSN()
{
    puts("===========================================");
    puts("     DESEJA RESPONDER UM QUESTIONARIO ?    ");
    puts("                                           ");
    puts("  s - SIM                                  ");
    puts("  n - NÃO                                  ");
    puts("===========================================");
}

void motivoMeia(){
    puts("---------------------------");
    puts("| Motivo da meia entrada: |");
    puts("| 1 - Estudante           |");
    puts("| 2 - Aluno               |");
    puts("| 3 - Professor           |");
    puts("| 4 - Baixa Renda         |");
    puts("| 5 - PDC                 |");
    puts("|                         |");
    puts("|                         |");
    puts("|                         |");
    puts("---------------------------");

}

void pulaLinha(){
    puts("");
}





