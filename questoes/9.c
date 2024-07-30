#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int main(){
    int n;
    printf("Tamanho da lista: ");
    scanf("%d", &n);
    struct No *cabeca = NULL;
    
    for(int i=0; i<n; i++){
        struct No *novoNo = (struct No*) malloc(sizeof(struct No));
        printf("%d nó da lista: ", i);
        scanf("%d", &(novoNo->valor));
        novoNo->proximo = cabeca;
        cabeca = novoNo;
    }
    
    printf("lista encadeada:\n");
    
    struct No *aux = cabeca;
    while(aux!=NULL){
        printf("%d ", aux->valor);
        aux=aux->proximo;
    }
    
    while(cabeca!=NULL){
        struct No *aux = cabeca;
        cabeca = cabeca->proximo;
        free(aux);
    }
    
    return 0;
}
