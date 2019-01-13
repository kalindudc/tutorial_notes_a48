#include<stdio.h>
#include<math.h>

int main()
{
    // Here is another way of doing the exercise.
    int i;
    for (i = 1; i < 101; i++) {
        double root = sqrt(i);
        
        if ((root - ((int) root)) == 0.0) {
            printf ("%d = %d*%d\n", i, (int) root, (int) root);
        }
    }

    return 0;
}
