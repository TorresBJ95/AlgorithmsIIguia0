#include <stdio.h>
#include <stdbool.h>
int numero_mas_grande(FILE* archivo){
        
        int numbers;
        int cpyn;
        bool bandera = false;
        int winner;
        while (fscanf(archivo, "%d;", &numbers) == 1){
                if (bandera){
                        if (numbers > cpyn){
                                winner = numbers;
                        }else{
                                winner = cpyn;
                        }
                }else{
                        winner = numbers;
                        cpyn = numbers;
                        bandera = true;
                }
                
                
        }
        return winner;
        
}

int main()
{
        FILE* archivo = fopen("numeros.txt", "r");
        int numero = numero_mas_grande(archivo);
        printf("El numero mas grande es: %d\n", numero);
        return 0;

}