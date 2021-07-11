#include <stdio.h>
#include <string.h>

/* Elaborar una aplicación de línea de comandos en 
C que lea los nombres de 5 personas por teclado y que 
determine cuál de esas tiene el nombre más corto. */

int main() {

    char nombre[100], nombre_mas_corto[30];
    int count = 0, min, i, j, index = 0, length;

    printf("Ingrese los 5 nombres: \n");

    for(i = 0; i < 5; i++) {
    scanf("%s", &nombre);
    
    length = strlen(nombre); 
    }
    index = 0;

    min = 100; 
    
    for( i = 0 ; i < length ; i++) {
        if(nombre[i] != ' ') {
        count++;
        }
        else {
        if(count < min) {
            min = count;
            index = i-min;
            }
        count = 0;
        }
    }

    if(count < min) {
        min = count;
        index = length-min;
        }

    j=0;

    for(i = index; i < index+min; i++) {
        nombre_mas_corto[j] = nombre[i];
        j++;
    }

    nombre_mas_corto[j] = '\0';
    printf("El nombre mas corto es: %s\n", nombre_mas_corto);

 return 0;

}