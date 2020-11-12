#include <stdio.h>

void input() {
    char buffer[5];
    gets(buffer);
    fflush(stdout);
}

void other() {
    printf("**************Secret function**************\n");
    fflush(stdout);
}

int main() {
    printf("%p\n", &other);
    input();
    printf("Normal out\n");
    return 0;
}
