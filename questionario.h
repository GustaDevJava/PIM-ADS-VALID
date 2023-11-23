#include <stdio.h>

void printCenteredTitle(char *title) {
    int titleLength = strlen(title);
    int padding = (40 - titleLength) / 2;

    for (int i = 0; i < padding; i++) {
        putchar(' ');
    }

    printf("%s\n\n", title);
}

void tochaOlimpica() {
    printCenteredTitle("Tocha Ol�mpica de Paris 2024\n");
    printf("A tocha dos Jogos Ol�mpicos e Paral�mpicos Paris 2024 distingue-se sobretudo pela sua cor champanhe, �nica e luminosa.\n");
    printf("Para refletir os pr�ximos Jogos, Mathieu Lehanneur tamb�m se inspirou em tr�s pilares de Paris 2024: igualdade,\n");
    printf("�gua e concilia��o\n\n");
    printf("Tamanho: 70cm\n");
    printf("Di�metro m�nimo: 3,5cm\n");
    printf("Di�metro m�ximo: 10cm\n");
    printf("Peso: 1,5kg\n");
    printf("Cor: champanhe\n");
    printf("Material: ArcelorMittal XCarb� a�o de fontes recicladas e renov�veis\n");
    printf("Combust�vel: biopropano\n");
    printf("N�mero de tochas produzidas: 2.000\n");

}

void mascote() {
    printCenteredTitle("Mascotes dos Jogos Ol�mpicos\n");
    printf("Phryges, mascotes dos Jogos Ol�mpicos e Paral�mpicos Paris 2024, que j� t�m uma\n");
    printf("miss�o importante: mostrar ao mundo que o esporte pode mudar tudo e que merece\n");
    printf("ter um papel de destaque na sociedade. As Phryges (pronuncia-se fri-jehs) s�o\n");
    printf("pequenos barretes (gorros) fr�gios, que representam um forte s�mbolo de liberdade,\n");
    printf("inclus�o e a habilidade das pessoas de apoiarem causas grandes e significativas. Elas\n");
    printf("s�o bordadas nas cores vermelha, branca e azul, com o logo de Paris 2024 estampado\n");
    printf("na frente. Elas tamb�m t�m um olho expressivo e desafiador feitos de uma �coroa da\n");
    printf("Fran�a�, um n� de la�os que � o ornamento nacional franc�s.\n");

}

void pranchaMedina() {
    printCenteredTitle("Prancha do �talo Ferreira\n");
    printf("Essa � a prancha que �talo Ferreira conquistou o ouro ol�mpico 2021. ");
    printf("�talo Ferreira (Ba�a Formosa, 6 de maio de 1994) � um surfista profissional ");
    printf("brasileiro que est� na ASP World Tour desde 2015. Em 2021 sagrou-se o primeiro ");
    printf("campe�o ol�mpico da hist�ria do surfe, recebendo a medalha de ouro ao derrotar ");
    printf("o japon�s Kanoa Igarashi nos Jogos Ol�mpicos de Ver�o em T�quio.\n");

}

void toucaMP() {
    printCenteredTitle("Touca do Michael Phelps\n");
    printf("Michael Fred Phelps II � um nadador profissional estadunidense aposentado, ");
    printf("conquistou trinta e sete recordes mundiais e conquistou o maior n�mero de medalhas ");
    printf("de ouro ol�mpicas em uma �nica edi��o, feito este realizado nos Jogos de Pequim, na ");
    printf("China, em agosto de 2008. Essa � a touca usada por ele em uma das conquistas da ");
    printf("medalha de ouro.\n");

}

void disco() {
    printCenteredTitle("Disco (Lan�amento de disco)\n");
    printf("O lan�amento de disco � um evento do atletismo no qual os competidores arremessam ");
    printf("um objeto pesado, conhecido como \"disco\", o mais longe poss�vel. O disco � uma ");
    printf("pe�a de metal ou material composto, com tamanhos diferentes para homens (2 kg de ");
    printf("peso e 22 cm de di�metro) e mulheres (1 kg de peso e 18 cm de di�metro). Os atletas ");
    printf("giram em um c�rculo de lan�amento e soltam o disco, buscando alcan�ar a maior ");
    printf("dist�ncia poss�vel dentro de um setor de pouso demarcado. A t�cnica envolve for�a, ");
    printf("velocidade e coordena��o, e o vencedor � determinado pela marca mais longa entre ");
    printf("seus lan�amentos. O lan�amento de disco � uma modalidade tradicional do atletismo ");
    printf("e uma parte significativa das competi��es esportivas em todo o mundo.\n");

}

void maquete() {
    printCenteredTitle("Maquete de Stade de France\n");
    printf("O Stade de France �, sem d�vida, o est�dio mais conhecido do pa�s. O local ganhou ");
    printf("essa fama por ter sediado diversos jogos da Copa do Mundo da FIFA de 1998, para o ");
    printf("qual foi originalmente constru�do. Maior est�dio da Fran�a, j� foi palco de diversos ");
    printf("eventos esportivos, entre eles a final da Liga dos Campe�es da Europa em 2000, 2006 ");
    printf("e 2022, sete partidas da Eurocopa de 2016, o Mundial de Atletismo de 2003 e a Copa ");
    printf("do Mundo de Rugby em 1999, 2007 e agora em 2023. Com isso, o Stade de France ");
    printf("ser� um dos dois est�dios do mundo a sediar a final tanto do Mundial de futebol como ");
    printf("do de Rugby. Para Paris 2024, o local - que tamb�m serve como casa para as sele��es ");
    printf("francesas de Rugby e futebol - sediar� as competi��es de atletismo e Rugby Sevens.\n");

}

