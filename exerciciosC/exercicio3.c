#include <stdio.h>

int main() {
    int array[10] = {3, 1, 4, 1, 5, 9, 2, 6, 8, 7};
    int maior, menor;

    maior = menor = array[0];

    for (int i = 1; i < 10; i++) {
        if (array[i] > maior) {
            maior = array[i];
        } else if (array[i] < menor) {
            menor = array[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

}
