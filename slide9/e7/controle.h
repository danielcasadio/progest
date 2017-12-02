typedef struct plane Plane;
typedef struct queue Fila;

Fila * start();
Fila * add(Fila * f);
const char * depart(Fila * f);
int empty(Fila * f);
void show(Fila * f);
void showFirst(Fila * f);
int count(Fila * f);
void limpa(Fila * f);
