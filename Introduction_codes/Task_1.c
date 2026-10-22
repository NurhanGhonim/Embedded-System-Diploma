// Swaping 2 numbers Using 3 methods


//First method

# include <stdio.h>
int main() {
    int x=10, y=5, temp;
    printf("The values before swap=:\n\n");
    printf("x=%i, y=%i\n", x, y);
    temp=x;
    x=y;
    y=temp;
    printf("The values after swap=:\n\n");
    printf("x=%i, y=%i\n", x, y);


    //Second method
    int w=10, f=5;
    printf("The values before swap=:\n\n");
    printf("w=%i, f=%i\n", w, f);
    w=w^f;                              //x = x ⊕ y, y = x ⊕ y , x = x ⊕ y
    f=w^f;
    w=w^f;
    printf("The values after swap=:\n\n");
    printf("w=%i, f=%i", w, f);

    //Third method
int a=10, b=5;
    printf("The values before swap=:\n\n");
    printf("a=%i, b=%i\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values after swap=:\n\n");
    printf("a=%i, b=%i\n", a, b);

    return 0;

}


