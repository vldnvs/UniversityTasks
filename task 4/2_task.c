#include <stdio.h>
#include <locale.h>
void getInput();
int testInput(char* str);
int strToInt(char* str);
void printInt(int a);
int main()
{
 setlocale(LC_ALL, "Rus");
 getInput();
 return 0;
}
void getInput()
{
 char a[20];
 for (int i = 0; i < 20; i++)
 {
 a[i] = 0;
 }
 printf("Введите строку: ");
 scanf_s("%s", &a, 19);
 int bol = testInput(a);
 if (bol) {
 int coun = strToInt(a);
 printInt(coun);
 }
}
int testInput(char* str)
{
 for (int i = 0; str[i] != 0 && i < 20; i++) {
 if (str[0] == '0' || str[0] == '-') continue;
 if (!('0' < str[i] && str[i] <= '9')) { return 0;}
 }
 return 1;
}
int strToInt(char* str)
{
 int am = 0, a = 0;
 for (int i = 0; str[i] != 0 && i < 20; i++)
 {
 if (str[i] == '-') { am = 1;}
 else a = a * 10 + (str[i] - '0');
 }
 if (am == 1) { a *= -1; }
 return a;
}
void printInt(int a)
{
 printf("\n%d\n", a);
}