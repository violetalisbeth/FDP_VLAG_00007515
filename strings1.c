//Violeta Lisbeth Amaya Gonzalez 00007515
//Ejercicio 1
#include <string.h>
#include <stdio.h>

int main() {
    // Se crean arreglos para plabra y busqueda
    char palabra[20];
    char busqueda[20];
    // Se crea una variable para guardar el resultado
    char *resultado;
    // Se le pide al usuario que ingrese un texto
    printf("Ingresa un texto: ");
    fgets(palabra, sizeof(palabra), stdin);
    // Se le pide al usuario que ingrese un texto a buscar
    printf("Ingrese una palabra para buscar: ");
    fgets(busqueda, sizeof(busqueda), stdin);

    // Se usa strstr (no funciona siempre, por alguna extrana razon)
    resultado = strstr(palabra, busqueda);

    // Imprimir el resultado si se encuentra
    if(resultado) {
        printf("Se encontro la palabra %s en el texto %s\n", busqueda, palabra);
    } else {
        printf("No se encontro en el texto\n");
    }
    return 0;
}