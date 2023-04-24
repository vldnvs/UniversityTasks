#include <string.h>
#include <stdio.h>
#include <time.h>

#define SIZE 100

// алгоритмы имеют разное время выполнения из-за разной сложнсти (например О(n^2) или O(n*logn))

void selection_sort(char[SIZE][SIZE], int);
void bubble_sort(char[SIZE][SIZE], int);
void hair_sort(char[SIZE][SIZE], int);


int main()
{
    char word[SIZE];
    
    char wordsMassive[SIZE][SIZE];

    int choise;
    
    for (int i = 0; i < 10; i++ ){
        
        printf("Введите значение: ");
        scanf("%20s", word);
        
        strcpy(wordsMassive[i], word);
    }

    printf("Введите ваш выбор: (1 - сортировка выбором, 2 - пузырьком, 3 - расческой)\n");
    scanf("%d", &choise);
        

    if (choise == 1){
        time_t t0 = time(0);
        selection_sort(wordsMassive, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ){
    
            printf("%s\n", wordsMassive[i]);
        
        
    }
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }

    else if (choise == 2){
        time_t t0 = time(0);
        bubble_sort(wordsMassive, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ){
    
            printf("%s\n", wordsMassive[i]);
        
        
    }
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }

    else if (choise == 3){
        time_t t0 = time(0);
        hair_sort(wordsMassive, 10);
        time_t t1 = time(0);

        for (int i = 0; i < 10; i++ ){
    
            printf("%s\n", wordsMassive[i]);
        
        
    }
    double time_in_seconds = difftime(t1, t0);
        printf("%f", time_in_seconds);
    }
    
    else if (choise == 4){
        time_t t0 = time(0);
        selection_sort(wordsMassive, 10);
        time_t t1 = time(0);
        
        double time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
        
         t0 = time(0);
        bubble_sort(wordsMassive, 10);
         t1 = time(0);
         
         time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
        
         t0 = time(0);
        hair_sort(wordsMassive, 10);
         t1 = time(0);
         
         time_in_seconds = difftime(t1, t0);
        printf("%f\n", time_in_seconds);
    
    }
    

    

    return 0;
}

void selection_sort(char str[SIZE][SIZE], int n)
{
    int i, j, min_idx;
    char temp[SIZE];
 
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (strcmp(str[j], str[min_idx]) < 0)
                min_idx = j;
 
        if (min_idx != i)
        {
            strcpy(temp, str[i]);
            strcpy(str[i], str[min_idx]);
            strcpy(str[min_idx], temp);
        }
    }
}

void bubble_sort(char strings[SIZE][SIZE], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (strcmp(strings[i], strings[j]) > 0) {
                char *temp = strings[i];
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }
}

void hair_sort(char arr[SIZE][SIZE], int n) {
    int gap = n;
    int swapped = 1;
    char temp[SIZE];
    int iterations = 0;
    while (gap > 1 || swapped) {
        gap = gap * 10 / 13;
        if (gap == 0)
            gap = 1;
        swapped = 0;
        int i;
        for (i = 0; i < n - gap; i++) {
            if (strcmp(arr[i], arr[i + gap]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[i + gap]);
                strcpy(arr[i + gap], temp);
                swapped = 1;
            }
            iterations++;
        }
    }
}