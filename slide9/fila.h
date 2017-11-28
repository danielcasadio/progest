typedef struct elemento Elemento;
typedef struct fila Fila;
Fila * fila_start();
Fila * enqueue(Fila * f, float v);
float dequeue(Fila * f);
int empty(Fila * f);
void show(Fila * f);
void freedom(Fila * f);
