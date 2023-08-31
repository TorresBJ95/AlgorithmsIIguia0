#include <stdio.h>
#define ERROR -1
#define PRECISION 0.000001

double raiz_cuadrada(double valor) {
        double estimacion = valor/2;
        if (valor < 0) {
                return ERROR;
        }else if(valor == 1) {
                return 1;
        }else if (valor == 0) {
                return 0;
        }else {
                do {
                        estimacion = (estimacion + valor/estimacion)/2;
                } while (estimacion*estimacion - valor >= PRECISION);

        }
        return estimacion;
    
}

int main()
{
        double valor = raiz_cuadrada(4);
        printf("la raiz cuadrada de: %d es: %f", 4, valor);
        return 0;
}