#include <stdio.h>


/*
 * Se recibe un vector con las características mencionadas en el ejercicio y su tope.
 * También se recibe un segundo vector, que utilizaremos para almacenar el número de entrenador que posee más de la cantidad mínima de pokemones (pasada por parámetro).
 */
int entrenadores_con_cantidad_pokemones(int entrenadores_y_pokemones[], int tope, int cantidad_pokemones, int entrenadores_con_pokemones[]) {
        int coach_position = 0;
        
        for (int i = 1; i <= tope; i+=2) {
                if (entrenadores_y_pokemones[i] > cantidad_pokemones) {
                        entrenadores_con_pokemones[coach_position] = entrenadores_y_pokemones[i-1];
                        coach_position++; 
                }
        }
        
        
        return coach_position;
        
        


}

int main()
{
        int entrenadores_y_pokemones[] = {1, 10, 2, 2, 3, 14, 4, 15, 5, 3};
        int entrenadores_con_pokemones[] = {0};
        int cantidad_pokemones = 7;
        int tope = 8;
        int coaches_success = entrenadores_con_cantidad_pokemones(entrenadores_y_pokemones, tope, cantidad_pokemones, entrenadores_con_pokemones);
        if (coaches_success == 0) {
                printf("Error en la función entrenadores_con_cantidad_pokemones\n");
        }else{
                printf("Cantidad de entrenadores con más de %d pokemones: %d\n", cantidad_pokemones, coaches_success);
                
        }
        
        return 0;
}