void breakdance() {
    printCenteredTitle("Breakdance\n");
    printf("Apresenta��o de breakdance no museu: O breakdance (tamb�m conhecido como ");
    printf("breaking ou b-boying) � um estilo de dan�a urbana, parte da cultura do hip hop criada ");
    printf("por afro-americanos na d�cada de 1970 na cidade de Nova Iorque (Estados Unidos), ");
    printf("normalmente dan�ada ao som do rap, funk ou breakbeat.\n");

}

void bolaBasquete() {
    printCenteredTitle("Bola de Basquete assinada por LeBron James\n");
    printf("LeBron James � um dos maiores jogadores de basquete da hist�ria, nascido em 1984 ");
    printf("em Akron, Ohio. Ele se destacou desde cedo, entrou na NBA em 2003 e jogou pelo ");
    printf("Cleveland Cavaliers, Miami Heat e Los Angeles Lakers. LeBron � conhecido por seus ");
    printf("t�tulos da NBA, pr�mios MVP e contribui��es filantr�picas. Sua carreira transcende o ");
    printf("basquete e ele � uma figura influente na cultura global.\n");
    printf("LeBron James representou os Estados Unidos nas Olimp�adas 4 vezes nos anos de ");
    printf("2004 - Atenas, Gr�cia, 2008 - Pequim, 2012 - Londres, Reino Unido.2016 - Rio de ");
    printf("Janeiro, Brasil. LeBron James � conhecido por seu sucesso em competi��es ");
    printf("ol�mpicas, onde desempenhou um papel fundamental na conquista de v�rias ");
    printf("medalhas de ouro para os Estados Unidos no basquete masculino.\n");

}

void questTocha1(){
    printf("O que achou do design da tocha ol�mpica de Paris?\n");
    printf("A) Bonita\n");
    printf("B) Razoavel\n");
    printf("C) Feia\n");
}

void questTocha2(){
    printf("J� tinha visto a nova tocha das olimp�adas?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questTocha3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}

void questMascote1(){
    printf("O que achou do design do mascote das Ol�mpiadas de Paris?\n");
    printf("A) Bonito\n");
    printf("B) Razoavel\n");
    printf("C) Feio\n");
}

void questMascote2(){
    printf("J� tinha visto o novo mascote das olimp�adas?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questMascote3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}

void questSurf1(){
    printf("O que achou da prancha de �talo Ferreira?\n");
    printf("A) Bonita\n");
    printf("B) Razoavel\n");
    printf("C) Feia\n");
}

void questSurf2(){
    printf("J� tinha visto esse surfista antes?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questSurf3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}
void questTouca1(){
    printf("O que achou da touca de Michael Phelps?\n");
    printf("A) Bonita\n");
    printf("B) Razoavel\n");
    printf("C) Feia\n");
}

void questTouca2(){
    printf("J� tinha visto esse nadador antes?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questTouca3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}
void questDisco1(){
    printf("Voc� acha que o lan�amento de disco � um esporte que merecia mais destaque nas Olimp�adas?\n");
    printf("A) sim, gosto dessa modalidade\n");
    printf("B) n�o, nao gosto desse esporte ol�mpico\n");
}

void questDisco2(){
    printf("Voc� acha que o lan�amento de disco deveria ser retirado do quadro de esportes ol�mpicos?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questDisco3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}
void questMaquete1(){
    printf("Qual � a sua opini�o sobre o Stade de France como local para a cerim�nia de abertura das Olimp�adas de 2024? Voc� acha que � uma escolha adequada?\n");
    printf("A)  sim, � um ic�nico est�dio, um �timo palco para as cerim�nias dos jogos ol�mpicos 2024\n");
    printf("B) n�o, acho que tem lugares melhores pra sediar a abertura dos jogos ol�mpicos em Paris\n");
}

void questMaquete2(){
    printf("Voc� j� teve oportunidade de visitar o Stade de France, ou assistir a algum evento esportivo l�?\n");
    printf("A) sim, eu amei\n");
    printf("B) n�o, mas gostaria muito\n");
    printf("C) n�o, n�o tenho vontade de visit�-lo\n");
}

void questMaquete3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}
void questBreakdance1(){
    printf("O que acha do Breakdance dance ser adicionado no quadro de esportes ol�mpicos?\n");
    printf("A) Bom\n");
    printf("B) indiferente\n");
    printf("C) ruim\n");
}

void questBreakdance2(){
    printf("J� tinha ouvido falar de Breakdance dance?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questBreakdance3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}
void questBasquete1(){
    printf("O que achou da bola autografada de LeBron James?\n");
    printf("A) Bonita\n");
    printf("B) Razoavel\n");
    printf("C) Feia\n");
}

void questBasquete2(){
    printf("J� tinha visto esse jogador antes?\n");
    printf("A) sim\n");
    printf("B) n�o\n");
}

void questBasquete3(){
    printf("Sobre esta obra qual sua opini�o?\n");
    printf("A) gostei\n");
    printf("B) n�o gostei\n");
    printf("C) gostaria de ver outra\n");
}



