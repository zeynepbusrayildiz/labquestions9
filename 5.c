#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, element, i;

    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the number of elements:");
    scanf("%d",&element);

    float result = 1.0;
    float a = 1.0;

    for (i = 1; i <= element; ++i) {
        a*= x / (float)i;
        result+= a;
    }

    printf("Result is %f", result);

    return 0;
}

