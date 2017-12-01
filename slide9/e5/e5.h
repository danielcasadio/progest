typedef struct elemento Elemento;
typedef struct pilha Pilha;
typedef struct fila Fila;

//Operações de pilha
Pilha * start_pilha();
Pilha * empilha (Pilha * n, char c);
char desempilha (Pilha * n);
int vazia(Pilha * n);
void mostra (Pilha * n);
void libera(Pilha * n);
Pilha * put_inteiros(Fila * palavra, Pilha * inteiros);

//Operações de fila
Fila * fila_start();
Fila * enqueue(Fila * f, char v);
char dequeue(Fila * f);
int empty(Fila * f);
void showFila(Fila * f);
void freedom(Fila * f);
Fila * put_letras(Fila * palavra, Fila * letras);

//Operações mistas
Fila * organiza(Fila * palavra, Fila * letras, Pilha * inteiros);