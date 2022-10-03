#include <stdio.h>
#include <stdlib.h>

char tela_principal(void)
{
    char opcao;
    system("clear||cls");
    printf("=======================================================================\n");
    printf("=========                        SCE                          =========\n");
    printf("=========        Sistema de Controle de Estacionamentos       =========\n");
    printf("=======================================================================\n");
    printf("========= 1 - Menu de Veículos\n");
    printf("========= 2 - Menu de Vagas\n");
    printf("========= 3 - Menu de Movimentações\n");
    printf("========= 4 - Tabela de Precos\n");
    printf("========= 5 - Sobre\n");
    printf("========= 0 - Sair\n");
    printf("\nDigite sua opcao: ");
    scanf("%c", &opcao);
    getchar();
    printf("\nAperte ENTER para continuar...");
    getchar();
    return opcao;
}

char tela_veiculos(void)
{
    char opcao;
    system("clear||cls");
    printf("=======================================================================\n");
    printf("=========                    Menu de Veículos                 =========\n");
    printf("=======================================================================\n");
    printf("========= 1 - Cadastrar Veículo\n");
    printf("========= 2 - Pesquisar Veículo\n");
    printf("========= 3 - Mostrar Todos os Veículos\n");
    printf("========= 4 - Editar Veículo\n");
    printf("========= 5 - Remover Veículo\n");
    printf("========= 0 - Voltar\n");
    printf("\nDigite sua opcao: ");
    scanf("%c", &opcao);
    getchar();
    printf("\nAperte ENTER para continuar...");
    getchar();
    return opcao;
}

char tela_vagas(void)
{
    char opcao;
    system("clear||cls");
    printf("=======================================================================\n");
    printf("=========                     Menu de Vagas                   =========\n");
    printf("=======================================================================\n");
    printf("========= 1 - Adicionar Vagas\n");
    printf("========= 2 - Pesquisar Vaga\n");
    printf("========= 3 - Mostrar Todas as Vagas\n");
    printf("========= 4 - Editar Vagas\n");
    printf("========= 5 - Remover Vagas\n");
    printf("========= 0 - Voltar\n");
    printf("\nDigite sua opcao: ");
    scanf("%c", &opcao);
    getchar();
    printf("\nAperte ENTER para continuar...");
    getchar();
    return opcao;
}

char tela_mov(void)
{
    char opcao;
    system("clear||cls");
    printf("=======================================================================\n");
    printf("=========                 Menu de Movimentações               =========\n");
    printf("=======================================================================\n");
    printf("========= 1 - Realizar check-in\n");
    printf("========= 2 - Realizar check-out\n");
    printf("========= 0 - Voltar\n");
    printf("\nDigite sua opcao: ");
    scanf("%c", &opcao);
    getchar();
    printf("\nAperte ENTER para continuar...");
    getchar();
    return opcao;
}

void tela_precos(void)
{
    system("clear||cls");
    printf("=======================================================================\n");
    printf("=========                   Tabela de Precos                  =========\n");
    printf("=======================================================================\n");
    printf("=========      30 minutos      ====== R$      =========================\n");
    printf("=========        1 hora        ====== R$      =========================\n");
    printf("========= 1 hora e 30 minutos  ====== R$      =========================\n");
    printf("=========        2 horas       ====== R$      =========================\n");
    printf("========= 2 horas e 30 minutos ====== R$      =========================\n");
    printf("=========        3 horas       ====== R$      =========================\n");
    printf("========= 3 horas e 30 minutos ====== R$      =========================\n");
    printf("=========        4 horas       ====== R$      =========================\n");
    printf("========= 4 horas e 30 minutos ====== R$      =========================\n");
    printf("=========        5 horas       ====== R$      =========================\n");
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
