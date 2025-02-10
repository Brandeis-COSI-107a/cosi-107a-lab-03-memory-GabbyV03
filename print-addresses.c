#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned long num = strtoul(argv[i], NULL, 10);
        printf("0x%012lX\n", num & 0xFFFFFFFFFFFF);
    }
    return 0;
}
