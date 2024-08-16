#include <stdio.h>

int main() {
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int valor;
    int contagem = 0;

    printf("um valor: ");
    scanf("%d", &valor);

    for (int i = 0; i < 8; i++) {
        if (array[i] == valor) {
            contagem++;
        }
    }

    printf("O valor %d aparece %d vezes no array.\n", valor, contagem);

}
