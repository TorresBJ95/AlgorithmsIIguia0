#include <stdio.h>

//Devuelve la suma de los elementos del vector, desde la posición 0 hasta el tope
int suma_de_elementos(int vector[], int tope){
        int sum = 0;
        for (int i = 0; i < tope; i++){
                sum += vector[i];

        }
        return sum;
    

}

int main()
{
        
        int tope = 5;
        int vector[5] = {1, 2, 3, 4, 5};
        int sum = suma_de_elementos(vector, tope);
        printf("La suma de los elementos del vector es: %i\n", sum);
        return 0;

}

