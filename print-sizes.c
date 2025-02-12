#include <stdio.h>

int main() {

    int myInt = 978;
    int *intPtr;
    char charArray[200];
    char *charPtr;

    printf("size of char is %lu\n", sizeof(char));
    printf("size of short is %lu\n", sizeof(short));
    printf("size of int is %lu\n", sizeof(int));
    printf("size of long is %lu\n", sizeof(long));
    printf("size of long long is %lu\n", sizeof(long long));
    printf("size of float is %lu\n", sizeof(float));
    printf("size of double is %lu\n", sizeof(double));
    printf("size of char * is %lu\n", sizeof(char *));
    printf("size of int * is %lu\n", sizeof(int *));
    printf("size of long * is %lu\n", sizeof(long *));
    printf("The size of my character array is %lu\n", sizeof(charArray));
    charPtr = charArray;
    printf("The size of my character pointer is %lu\n", sizeof(charPtr));
    intPtr = &myInt;
    printf("The size of my int pointer is %lu\n", sizeof(intPtr));
    printf("The size of what my integer pointer points at is %lu\n", sizeof(*intPtr));

    return 0;
}

