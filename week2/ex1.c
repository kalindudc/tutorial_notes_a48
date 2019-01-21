#include <stdio.h>
void hard_working_function(int x) {
    x=x*x;
    x=x/x;
    x=3*x;
    x=x+71;
    x=x/2;
}


int main() {

    int x;
    x=1;
    hard_working_function(x);

    printf("%d\n", x);

    return 0;
}