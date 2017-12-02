typedef struct no No;
typedef struct fila Fila;

Fila * start_fila();
Fila * enqueue(Fila * f, char c, int p);
int vazia(Fila * f);
char dequeue(Fila * f);
void showFila(Fila * f);
void libera(Fila * f);
