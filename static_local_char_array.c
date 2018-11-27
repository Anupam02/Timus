#include <stdio.h>

char global[10];

int main(int argc, char **argv) {
    char local[10];
    // first take input in global
    int c , i = 0;
    while ( ( c = getchar() ) != '\n' && c != EOF )
        global[ i ++ ] = c;
    printf("%s\n",global);

    // take input in local without putting \0 at last
    i = 0;
    while ( ( c = getchar() ) != '\n' && c != EOF )
        local[ i ++ ] = c;
    printf("%s\n",local);
    // it would print garbage value until it gets '\0'
    local[i] = '\0';
    printf("%s\n", local);
    return 0;
}
    
