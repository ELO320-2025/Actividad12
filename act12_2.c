#include <stdio.h>
#include <stdlib.h>

// Definición de nodo para árbol de expresiones
typedef struct node {
    char data; // puede ser operador o número
    struct node *left;
    struct node *right;
} node_t;

// Crear un nuevo nodo
node_t* crearNodo(char valor) {
    // TODO: reservar memoria y asignar valor
    return NULL; 
}

// Recorrido en post-orden (para notación postfija)
void postOrden(node_t* raiz) {
    // TODO: recorrer en post-orden e imprimir cada nodo
}

// Evaluar expresión recursivamente
int evaluar(node_t* raiz) {
    // Caso base: si es número
    // TODO: convertir char a int y devolverlo

    // TODO: calcular recursivamente izquierda y derecha
    // TODO: aplicar operación según el operador en el nodo

    return 0; // valor por defecto
}

int main() {
    // TODO: Construir el árbol para la expresión (3 + 5) * 2
    //        *
    //       / \
    //      +   2
    //     / \
    //    3   5

    node_t* raiz = NULL;

    printf("Notación postfija: ");
    postOrden(raiz);
    printf("\n");

    printf("Resultado de la expresión: %d\n", evaluar(raiz));

    return 0;
}
