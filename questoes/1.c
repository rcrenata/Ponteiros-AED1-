#include <stdio.h>

struct tipoAluno{
    char nome[40];
    int idade;
};

int main(){
    char a = 'A', *pa;
    int b = 100, *pb;
    float c = 2.55, *pc;
    struct tipoAluno d = {"Ana", 25}, *pd;
    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    
    printf("valor de a: %c\n", a);
    printf("valor de b: %d\n", b);
    printf("valor de c: %f\n", c);
    printf("idade de d: %d\n", d.idade);
    
    *pa = 'B';
    *pb = 50;
    *pc = 45.82;
    pd->idade = 50;
    
    printf("\nnovo valor de a: %c\n", a);
    printf("novo valor de b: %d\n", b);
    printf("novo valor de c: %f\n", c);
    printf("nova idade de d: %d", d.idade);
    
    return 0;
}
