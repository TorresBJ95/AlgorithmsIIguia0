#include <stdio.h>

// Se recibe un valor y se hace uso del operador ternario.
int solucion(size_t valor){

    int value = (valor%2 == 0) ? valor/2 : valor * 3 + 1;
    return value;
}

int main()
{
        int result = solucion(3);
        printf("%i \n", result);
        return 0;
}