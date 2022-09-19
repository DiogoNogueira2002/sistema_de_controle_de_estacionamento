#include <stdio.h>
#include <stdlib.h>

void tela_principal(void)
{
char opcao;
system("clear||cls");
printf("=======================================================================\n");
printf("=========                        SCE                          =========\n");
printf("=========        Sistema de Controle de Estacionamentos       =========\n");
printf("=======================================================================\n");
printf("========= 1 - Menu de Clientes\n");
printf("========= 2 - Menu de Estacionamento\n");
printf("========= 3 - Menu de Pagamento\n");
printf("========= 4 - Tabela de Precos\n");
printf("========= 5 - Sobre\n");
printf("========= 0 - Sair\n");
printf("\nDigite sua opcao: ");
scanf("%c", &opcao);
getchar();
printf("\nAperte ENTER para continuar...");
getchar();
}

void tela_clientes(void)
{
char opcao;
system("clear||cls");
printf("=======================================================================\n");
printf("=========                    Menu de Clientes                 =========\n");
printf("=======================================================================\n");
printf("========= 1 - Cadastrar Cliente\n");
printf("========= 2 - Mostrar Todos os Clientes\n");
printf("========= 3 - Editar Cliente\n");
printf("========= 4 - Remover Cliente\n");
printf("========= 0 - Voltar\n");
printf("\nDigite sua opcao: ");
scanf("%c", &opcao);
getchar();
printf("\nAperte ENTER para continuar...");
getchar();
}

void tela_estac(void)
{
char opcao;
system("clear||cls");
printf("=======================================================================\n");
printf("=========                 Menu de Estacionamento              =========\n");
printf("=======================================================================\n");
printf("========= 1 - Adicionar Vagas\n");
printf("========= 2 - Mostrar Todas as Vagas\n");
printf("========= 3 - Editar Vagas\n");
printf("========= 4 - Remover Vagas\n");
printf("========= 0 - Voltar\n");
printf("\nDigite sua opcao: ");
scanf("%c", &opcao);
getchar();
printf("\nAperte ENTER para continuar...");
getchar();
}

void tela_pag(void)
{
char opcao;
system("clear||cls");
printf("=======================================================================\n");
printf("=========                   Menu de Pagamento                 =========\n");
printf("=======================================================================\n");
printf("========= 1 - Realizar Pagamento\n");
printf("========= 2 - Mostrar Pagamentos\n");
printf("========= 0 - Voltar\n");
printf("\nDigite sua opcao: ");
scanf("%c", &opcao);
getchar();
printf("\nAperte ENTER para continuar...");
getchar();
}

void tela_precos(void)
{
system("clear||cls");
printf("=======================================================================\n");
printf("=========                   Tabela de Precos                  =========\n");
printf("=======================================================================\n");
printf("=========      30 minutos      ====== R$ 0,60 =========================\n");
printf("=========        1 hora        ====== R$ 1,20 =========================\n");
printf("========= 1 hora e 30 minutos  ====== R$ 1,80 =========================\n");
printf("=========        2 horas       ====== R$ 2,40 =========================\n");
printf("========= 2 horas e 30 minutos ====== R$ 3,00 =========================\n");
printf("=========        3 horas       ====== R$ 3,60 =========================\n");
printf("========= 3 horas e 30 minutos ====== R$ 4,20 =========================\n");
printf("=========        4 horas       ====== R$ 4,80 =========================\n");
printf("========= 4 horas e 30 minutos ====== R$ 5,40 =========================\n");
printf("=========        5 horas       ====== R$ 6,00 =========================\n");
printf("=======================================================================\n");
printf("\nAperte ENTER para continuar...");
getchar();
}

void tela_sobre(void)
{
system("clear||cls");
printf("=======================================================================\n");
printf("=========   UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE    ============\n");
printf("=========       CENTRO DE ENSINO SUPERIOR DO SERIDO        ============\n");
printf("=========     DEPERTAMENTO DE COMPUTACAO E TECNOLOGIA      ============\n");
printf("=========      BACHARELADO EM SISTEMAS DE INFORMACAO       ============\n");
printf("=========        DISCIPLINA: PROGRAMACAO (DCT1106)         ============\n");
printf("=========  PROJETO SISTEMA DE CONTROLE DE ESTACIONAMENTOS  ============\n");
printf("=========                                                  ============\n");
printf("=========    Este Sistema tem como funcionalidade o con-   ============\n");
printf("========= trole, entrada e saidas de veiculos, alem de re- ============\n");
printf("========= gistrar o fluxo financeiro realizado pelos cli-  ============\n");
printf("========= entes, facilitando assim o intermedio dos admi-  ============\n");
printf("========= nistradores que usarao o sistema.                ============\n");
printf("=========                                                  ============\n");
printf("=========  PROJETO DESENVOLVIDO POR:                       ============\n");
printf("=========  DIOGO VICTOR DE SOUZA NOGUEIRA                  ============\n");
printf("=========  E-MAIL: estudantediogo2203@gmail.com            ============\n");
printf("=========  GITHUB: https://github.com/DiogoNogueira2002    ============\n");
printf("=======================================================================\n");
printf("\nAperte ENTER para continuar...");
getchar();
}
