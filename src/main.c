#include <stdio.h>

void input() {
    char buffer[5]
    gets(buffer);
    fflush(stdout);
}

void other() {
    printf("**************Secret function**************\n");
    fflush(stdout);
    exit(0);
}

int main() {
    printf("%p\n", &other);
    input();
    printf("Normal out\n");
    return 0;
}
