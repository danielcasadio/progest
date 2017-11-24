#include <stdio.h>
#include <stdlib.h>

int strcmp(char *str1, char *str2){
    int i;
    if(sizeof(*str1) > sizeof(*str2)){
        return 0;
    } else {
        for(i=0; i < sizeof(*str1)/sizeof(char); i++){
            if (*str1[i]!= *str2[i]){
                return 0;
            }
        }
    }
    return 1;
}



int main(void){
    char *str1, *str2;
    int resp, tam;
    scanf("%d", &tam);
    fflush(stdin);
    str1 = malloc(tam*sizeof(char));
    str2 = malloc(tam*sizeof(char));
    scanf("%[^\n]s", str1);
    fflush(stdin);
    scanf("%[^\n]s", str2);
    fflush(stdin);

    resp = strcmp(&str1, &str2);
    if (resp == 0)
        printf("As strings sao diferentes.\n");
    else
        printf("As string sao iguais.\n");
}
