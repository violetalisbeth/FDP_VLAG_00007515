#include<stdio.h>

int main() {
    // Se inicializa un arreglo de tamano 10, y se le pide al usuario que lo llene de numeros
    int numeros[10];
    for(int i = 0; i< 10; i++) {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    // Se abren los archivos positivos.txt y negativos.txt en modo w
    FILE *archivoPositivos = fopen("positivos.txt", "w");
    FILE *archivoNegativos = fopen("negativos.txt", "w");

    // Si alguno de los dos archivos falla, se imprime error
    if(archivoNegativos == NULL || archivoPositivos == NULL) {
        printf("ERROR!");
        return 1;
    }

    // Se imprime este texto para que se entienda mejor el archivo
    fprintf(archivoPositivos, "Numeros Positivos: ");
    fprintf(archivoNegativos, "Numeros Negativos: ");

    // Se recorre el arreglo de numeros y si es positivo se imprime en el archivo positivos.txt y sino en el archivo negativos.txt
    for(int i = 0; i < 10; i++) {
        if (numeros[i] >= 0) {
            fprintf(archivoPositivos, "%d ", numeros[i]);
        } else {
            fprintf(archivoNegativos, "%d ", numeros[i]);
        }
    }

    // Se imprime un salto de linea al terminar 
    fprintf(archivoPositivos, "\n");
    fprintf(archivoNegativos, "\n");

    // Se cierran ambos archivos
    fclose(archivoPositivos);
    fclose(archivoNegativos);

    // Se imprime la confirmacion al usuario que se guardaron los numeros en el archivo
    printf("La lista de numeros negativos se guardo en negativos.txt\n");
    printf("La lista de numeros positivos se guardo en positivos.txt\n");
    return 0;
}