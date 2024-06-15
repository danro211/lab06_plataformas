#include "stack.h"
#include <stdio.h>
#include <stdlib.h> 


// Funcion para inicializar pila
void initStack(Stack* s) {
    s->top = NULL;
}

// Funcion para imprimir pila
void printStack(Stack *s) {
    Node *current = s->top;
    printf("Pila actual: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Funcion agregar elemento al tope de la pila
void push(Stack* s, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node)); // Asignar memoria nuevo nodo
    if (newNode == NULL) { 
        fprintf(stderr, "Error al asignar memoria\n");
        return;
    }

    newNode->data = data; // Establecer el dato del nuevo nodo
    newNode->next = s->top; // El siguiente del nuevo nodo sera el antiguo tope
    newNode->prev = NULL; // El anterior del nuevo nodo es NULL, ya que sera el nuevo tope

    if (s->top != NULL) { // Si la pila no estaba vacia, actualizar enlace anterior del antiguo tope
        s->top->prev = newNode;
    }
    s->top = newNode; // Establecer el nuevo nodo como el tope de la pilar
}
