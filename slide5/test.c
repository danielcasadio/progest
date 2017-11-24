#include <stdio.h>
#include <stdlib.h>

int main(void){
    char string[40] = "Exibindo uma string usando um ponteiro.";
    char *ptr_str;
    /* Apontando para a string */
    ptr_str = string;
    printf("Apontando para o inicio da string => ptr_str = %c\n\n",*ptr_str);
    /* Exibindo toda a string usando o ponteiro */
    while(*ptr_str){
        putchar(*ptr_str);
        ptr_str++;
    }
    printf("\n");
    printf("%i", sizeof(int));
    return(0);

}
