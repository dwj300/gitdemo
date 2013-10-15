#include <stdlib.h>
#include <stdio.h>

// 65535
// 32767

char *generate_buffer(int num) {
    char *buffer = malloc(num * 7 + 1);
    int i;

    for(i = 0; i < num; i++) {
        buffer[(i*7)] = 40000;
        buffer[(i*7 + 2)] = 1;
        buffer[(i*7 + 6)] = 'a';
    }
    buffer[(num * 7)] = '\0';
    return buffer;
}

int main(int argc, char* argv[]) {
    char *buf = generate_buffer(1);
    int i;
    for (i = 0; i < 8; i++)
    {
        if (i > 0) printf(":");
        printf("%02X", buf[i]);
    }
    printf("\n");
    return 0;
}
