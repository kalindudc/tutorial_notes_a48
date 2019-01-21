#include <stdio.h>

float square(float x) {
    // actual computation
    x = x * x;

    return x;
}

int main() {

    float y;

    y = 3.141592;

    y = square(square(y));

    printf("%d\n", y);

    return 0;
}