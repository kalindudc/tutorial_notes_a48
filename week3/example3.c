#include<stdio.h>
#include<string.h>

void stringConcatenate(char *strSrc, char *strDest) {
    // append strSrc to srcDest
    
}

int main() {

    char str1[50] = "hello\0";
    char str2[50] = "world\0";

    stringConcatenate(str2, str1);

    printf("%s\n", str1);

    return 0;
}