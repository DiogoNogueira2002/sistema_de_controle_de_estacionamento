#include "subtelas.h"
#include "telas.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char opcao;
  char subopcao;
  char subopcao2;
  char subopcao3[3];
  char pagamento[4];
  do {
    opcao = tela_principal();
    if (opcao == '1') 
    {
      do 
      {
        subopcao = tela_clientes();
        if (subopcao == '1')
        {
          subtela_cadastrarcliente();
        }
        else if (subopcao == '2')
        {
          subtela_mostrarclientes();
        }
        else if (subopcao == '3')
        {
          subopcao2 = subtela_editarcliente();
        }
        else if (subopcao == '4')
        {
          subopcao2 = subtela_removercliente();
        }
        else 
        {
          if (subopcao != '0') 
          {
          printf("\nDigite algo válido\n");
          getchar();
          }
        }
      } while (subopcao != '0');
    }
    else if (opcao == '2') 
    {
      do 
      {
        subopcao = tela_estac();
        if (subopcao == '1')
        {
          subopcao2 = subtela_adicionarvagas_esc();
          if (subopcao2 == '0')
          {
            do 
            {
              subtela_adicionarvaga_man();
              scanf("%s", subopcao3);
              getchar();
              printf("\n");
              printf("\nAperte ENTER para continuar...");
              getchar();
            } while ((subopcao3[0] != '0') || (subopcao3[1] != '0') || (subopcao3[2]!= '0')); 
          }
          else if (subopcao2 == '1')
          {
            do 
            {
              subtela_adicionarvaga_aut();
              scanf("%s", subopcao3);
              getchar();
              printf("\n");
              printf("\nAperte ENTER para continuar...");
              getchar();
            } while ((subopcao3[0] != '0') || (subopcao3[1] != '0') || (subopcao3[2]!= '0')); 
          }
          else 
          {
            printf("Digite algo válido\n");
          }
        }
        else if (subopcao == '2')
        {
          subtela_mostrarvagas();
        }
        else if (subopcao == '3')
        {
          subtela_editarvagas();
          scanf("%s", subopcao3);
          getchar();
          printf("\n");
          printf("\nAperte ENTER para continuar...");
          getchar();
        }
        else if (subopcao == '4')
        {
          subopcao2 = subtela_removervagas();
        }
        else 
        {
          if (subopcao != '0') 
          {
          printf("\nDigite algo válido\n");
          getchar();
          }
        }
      } while (subopcao != '0');
    } 
    else if (opcao == '3') 
    {
      do 
      {
        subopcao = tela_pag();
        if (subopcao == '1')
        {
          subtela_realizarpag();
          scanf("%s", pagamento);
          getchar();
          printf("\n");
          printf("\nAperte ENTER para continuar...");
          getchar();
        }
        else if (subopcao == '2')
        {
          subtela_mostrarpagamentos();
        }
        else 
        {
          if (subopcao != '0') 
          {
          printf("\nDigite algo válido\n");
          getchar();
          }
        }
      } while (subopcao != '0');
    } 
    else if (opcao == '4')
    {
      tela_precos();
    } 
    else if (opcao == '5')
    {
      tela_sobre();
    } 
    else
    {
      if (opcao != '0') {
        printf("\nDigite algo válido\n");
        getchar();
      }
    }
  } while (opcao != '0');
  return 0;
}
