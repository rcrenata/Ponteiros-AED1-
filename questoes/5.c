#include <stdio.h>
//questão 5
int main(){
    int a, b;
    int *pa = &a;
    int *pb = &b;
    printf("tamanho de a: %lu\n", sizeof(*pa));
    printf("tamanho de b: %lu", sizeof(*pb));
    
    return 0;
}
