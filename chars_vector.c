#include <stdio.h>
#include <stdbool.h>
#include "chars_vector.h"

/*
 * Dado un vector de chars, su tope y la letra a buscar
 * se devuelve true si la letra se encuentra aunque sea una vez en la 
 * palabra, y false si la letra no se encuentra en la palabra.
*/
bool contiene_letra(char palabra[MAX_VECTOR], int tope, char letra){
    bool there_is = false;
    for (int i = 0; i < tope; i++) {
        if (palabra[i] == letra) {
                there_is = true;
                break;
        }

    }
    return there_is;
}
int main()
{
        char palabra[MAX_VECTOR] = {'a', 'b', 'c', 'd', 'e'};
        int tope = 5;
        char letra = 'a';
        bool resultado = contiene_letra(palabra, tope, letra);
        printf("%d \n", resultado);

        return 0;
}