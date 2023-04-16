#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5                              
#define COLS 5                               


int find_element(int arr[][COLS], int element, int *row, int *col) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == element) {
                *row = i;                                                   
                *col = j;                                                   
                return 1;                                                 
            }
        }
    }
    return 0;                                                             
}

int main() {
    int arr[ROWS][COLS];                                      
    int element;                                               
    int row, col;                                              

    
    printf("Начальный массив:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 1000;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

   
    printf("Какой элемент ищем ? ");
    scanf("%d", &element);

    
    if (find_element(arr, element, &row, &col)) {
        printf("\n %d row , column %d\n", row + 1, col + 1);
    } else {
        printf("\nНе нашлось\n");
    }

    return 0;
}

