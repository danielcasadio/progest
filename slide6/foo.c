#include <stdlib.h>
#include <stdio.h>

char *foo(int count) {
    char *ret;
    ret = (char *)malloc(count);
    if(!ret)
        return NULL;

    for(int i = 0; i < count; ++i) 
        ret[i] = i + 10;

    return ret;
}

int main() {
    int n = 10;
    char *p = foo(n);

    for(int i = 0; i < 10; i++){
        printf("%c ", p[i]);
    }

    if(p) {
        // do stuff with p
        free(p);
    }

    return 0;
}