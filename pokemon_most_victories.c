#include <stdio.h>
#include "pokemon_most_victories.h"

pokemon_t pokemon_con_mas_victorias(pokemon_t pokemones[MAX_VECTOR], int tope_vector){
        short dev;
        int count_1 = 0;
        int count_2 = 1;
        pokemon_t ganador;
        while (count_2 <= tope_vector){
                if (pokemones[count_1].victorias > pokemones[count_2].victorias){
                        ganador = pokemones[count_1];
                        count_2++;

                }else if (pokemones[count_1].victorias < pokemones[count_2].victorias){
                        ganador = pokemones[count_2];
                        count_1 = count_2;
                        count_2++;
                }else {
                        dev = strcmp(pokemones[count_1].nombre, pokemones[count_2].nombre);
                        if (dev < 0){
                                ganador = pokemones[count_1];
                                count_2++;
                        }else{
                                ganador = pokemones[count_2];
                                count_1 = count_2;
                                count_2++;
                        }

                }   
        }
        return ganador;
        
}
int main()
{
        pokemon_t pokemones[MAX_VECTOR] = {{"Pikachu", 10}, {"Charmander", 10}, {"Squirtle", 10}, {"Bulbasaur", 11}};
        pokemon_t ganador = pokemon_con_mas_victorias(pokemones, 4);
        printf("El pokemon con mas victorias es: %s\n", ganador.nombre);
        return 0;
}