//Violeta Lisbeth Amaya Gonzalez 00007515}
//Ejercicio 2
#include <stdio.h>

int main() {
    // Crear una variable tamano y pedirle al usuario que especifique un tamano
    int tamano = 0;
    printf("Ingrese el tamano de su palabra: \n");
    scanf("%d", &tamano);
    // Crear variables palindromo y esPalindromo
    char palindromo[tamano];
    int esPalindromo = 0;
    // Pedirle al usuario que ingrese una frase
    printf("Ingrese la frase palindromo: \n");
    scanf("%s", &palindromo);
    // Si las posiciones no son iguales, esPalindromo es 1 
    for(int i = 0; i < tamano; i++) {
        if(palindromo[i] != palindromo[(tamano-1) - i]) {
            esPalindromo = 1;
        }
    }
    // Si esPalindromo es 0, imprimir que si se encontro un palindromo
    if(esPalindromo == 0) {
        printf("La palabra %s es un palindromo\n");
    } else {
        printf("La palabra %s no es un palindromo\n");
    }

    return 0;