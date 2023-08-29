#include <stdio.h>
#include "where_is_the_letter.h"
/*
 * Se recibe un vector de letras, su tope y la letra a buscar.
 * Se devuelve la posición de la letra o -1 en caso de que no se encuentre.
*/
int posicion_letra(char vector[MAX_VECTOR], int tope, char letra){
    for (int i = 0; i <= tope; i++) {
        if (vector[i] == letra) {
                return i;
        }else if (vector[i] == '\0') {
                return ERROR;

        }else if (i == tope) {
                return ERROR;
        }
    }
}

int main()
{
        int result = posicion_letra("vector4", 4, 'H');
        printf("%d", result);
        return 0;
}