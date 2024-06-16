#ifndef STACK_H
#define STACK_H

// Definicion nodo de la lista doblemente enlazada
typedef struct Node {
    int data; 
    struct Node* next; // Puntero siguiente nodo
    struct Node* prev; // Puntero nodo anterior 
} Node;

// Definicion de la estructura pila.
typedef struct Stack {
    Node* top; // Puntero al nodo superior de la pila
} Stack;

// Inicializar la pila
void initStack(Stack* s);

// Imprimir pila
void printStack(Stack *s);

// Funcion hacer push
void push(Stack* s, int data);

// Funcion hacer pop
int pop(Stack* s);

// Funcion hacer peek
int peek(Stack* s);

// Funcion si esta vacia
int isEmpty(Stack* s);

#endif
