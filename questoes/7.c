#include <stdio.h>
#include <stdlib.h>
//questão 7
int main() {
    int *pvet;
    int n;
    pvet = (int*) malloc(n*sizeof(int));
    printf("Tamanho da lista: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d valor: ", i);
        scanf("%d", &pvet[i]);
    }

    printf("Lista na ordem inversa: ");
    for(int i=(n-1); i>=0; i--){
        printf("%d ", pvet[i]);
    }
    free(pvet);
    
    return 0;
}
