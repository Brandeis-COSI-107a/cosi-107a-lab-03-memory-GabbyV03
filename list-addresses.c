#include <stdio.h>

int global_var;
void random_function() {}

int main() {
    int stack_var;
    const char *str = "Hello, world!";

    printf("stack variable: 0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data: 0x%012lX\n", (unsigned long)str);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&global_var);
    printf("main: 0x%012lX\n", (unsigned long)&main);
    printf("function: 0x%012lX\n", (unsigned long)&random_function);

    return 0;
}
