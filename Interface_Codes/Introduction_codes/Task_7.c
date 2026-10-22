//
//Using the pointers

#include <stdio.h>
int f(int x, int *pt, int **ptr) {
    int y, z;
    **ptr+=1;
    z=**ptr;
    *pt+=2;
    y=*pt;
    x+=3;
    return x+y+z;
}

int main() {
    int c, *b, **a;
    c=4, b=&c, a=&b;
    printf("%d", f(c, b, a));
    return 0;
}
