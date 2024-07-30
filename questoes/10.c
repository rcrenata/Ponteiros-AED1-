#include <stdio.h>
#include <stdlib.h>

struct No{
    int valor;
    struct No *proximo;
};

int maior(struct No *cabeca) {
    int maiorValor = cabeca->valor;
    struct No *temp = cabeca->proximo;

    while(temp != NULL) {
        if(temp->valor > maiorValor) {
            maiorValor = temp->valor;
        }
        temp = temp->proximo;
    }

    return maiorValor;
}

int main(){
    int n;
    printf("Tamanho da lista: ");
    scanf("%d", &n);
    struct No *cabeca = NULL;
    
    for(int i=0; i<n; i++){
        struct No *novoNo = (struct No*) malloc(sizeof(struct No));
        printf("%d no da lista: ", i);
        scanf("%d", &(novoNo->valor));
        novoNo->proximo = cabeca;
        cabeca = novoNo;
    }
    
    int maiorValor = maior(cabeca);
    
    printf("no de maior valor da lista encadeada: %d\n", maiorValor);

    while(cabeca!=NULL){
        struct No *aux = cabeca;
        cabeca = cabeca->proximo;
        free(aux);
    }
    
    return 0;
}
