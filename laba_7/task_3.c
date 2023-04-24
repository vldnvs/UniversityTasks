#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];
    int vowels = 0, consonants = 0;

    // Получаем ввод от пользователя
    printf("Введите слово: ");
    scanf("%s", word);

    // Перебираем буквы в слове
    for(int i = 0; word[i] != '\0'; i++) {
        // Если буква - гласная, то увеличиваем счетчик гласных
        if(tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || 
           tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || 
           tolower(word[i]) == 'u' || tolower(word[i]) == 'y') {
            vowels++;
        }
        // Иначе увеличиваем счетчик согласных
        else {
            consonants++;
        }
    }

    // Выводим результаты
    printf("Количество гласных: %d\n", vowels);
    printf("Количество согласных: %d\n", consonants);

    return 0;
}