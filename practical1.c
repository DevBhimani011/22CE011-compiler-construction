#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    int flag = 0;
    int i=0;

    while (inputString[i] =='a')
    {
        i++;
    
    }
    if(inputString[i] == 'b' && inputString[i+1] == 'b' && inputString[i+2] == '\0'){
        flag = 1;
    }

    if(flag == 1){
        printf("valid string");
    }else{
        printf("invalid string");
    }
    
    return 0;
} 