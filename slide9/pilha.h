typedef struct no NO;
typedef struct pilha Pilha;

Pilha * cria ();
Pilha * empilha (Pilha * n, char c);
char desempilha (Pilha * n);
int vazia(Pilha * n);
void mostra (Pilha * n);
void libera(Pilha * n);