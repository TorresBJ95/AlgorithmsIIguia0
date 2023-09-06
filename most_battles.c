#include "most_battles.h"
//#include <stdlib.h>
#include <stdbool.h>

pokemon_t pokemon_con_mas_batallas(FILE* archivo)
{
        int total;
        int cpy_total;
        pokemon_t ganador;
        pokemon_t winner;
        bool bandera = true;
        //pokemon_t *pokemon = malloc(sizeof(pokemon_t));
        while (fscanf(archivo, " %[^;];%d;%d;%d;", ganador.nombre, &ganador.b_ganadas, &ganador.b_perdidas, &ganador.b_empatadas) == 4){
                if (bandera){
                        total = ganador.b_ganadas + ganador.b_empatadas + ganador.b_perdidas;
                        winner = ganador;
                        bandera = false;

                }else{
                        cpy_total = ganador.b_ganadas + ganador.b_empatadas + ganador.b_perdidas;
                        if(cpy_total > total){
                                total = cpy_total;
                                winner = ganador;
                        }
                }
                
                

        }
        //free(pokemon);
        return winner;

}

int main()
{
        FILE* archivo = fopen("pokemon_battles.txt", "r");
        pokemon_t pokemon = pokemon_con_mas_batallas(archivo);
        printf("El pokemon con mas batallas es: %s\n", pokemon.nombre);
        fclose(archivo);
        return 0;
}