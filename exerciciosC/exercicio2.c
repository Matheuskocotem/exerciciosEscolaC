#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    printf("A soma dos elementos do array é: %d\n", soma);
    return 0;
}
