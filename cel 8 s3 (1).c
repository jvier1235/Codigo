#include <stdio.h>

int main() {
    int x;
    char arreglo[100]; 

    printf("Ingrese el tamaño del arreglo (máx 100): ");
    scanf("%d", &x);

    printf("Ingrese %d letras:\n", x); 
    for (int i = 0; i < x; i++) {
        scanf(" %c", (arreglo + i)); 
    }

    printf("Arreglo en orden inverso:\n");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i));
    }

    return 0;
}