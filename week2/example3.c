#include<stdio.h>

int main() {
    int x = 7;
    int *p = &x;

    printf ("p -> %p\n", p);
    printf ("&x -> %p\n", &x);
    printf ("*p -> %d\n", *p);
    printf ("*(p) -> %d\n", *(p));

    return 0;
}