#include <stdio.h>

#define ERROR -1

/*
 * Se recibe una letra. Si ella se corresponde con alguna de las proveídas en el enunciado (A, R, L, G, F, O, T, C, R, B) se devuelve la cantidad de batallas ganadas por el pokemon respectivo.
 */
int batallas_ganadas(char letra){
        int battles;
        switch (letra)
        {
        case 'A':
                battles = 20;
                break;
        case 'R':
                battles = 17;
                break;
        case 'L':
                battles = 15;
                break;
        case 'G':
                battles = 30;
                break;
        case 'F':
                battles = 8;
                break;
        case 'O':
                battles = 27;
                break;
        case 'T':
                battles = 5;
                break;
        case 'C':
                battles = 39;
                break;
        case 'B':
                battles = 10;
                break;
        
        default:
                battles = ERROR;
                break;
        }
        return battles;
}
int main()
{
        char letter;
        printf("Ingrese una letra: ");
        scanf("%c", &letter);
        int battles = batallas_ganadas(letter);
        if (battles == ERROR)
        {
                printf("La letra ingresada no es válida.\n");
        }
        else
        {
                printf("El pokemon ganó %d batallas.\n", battles);
        }
        return 0;
}