#include<stdio.h>

int main() {

    char x[20] = "hello world\0";
    char *y = x;

    printf("x addr -> %p\n", x);
    printf("y addr -> %p\n", y);
    printf("x as char -> %c\n", *x);
    printf("y as char -> %c\n", *y);
    printf("x as str -> %s\n", x);
    printf("y as str -> %s\n", y);
    
    return 0;
}