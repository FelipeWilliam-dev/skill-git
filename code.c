#include <stdio.h>

int main() {
    int limite = 10;

    printf("Contando numeros pares ate %d:\n", limite);

    // Loop que passa por todos os numeros de 1 a 10
    for (int i = 0; i <= limite; i+=2) {
        
        printf("%d\n", i);
    
    }

    return 0;
}