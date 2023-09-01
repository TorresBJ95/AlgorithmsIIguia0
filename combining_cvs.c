#include <stdio.h>
#include "combining_cvs.h"

char ejercicio(char string1[MAX_STRING], char string2[MAX_STRING], char string3[MAX_STRING]){
    strcat(string1, string2);
    int n = strcmp(string1, string3);
    if(n <= 0){
        return 'C';
    }else{
        return 'S';
    }
}
int main()
{
        char string1[] = "Algo";
        char string2[] = "ritmo";
        char string3[] = "Programacion";
        char result = ejercicio(string1, string2, string3);
        printf("%c", result);
        return 0;
}