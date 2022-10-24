#include <stdio.h>
#include <stdlib.h>

struct Galletitas {
    char nombre[20];
    int precio;
};
void cargargalletitas(int * puntero);
void vergalletita(struct Galletitas A);
int main()
{
    struct Galletitas G1;
    int * puntero = &G1
    cargargalletitas(*puntero);
    vergalletita(G1);
    return 0;
}

void cargargalletitas(int * puntero){
    struct Galletitas Aa;

    printf("Nombre de la galletita: ");
    fflush(stdin);
    gets(Aa.nombre);
    printf("\nPrecio: ");
    scanf("%d", Aa.precio);
}
void vergalletita(struct Galletitas A){
    printf("NOMBRE DE LA GALLETITA: %s\n", A.nombre);
    printf("PRECIO: %d", A.precio);
}
