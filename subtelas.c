#include <stdio.h>
#include <stdlib.h>

void subtela_cadastrarcliente(void) {
  // no momento do cadastro ele armazenará o tempo que foi realizado
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                   Cadastrar Cliente                 "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Nome: Diogo Victor\n");
  printf("========= Vaga do Estacionamento: 001\n");
  printf("========= Tipo do Veículo: Carro\n");
  printf("========= Placa do Veículo: MHZ9889\n");
  printf("========= Tempo de Uso: 30 minutos\n");
  printf("========= Objetos do Veículo: notebook, celular e 30 reais\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

void subtela_mostrarclientes(void) {
  // quando mostrar o relatório, pegará novamente o tempo atual e checará com o
  // tempo de cadastro, verificando o tempo restante.
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========             Mostrar Todos os Clientes               "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("Nome: Diogo Victor\n");
  printf("Vaga do Estacionamento: 001\n");
  printf("Tipo do Veículo: Carro\n");
  printf("Placa do Veículo: MHZ9889\n");
  printf("Tempo de Uso: 30 minutos\n");
  printf("Objetos do Veículo: notebook, celular e 30 reais\n");
  printf("Pagamento: Realizado\n");
  printf("Tempo Restante: 15 minutos\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}

char subtela_editarcliente(void) {
  // no momento do cadastro ele armazenará o tempo que foi realizado
  char opcao;
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                     Editar Cliente                  "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Informe a Placa do Veículo: MHZ9889\n");
  printf("=========\n");
  printf("========= 1 - Nome: Diogo Victor\n");
  printf("========= 2 - Vaga do Estacionamento: 001\n");
  printf("========= 3 - Tipo do Veículo: Carro\n");
  printf("========= 4 - Placa do Veículo: MHZ9889\n");
  printf("========= 5 - Tempo de Uso: 30 minutos\n");
  printf("========= 6 - Objetos do Veículo: notebook, celular e 30 reais\n");
  printf("=========\n");
  printf("========= Escolha uma opcao para editar ou digite 0 para cancelar: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

char subtela_removercliente(void) {
  // no momento do cadastro ele armazenará o tempo que foi realizado
  char opcao;
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                     Remover Cliente                 "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Informe a Placa do Veículo: MHZ9889\n");
  printf("=========\n");
  printf("========= 1 - Nome: Diogo Victor\n");
  printf("========= 2 - Vaga do Estacionamento: 001\n");
  printf("========= 3 - Tipo do Veículo: Carro\n");
  printf("========= 4 - Placa do Veículo: MHZ9889\n");
  printf("========= 5 - Tempo de Uso: 30 minutos\n");
  printf("========= 6 - Objetos do Veículo: notebook, celular e 30 reais\n");
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
  printf("====================================================================="
         "==\n");
  printf("=========                    Adicionar Vagas                 "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Digite 0 para o modo Manual ou 1 para o modo Automático: ");
  scanf("%c", &opcao);
  getchar();
  printf("\nAperte ENTER para voltar...");
  getchar();
  return opcao;
}

void subtela_adicionarvaga_man(void) {
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========              Adicionar Vagas (Manual)               "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= \n");
  printf("========= Digite o Nome da Vaga (xxx) ou 000 para voltar: ");
}

void subtela_adicionarvaga_aut(void) {
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========            Adicionar Vagas (Automático)             "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Insira a quantidade de vagas (xxx): ");
}

void subtela_mostrarvagas(void) {
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                 Mostrar Todas as Vagas              "
         "=========\n");
  printf("====================================================================="
         "==\n");
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
  printf("====================================================================="
         "==\n");
  printf("=========                      Editar Vagas                   "
         "=========\n");
  printf("====================================================================="
         "==\n");
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
  printf("====================================================================="
         "==\n");
  printf("=========                     Remover Vagas                   "
         "=========\n");
  printf("====================================================================="
         "==\n");
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

void subtela_realizarpag(void) {
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                 Realizar Pagamento                  "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("========= Informe a Placa do Veículo: MHZ9889\n");
  printf("=========\n");
  printf("========= Nome: Diogo Victor\n");
  printf("========= Vaga do Estacionamento: 001\n");
  printf("========= Tipo do Veículo: Carro\n");
  printf("========= Placa do Veículo: MHZ9889\n");
  printf("========= Tempo de Uso: 30 minutos\n");
  printf("========= Pagamento: Não Realizado\n");
  printf("=========\n");
  printf(
      "========= Digite o valor do pagamento (x.xxx) ou 0000 para cancelar:");
}

void subtela_mostrarpagamentos(void) {
  system("clear||cls");
  printf("====================================================================="
         "==\n");
  printf("=========                   Mostrar Pagamentos                "
         "=========\n");
  printf("====================================================================="
         "==\n");
  printf("Nome: Diogo Victor\n");
  printf("Vaga do Estacionamento: 001\n");
  printf("Tipo do Veículo: Carro\n");
  printf("Placa do Veículo: MHZ9889\n");
  printf("Tempo de Uso: 30 minutos\n");
  printf("Valor de Pagamento: R$ 0.60\n");
  printf("\nAperte ENTER para voltar...");
  getchar();
}