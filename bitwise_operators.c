/**
 *  bitwise operators
 *  & : and
 *  | : or
 *  ^ : xor
 *  ~ : invert
 *  not to confuse with && || and ! 
 *
 *  >> : shift right
 *  << : shift right
 *
 *  | can be used to enable a bit
 *  & can be used to disable a bit
 *  ^ can be used to toggle a bit
 **/

#include <stdio.h>

int main(int argc, char **argv) {
    
    char our_character = 'C';


    if ( (our_character & 0b00100000) == 0 ) {
        // check if uppercase
        printf("This is upper-case\n");
    }
    
    if ( ( our_character & 0b00100000) == 0b00100000 ) {
        printf("This is lower-case\n");
    }

    return 0;
}
