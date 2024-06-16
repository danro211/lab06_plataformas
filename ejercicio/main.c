#include "stack.h"
#include <stdio.h>

int main() {
    Stack myStack;
    initStack(&myStack);  // Inicializa la pila como vacia

    printStack(&myStack);  // Muestra la pila vacia
    printf("\n");

    isEmpty(&myStack); // Verificar si la pila esta vacia
    printf("\n");
    // Pruebas push
    printf("Se hace push de 10\n");
    push(&myStack, 10); // Agrega el valor 10 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 10

    printf("Se hace push de 20\n");
    push(&myStack, 20); // Agrega el valor 20 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 20

    printf("Se hace push de 30\n");
    push(&myStack, 30); // Agrega el valor 30 a la pila
    printStack(&myStack);  // Muestra la pila despues de agregar 30

    // Pruebas pop
    printf("\nSe hace pop\n");
    int poppedValue = pop(&myStack);
    printf("Valor retirado: %d\n", poppedValue);
    printStack(&myStack); // Muestra pila despues de hacer pop

    // Pruebas peek
     printf("\nTope de la pila actual usando peek: %d\n", peek(&myStack));  // Muestra el tope de la pila

    printf("\n");
    isEmpty(&myStack); // Verificar el estado final de la pila

    // Limpiar pila para evitar fugas de memoria
    while (!isEmpty(&myStack)) {
    pop(&myStack); // Llama a pop hasta que la pila esté vacía
}

    return 0;
}
