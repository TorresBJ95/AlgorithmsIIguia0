#include <stdio.h>
#include <string.h>
#include "pokemon_verification.h"

int verificar_pokemon(pokemon_t pokemon, char nombre[MAX_NOMBRE_POKEMON], int cantidad_victorias){
    if (strcmp(pokemon.nombre, nombre) == 0 && pokemon.victorias == cantidad_victorias) {
        return EXITO;
        } else {
                return ERROR;
        }
}
int main()
{
        pokemon_t pokemon;
        strcpy(pokemon.nombre, "Pikachu");
        pokemon.victorias = 10;
        char nombre[MAX_NOMBRE_POKEMON] = "Pikachu";
        int cantidad_victorias = 10;
        int resultado = verificar_pokemon(pokemon, nombre, cantidad_victorias);
        if (resultado == EXITO) {
                printf("El pokemon es correcto\n");
        } else {
                printf("El pokemon es incorrecto\n");
        }
        return 0;
}