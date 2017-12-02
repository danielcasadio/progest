#include <stdio.h>
#include <stdlib.h>
#include "controle.h"

typedef struct plane{
    int id, pass;
    char * name;
    char * dest;
    struct plane * next;
} Plane;

typedef struct queue{
    Plane * first;
    Plane * last;
} Fila;

Fila * start(){
    Fila * new = (Fila *) malloc(sizeof(Fila));
    new->first = new->last = NULL;
    return new;
}

Fila * add(Fila * f){
    Plane * new = (Plane *) malloc (sizeof(Plane));
    char * name = (char *)malloc(17);
    char * dest = (char *)malloc(4);
    int id;
    int pass;
    printf("\nEnter the name of the plane (16 chars max): ");
    scanf("%s", name);
    printf("\nEnter the ID of the plane: ");
    scanf("%i", &id);
    printf("\nEnter the total passengers on this plane: ");
    scanf("%i", &pass);
    printf("\nEnter the destination code of the plane (3 chars only): ");
    scanf("%s", dest);
    new->name = name;
    new->id = id;
    new->pass = pass;
    new->dest = dest;
    new->next = NULL;
    if (empty(f)){
        f->first = new;
        f->last = new;
    } else { 
        f->last->next = new;
        f->last = new;
    }
    return f;
}

const char * depart(Fila * f){
    if(empty(f)) return ("\nNo planes on the queue\n");
    else {
        const char * r = f->first->name;
        Plane * aux = f->first;
        f->first = f->first->next;
        free(aux);
        printf("Plane departing: ");
        return r;
    }
}

int empty(Fila * f){
    if(f->first == NULL && f->last == NULL) return 1;
    return 0;
}

void show(Fila * f){
    if(empty(f)){
        printf("\nNo planes on the queue\n");
    } else { 
        Plane * p = f-> first;
        printf("\n---------Planes-On-Queue---------\n");
        while (p != NULL){
            printf("Name: %s\n", p->name);
            printf("ID: %i\n", p->id);
            printf("Destination: %s\n", p->dest);
            printf("Passengers: %i\n", p->pass);
            printf("---------------------------------\n");
            p = p->next;
        }
        free(p);
    }
}

void showFirst(Fila * f){
    if(empty(f)) printf("Empty queue");
    else{
        Plane * p = f->first;
        printf("\n---------Next-Plane---------\n");
        printf("Name: %s\n", p->name);
        printf("ID: %i\n", p->id);
        printf("Destination: %s\n", p->dest);
        printf("Passengers: %i\n", p->pass);
        printf("---------------------------------\n");
        p = NULL;
        free(p);
    }   
}

int count(Fila * f){
    if(empty(f)) return 0;
    else {
        Plane * p = f->first;
        int r = 0;
        while(p != NULL){
            r++;
            p = p->next;
        }
        free(p);
        return r;
    }
}

void limpa(Fila * f){
    if(empty(f)) printf("\nNo planes on queue\n");
    else{
        Plane * p = f->first;
        while(p != NULL){
            Plane * aux = p;
            p = p->next;
            free(aux);
        }
        free(f);
        printf("\nQueue cleaned succesfully\n");
    }
}