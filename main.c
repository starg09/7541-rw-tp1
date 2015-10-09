#include "lectura.h"
#include <stdlib.h>

int main(void) {
    bool mesa_abierta = false;
    do {
        char* linea_de_entrada = leer_linea(stdin);
        bool entrada_valida = procesar_linea_de_entrada(mesa_abierta, linea_de_entrada);
    } while(entrada_valida);
    free(linea_de_entrada);
    return 0;
}
