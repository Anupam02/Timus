#include <stdio.h>
#include <math.h>

double buf[128 * 1024];

int main( int argc, char ** argv) {
    int i = 0;
    unsigned long long n; // 64 bit unsigned integer
    while ( scanf("%llu", &n) != EOF ) {
        buf[ i ++ ] = ( double ) sqrt( n * 1.0 ); // store in buffer
    }
    for (; --i >= 0; ) {
        printf("%.4f\n", buf[i]); // reverse order
    }
    return 0;
}
