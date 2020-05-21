#include <stdio.h>

int main() {
    int number = 10;
    int* numberPointer = &number;
    printf("%d\n", number);
    printf("%d\n",numberPointer);

    // Pointer arithmetic
    printf("Address p  is %d \n",numberPointer);
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Address p + 1 is %d", numberPointer + 1);
}
