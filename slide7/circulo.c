#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

typedef struct circulo {
    float x;
    float y;
    float r;
}Circle;

Circle* crc_create(float x, float y, float r){
    Circle* c =  (Circle *)malloc(sizeof(Circle));
    if(c == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }
    c->x = x;
    c->y = y;
    c->r = r;
    return c;
}
void crc_free(Circle* c){
    free(c);
}
void crc_accs(Circle* c, float* x, float* y, float* r){
    *x = c->x;
    *y = c->y;
    *r = c->r;
}   
void crc_change(Circle* c, float x, float y, float r){
    c->x = x;
    c->y = y;
    c->r = r;
}
float crc_area(Circle* c){
    float a;
    a = M_PI*((c->r)*(c->r));
    return a;
}
void crc_inside(Circle* c, float x, float y){
    float dx = x - c->x;
    float dy = y - c->y;
    float dist = sqrt(dx*dx + dy*dy);
    if(dist <= c->r){
        printf("O ponto esta dentro do circulo\n");
    }else{
        printf("O ponto esta fora do circulo\n");
    }    
}