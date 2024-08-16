#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];
    printf("Digite os valores do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array invertida:\n");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
