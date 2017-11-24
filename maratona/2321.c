#include <stdio.h>

int main(){
    int a[4], b[4];
    int r, max, min;
    r = 0;
    max = 1000000;
    min = 0;
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]); //ax0, ay0, ax1, ay1
    scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]); //bx0, by0, bx1, by1

    if((min <= a[0] && a[0] <= a[2] && a[2] <= max) && (min <= a[1] && a[1] <= a[3] && a[3] <= max) && (min <= b[0] && b[0] <= b[2] && b[2] <= max) && (min <= b[1] && b[1] <= b[3] && b[3] <= max)){ 
        if(b[0]<= a[0] && a[0] <= b[2]){
            if ( b[1]<= a[1] && a[1] <= b[3]){
                r = 1;
            } else  if ( a[1]<= b[1] && b[1] <= a[3]){
                r = 1;
            }
        } else if(a[0]<= b[0] && b[0] <= a[2]){
            if ( a[1]<= b[1] && b[1] <= a[3]){
                r = 1;
            } else if ( b[1]<= a[1] && a[1] <= b[3]){
                r = 1;
            }
        }
    }
    printf("%d\n", r);
    return 0;
}