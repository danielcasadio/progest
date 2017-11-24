#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

int main(){
    float x, y, r;
    float a;
    Circle* c = crc_create(0.0, 0.0, 5.0);
    crc_accs(c, &x, &y, &r);
    printf("x:%.2f y:%.2f raio:%.2f\n", x, y, r);
    a = crc_area(c);
    printf("%.2f\n", a);
    crc_inside(c, 2.4, 1.0);
    crc_inside(c, 15.0, 15.0);
    crc_change(c, 1.0, 4.0, 3.0);
    crc_accs(c, &x, &y, &r);
    printf("x:%.2f y:%.2f raio:%.2f\n", x, y, r);
    a = crc_area(c);
    printf("%.2f\n", a);
    crc_free(c);
    return 0;
}