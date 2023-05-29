#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES_POR_LINEA 40

void imprimirPagina(const char* texto) {
    int longitudTexto = strlen(texto);
    int inicioLinea = 0;
    int finLinea;

    while (inicioLinea < longitudTexto) {
        finLinea = inicioLinea + MAX_CARACTERES_POR_LINEA;

        // Verificar si hay menos de 40 caracteres en la línea
        if (finLinea > longitudTexto) {
            finLinea = longitudTexto;
        }

        // Imprimir la línea actual
        for (int i = inicioLinea; i < finLinea; i++) {
            printf("%c", texto[i]);
        }
        printf("\n");

        inicioLinea = finLinea;
    }
}

int main() {
    char texto[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. "
                  "Praesent ac lectus dapibus, congue sapien ut, ultrices mi.";

    imprimirPagina(texto);

    return 0;
}
