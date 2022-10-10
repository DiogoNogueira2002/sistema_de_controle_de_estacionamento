#include <stdio.h>
#include <stdlib.h>

void subtela_cadastrarveiculo(void) {
  // o tempo será armazenado no momento do cadastro para comparar no check-out e calcular o preço a ser pago. 
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                   Cadastrar Veículo                 =========\n");
  printf("=======================================================================\n");
  printf("========= Placa do Veículo: \n");
  printf("========= Tipo do Veículo: \n");
  printf("========= Marca do Veículo: \n");
  printf("========= Modelo do Veículo: \n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_mostrarveiculos(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========             Mostrar Todos os Veículos               =========\n");
  printf("=======================================================================\n");
  printf("Placa do Veículo: \n");
  printf("Tipo do Veículo: \n");
  printf("Marca do Veículo: \n");
  printf("Modelo do Veículo: \n");
  printf("\n");
  printf("Placa do Veículo: \n");
  printf("Tipo do Veículo: \n");
  printf("Marca do Veículo: \n");
  printf("Modelo do Veículo: \n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_pesquisarveiculo(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                   Pesquisar Veículo                 =========\n");
  printf("=======================================================================\n");
  printf("========= Informe a Placa do Veículo: \n");
  printf("=========\n");
  printf("========= 1 - Placa do Veículo:\n");
  printf("========= 2 - Tipo do Veículo:\n");
  printf("========= 3 - Marca do Veículo: \n");
  printf("========= 4 - Modelo do Veículo:\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

char subtela_editarveiculo(void) {
  char opcao;
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                     Editar Veículo                 =========\n");
  printf("=======================================================================\n");
  printf("========= Informe a Placa do Veículo: \n");
  printf("=========\n");
  printf("========= 1 - Placa do Veículo:\n");
  printf("========= 2 - Tipo do Veículo:\n");
  printf("========= 3 - Marca do Veículo: \n");
  printf("========= 4 - Modelo do Veículo:\n");
  printf("=========\n");
  printf("========= Escolha uma opcao para editar ou digite 0 para cancelar: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

char subtela_removerveiculo(void) {
  char opcao;
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                     Remover Veículo                 =========\n");
  printf("=======================================================================\n");
  printf("========= Informe a Placa do Veículo:\n");
  printf("=========\n");
  printf("========= 1 - Placa do Veículo:\n");
  printf("========= 2 - Tipo do Veículo:\n");
  printf("========= 3 - Marca do Veículo: \n");
  printf("========= 4 - Modelo do Veículo:\n");
  printf("=========\n");
  printf("========= Digite 0 para cancelar ou 1 para remover: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

char subtela_adicionarvagas_esc(void) {
  char opcao;
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                    Adicionar Vagas                 =========\n");
  printf("=======================================================================\n");
  printf("========= Digite 0 para o modo Manual ou 1 para o modo Automático: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

void subtela_adicionarvaga_man(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========              Adicionar Vagas (Manual)               =========\n");
  printf("=======================================================================\n");
  printf("========= \n");
  printf("========= Digite o Nome da Vaga (xxx) ou 000 para voltar: ");
}

void subtela_adicionarvaga_aut(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========            Adicionar Vagas (Automático)             =========\n");
  printf("=======================================================================\n");
  printf("========= Insira a quantidade de vagas (xxx): ");
}

void subtela_pesquisarvaga(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                     Pesquisar Vaga                  =========\n");
  printf("=======================================================================\n");
  printf("========= Informe o Nome da Vaga: 001 \n");
  printf("=========\n");
  printf("========= Nome da Vaga: 001\n");
  printf("========= Estado Atual: Ocupada\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_mostrarvagas(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                 Mostrar Todas as Vagas              =========\n");
  printf("=======================================================================\n");
  printf("Nome da Vaga: 001\n");
  printf("Estado Atual: Ocupada\n");
  printf("\n");
  printf("Nome da Vaga: 002\n");
  printf("Estado Atual: Disponível\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_editarvagas(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                      Editar Vagas                   =========\n");
  printf("=======================================================================\n");
  printf("========= Informe o Nome da Vaga: 001 \n");
  printf("=========\n");
  printf("========= Nome da Vaga: 001\n");
  printf("========= Estado Atual: Ocupada\n");
  printf("=========\n");
  printf("========= Digite o novo nome (xxx) ou 000 para cancelar: ");
}

char subtela_removervagas(void) {
  char opcao;
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                     Remover Vagas                   =========\n");
  printf("=======================================================================\n");
  printf("========= Informe o Nome da Vaga: 001\n");
  printf("=========\n");
  printf("========= Nome da Vaga: 001\n");
  printf("========= Estado Atual: Ocupado\n");
  printf("=========\n");
  printf("========= Digite 0 para cancelar ou 1 para remover: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

void subtela_checkin(void) {
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                  Realizar Check-in                  =========\n");
  printf("=======================================================================\n");
  printf("========= Informe a Placa do Veículo:\n");
  printf("========= Informe a Vaga do Estacionamento:\n");
  printf("========= Digite 1 para realizar check-in ou 0 para cancelar:\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_checkout(void) {
// o valor a ser pago será calculado por uma fórmula ainda em desenvolvimento
  system("clear||cls");
  printf("=======================================================================\n");
  printf("=========                    Realizar Check-out               =========\n");
  printf("=======================================================================\n");
  printf("========= Informe a Placa do Veículo:\n");
  printf("========= Tempo de uso:\n");
  printf("========= Valor a ser pago:\n");
  printf("========= Digite 1 para realizar check-out ou 0 para cancelar:\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}