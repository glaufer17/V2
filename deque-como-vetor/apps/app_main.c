#include "deque_como_vetor.h"
#include <stdio.h>
#include <stdlib.h> 


int main() { 
    
   printf("\n--- Deque como Vetor ---\n\n");
   printf("\n--- Trabalho de Estrutura de Dados ---\n");

   printf("\n----- Lista Duplamente Encadeada -----\n\n");
     

      int opcao, valor;
      Lista lista;

      criar_lista(&lista);
      

     do{
         printf("\n\t 0 - Sair \n\t1 - Inserir no Inicio \n\t2 - Inserir no Final \n\t3 - Imprimir Lista \n\t4 - Remover no Inicio \n\t5 - Remover no Final");
         scanf("%d", &opcao); 

         switch (opcao)
         {
         case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
         case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_final(&lista, valor);
            break;
         case 3:
            imprimir_lista(lista);
            break;
         case 4:
            remover_no_inicio(lis);
            break;
         case 5:
            /* code */
            break;
         
         default:
            break;
         }
     }while(opcao != 0);     
   
   return 0;

}