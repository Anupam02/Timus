#include <stdio.h>

int main(int argc, char ** argv) {
    int c;
    char number[18];
    while (  c = getchar()  && c != EOF ) {
        if ( c >= 65 && c <= 90 )
            printf("this is uppercase letter\n");
        else if ( c >= 97 && c <= 122 ) 
            printf("this is lowercase letter\n");
        else if ( c >= 48 && c <= 57 ) {
            

