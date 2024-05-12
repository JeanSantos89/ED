#include <stdlib.h>
#include <stdio.h>
#define tamMAX 5

typedef struct{
        int vetor[tamMAX];
        int topo;
    }pilha;


int main(){ 
    pilha p;
    p.topo = 0;
    int escolha, valor, cont = tamMAX;

    printf("Monte a sua pilha digitando: 1\n");
    scanf("%d",&escolha);

    if(escolha == 1){
        if(p.topo == tamMAX){
            printf("fila cheia");
        }else{
            for(int i=0; i<tamMAX;i++){
                printf("Digite o valor que deseja empilhar:");
                scanf("%d",&valor);
                p.vetor[p.topo] = valor;
                printf("elemento empilhado: %d\n", p.vetor[p.topo]);
                p.topo++;
            }
                printf("Voce encheu seu vetor.\n");
                while(p.topo != 0){
                    p.topo--;
                    cont--;
                        printf("elemento desempilhado: %d    | POSICAO VETOR [%d]\n", p.vetor[p.topo], cont);
                }
                    if(p.topo == 0){
                        printf("-----------pilha vazia-----------\n");
                }
                        
            }
        }  
    else{
        printf("ERROR");
        }

    return 0;
}
