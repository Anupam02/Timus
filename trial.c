#include <stdio.h>

int main() {
    int a = 8;
    char b = '8';
    if ( a != b - 48)
        printf("this is false");
    else
        printf("this is true");
    return 0;
}
