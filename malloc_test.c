#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *a;
    for (i = 0; i < 5; i++) {
        a = (int *)malloc(sizeof(int));
        printf ("%d\n", *a);
    }
    return 0;
}
