#include <stdio.h>
#include <stdlib.h>

// Definición de nodo de árbol binario
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node_t;

// Crear un nuevo nodo
node_t* crearNodo(int valor) {
    // TODO: reservar memoria y asignar valor
    return NULL; 
}

// Recorridos recursivos
void preOrden(node_t* raiz) {
    // TODO: implementar recorrido pre-orden
}

void inOrden(node_t* raiz) {
    // TODO: implementar recorrido in-orden
}

void postOrden(node_t* raiz) {
    // TODO: implementar recorrido post-orden
}

int main() {
    // TODO: construir un árbol manualmente con 5 nodos
    // Ejemplo sugerido:
    //        10
    //       /  \
    //      5    15
    //     / \
    //    3   7

    node_t* raiz = NULL; // inicializar árbol

    printf("Recorrido en Pre-Orden: ");
    preOrden(raiz);
    printf("\n");

    printf("Recorrido en In-Orden: ");
    inOrden(raiz);
    printf("\n");

    printf("Recorrido en Post-Orden: ");
    postOrden(raiz);
    printf("\n");

    return 0;
}
