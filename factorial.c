#include <stdio.h>

char input_buffer[23];

int main( int argc, char **argv) {
    int n, k = 0, i = 0 ,ans = 1;
    int c;
    while ( ( c = getchar() ) != '\n' && c != EOF ) {
        input_buffer[ i ++ ] = c;
    }

    if ( input_buffer[0] >= 48 && input_buffer[0] <= 57 ) {
        if ( input_buffer[1] >= 48 && input_buffer[1] <= 57 ) {
            n = 10* ( input_buffer[0] - 48 ) + ( input_buffer[1] - 48 );
            k = i - 3;
        }
        else {
            n = input_buffer[0] - 48;
            k = i - 2;
        }
    }

    while ( n > 0) {
        ans *= n;
        n -= k;
    }
    printf("%d\n",ans);
    return 0;
}
    
