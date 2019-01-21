#include <stdio.h>

float square(float x) {
    // actual computation
    x = x * x;

    // some other computation
    float z = 5.2;
    z = z*x;

}

int main() {

    float y;

    y = 3.141592;

    square(y);

    printf("%f\n", y);

    return 0;
}