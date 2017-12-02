#include <stdio.h>
#include <stdlib.h>
#include "controle.h"

int main(){
    char a;
    printf("Welcome to the new cotrol system of the airport!\n");
    printf("Would you like to start the system? (y/n): ");
    scanf(" %c", &a);
    if(a == 'y' || a == 'Y'){
        Fila * ap = start();
        char c;
        printf("System started succesfully\n");
        printf("\nWhat is your command?\na - add a new plane\nb - depart a plane\nc - show the queue\nd - show only the next plane\ne - show how many planes are on queue\nf - cleans the queue and exit program\n");
        scanf(" %c", &c);
        while((c != 'f')|| (c=! 'F')){
            if(c == 'a' || c == 'A') ap = add(ap);
            if(c == 'b' || c == 'B') printf("%s\n", depart(ap));
            if(c == 'c' || c == 'C') show(ap);
            if(c == 'd' || c == 'D') showFirst(ap);
            if(c == 'e' || c == 'E') printf("There is %i planes on queue\n", count(ap));
            printf("\nNew command: ");
            scanf(" %c", &c);
        }
        limpa(ap);
        printf("See you soon");
    } else {
        printf("See you soon");
    }
    return 0;
}