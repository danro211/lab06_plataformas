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

// Funcion para eliminar y retornar elemento superior de la pila
int pop(Stack* s) {
    if (s->top == NULL) {
        fprintf(stderr, "Error: pop de una pila vacia\n");
        return -1; 
    }

    Node* temp = s->top; // Guardar nodo superior para no perder referencia
    int data = temp->data; // Guardar dato del nodo superior para devolverlo
    s->top = s->top->next; // Mover tope de la pila al siguiente nodo

    if (s->top != NULL) {
        s->top->prev = NULL; // Eliminar la referencia al nodo eliminado
    }

    free(temp); // Liberar memoria del nodo eliminado
    return data; // Devolver el dato del nodo eliminado
}

// Funcion para retornar sin eliminar el valor del tope de pila
int peek(Stack* s) {
    if (s->top == NULL) {
        fprintf(stderr, "Error: tope de una pila vacia\n");
        return -1;
    }
    return s->top->data; // Devolver el dato del nodo superior
}
