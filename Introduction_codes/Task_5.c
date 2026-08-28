//print the binary of a number
 #include <stdio.h>
int main() {
 signed int x;
 printf("plz enter a numer:");
 scanf("%i", &x);
 for (int i=32; i>=0;i--)
   printf("%i", (x&(1u<<i))>>i);
}
