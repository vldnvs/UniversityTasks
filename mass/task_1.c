#include <stdio.h>

int main()
{
    char message[] =  "Hellllllollo";
    
    int length = sizeof(message)/sizeof(char);
    
    int count = 1;
    int maxCount = 0;
    
    char tmpSymbol = 'a';
    for (int i = 1; i < length; i++){
       if (message[i] == message[i - 1]){
           count = count + 1;
       }
       else{
           if (count > maxCount){
               maxCount = count;}
        count = 1;
           
       }
        
    }
    if (count > maxCount){
               maxCount = count;
    }

    printf("%d", maxCount);
    return 0;
    
}
