#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr, int size) {
    int *start = arr;   
    int *end = arr + size - 1;

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    system("chcp 65001");
    int size;
    printf("Введіть розмір масиву: ");
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Початковий масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    reverse_array(array, size);

    printf("Реверсований масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}