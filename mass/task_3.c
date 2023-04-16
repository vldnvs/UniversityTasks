/*Выбрана тактика №2: динамический массив.*/

#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int size) {
    printf("Массив: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* append(int *arr, int *size) {
    (*size)++;
    arr = (int*)realloc(arr, (*size) * sizeof(int));
    printf("Значение чтобы добавить: ");
    scanf("%d", &arr[(*size) - 1]);
    return arr;
}

int* insert(int *arr, int *size, int pos) {
    (*size)++;
    arr = (int*)realloc(arr, (*size) * sizeof(int));
    for(int i = (*size) - 1; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    printf("Значение чтобы сделать insert: ");
    scanf("%d", &arr[pos]);
    return arr;
}

int main() {
    int *arr = NULL;
    int size = 0, choice = 1;

    printf("Ращмер массива: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    printf("Элементы массива:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while(choice != 0) {
        printf("\nOperations:\n");
        printf("1. Print array\n");
        printf("2. Append element\n");
        printf("3. Insert element\n");
        printf("0. Exit\n");
        printf("Ваш выбор?: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                print(arr, size);
                break;
            case 2:
                arr = append(arr, &size);
                printf("Значения успешно дгобавлены\n");
                break;
            case 3:
                int pos;
                printf("позиция для инсерта: ");
                scanf("%d", &pos);
                if(pos < 0 || pos >= size) {
                    printf("неправильная позиция\n");
                    break;
                }
                arr = insert(arr, &size, pos);
                printf("Значения успешно дгобавлены\n");
                break;
            case 0:
                printf("выход\n");
                break;
            default:
                printf("неправильный выбор\n");
        }
    }

    free(arr);
    return 0;
}