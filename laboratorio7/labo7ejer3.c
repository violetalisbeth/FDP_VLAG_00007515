#include <stdio.h>

// Funcion para encontrar si un caracter es igual a una letra
int encontrar(char letra, char caracter) {
    if (caracter == letra) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Se abren los archivos positivos.txt y negativos.txt en modo w
    char linea[20] = "";
    int cantidadA = 0; 
    int cantidadE = 0; 
    int cantidadI = 0; 
    int cantidadO = 0; 
    int cantidadU = 0;
    
    FILE *archivo = fopen("pal.txt", "r");

    // Si alguno de los dos archivos falla, se imprime error
    if(archivo == NULL) {
        printf("ERROR!");
        return 1;
    }

    // Un for de 0 a 4 para las vocales
    for(int i = 0; i < 5; i++) {
        // Se lee la linea
        fgets(linea, 20, archivo);
        // Se recorre el tamano de la linea
        for(int j = 0; j < 20; j++) {
            // Se determina que vocal se tiene que contar basado en el numero de linea y se incrementa la variable correcta
            switch (i) {
                case 0:
                if(encontrar('a', linea[j]) == 1) {
                    cantidadA++;
                }
                if(encontrar('A', linea[j]) == 1) {
                    cantidadA++;
                }
                break;
                case 1:
                if(encontrar('e', linea[j]) == 1) {
                    cantidadE++;
                }
                if(encontrar('E', linea[j]) == 1) {
                    cantidadE++;
                }
                break;
                case 2:
                if(encontrar('i', linea[j]) == 1) {
                    cantidadI++;
                }
                if(encontrar('I', linea[j]) == 1) {
                    cantidadI++;
                }
                break;
                case 3:
                if(encontrar('o', linea[j]) == 1) {
                    cantidadO++;
                }
                if(encontrar('O', linea[j]) == 1) {
                    cantidadO++;
                }
                break;
                case 4:
                if(encontrar('u', linea[j]) == 1) {
                    cantidadU++;
                }
                if(encontrar('U', linea[j]) == 1) {
                    cantidadU++;
                }
                break;
            }
        }
    }

    // Se imprime la cantidad de las vocales en las lineas
    printf("La cantidad de a en la primera linea es: %d\n", cantidadA);
    printf("La cantidad de e en la primera linea es: %d\n", cantidadE);
    printf("La cantidad de i en la primera linea es: %d\n", cantidadI);
    printf("La cantidad de o en la primera linea es: %d\n", cantidadO);
    printf("La cantidad de u en la primera linea es: %d\n", cantidadU);
    
    // Se cierra el archivo
    fclose(archivo);
    return 0;
}