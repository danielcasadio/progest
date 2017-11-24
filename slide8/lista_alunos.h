typedef struct alunos Aluno;

int vazia(Aluno* l);
int tamanho(Aluno* l);
Aluno* criar();
Aluno* adiciona(Aluno* l);
Aluno* remove_aluno(Aluno* l, int i);
float media(Aluno* l,  int i);
float media_turma(Aluno* l);
void info(Aluno* l, int i);
void mostra(Aluno* l);

