#include "stack.h"
#include <stdio.h>

int main() {
    Stack myStack;
    initStack(&myStack);  // Inicializa la pila como vacia

    printStack(&myStack);  // Muestra la pila vacia

    printf("Se hace push de 10\n");
    push(&myStack, 10); // Agrega el valor 10 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 10

    printf("Se hace push de 20\n");
    push(&myStack, 20); // Agrega el valor 20 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 20

    printf("Se hace push de 30\n");
    push(&myStack, 30); // Agrega el valor 30 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 30

    return 0;
}
