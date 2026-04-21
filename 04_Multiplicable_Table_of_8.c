//Write a c program to print 8’s time table to 200

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 25; i++) {
        printf("8 x %d = %d\n", i, 8 * i);
    }

    return 0;
}
