#include <string.h>
#include <stdio.h>
#include "abrir.h"
#include "ingresar.h"
#include "votar.h"
#include "cerrar.h"


bool procesar_linea_de_entrada(bool mesa_abierta; char* entrada) {
    char* comando;
    for (size_t i = 0; i<7; i++) {
        if (entrada[i] != ' ') {
            comando[i] = entrada[i];
        }
        else {
            break;
        }
    }
    return correr_comando(mesa_abierta, entrada, comando);
}

bool correr_comando(bool mesa_abierta; char* entrada, char* comando) {
    char abrir[] = "abrir";
    char ingresar[] = "ingresar";
    char votar[] = "votar";
    char cerrar[] = "cerrar";
    if (strcmp(comando,abrir)) {
        return abrir_mesa(mesa_abierta, entrada);
    }
    else if (strcmp(comando,ingresar) == 0) {
        return ingresar_dni(mesa_abierta, entrada);
    }
    else if (strcmp(comando,votar) == 0) {
        return realizar_votacion(mesa_abierta, entrada);
    }
    else if (strcmp(comando,cerrar) == 0) {
        return cerrar_mesa(mesa_abierta);
    }
    else {
        printf("ERROR 10");
        return false;
    }
}
