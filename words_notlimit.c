#include <stdio.h>
#include "words_notlimit.h"
#include <string.h>
/*
 * Se devuelve la cantidad de elementos válidos que el string posee
 * o -1 si no se encuentra el caracter '\0' en el vector
 */
int longitud_string(char string[MAX_STRING]){
    int cant = 0;
    
    while (string[cant] != '\0' && cant < MAX_STRING) {
        cant++;
    }

    return (string[cant] == '\0') ? cant : ERROR;
}

int longitud_string_libreria(char string[MAX_STRING]){
    return strlen(string);
}

int main()
{
        char string[MAX_STRING] = "Hola mundo";
        printf("La longitud del string es: %d\n", longitud_string(string));
        printf("La longitud del string es: %d\n", longitud_string_libreria(string));
        return 0;
}