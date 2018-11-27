#include <stdio.h>
#include <stdlib.h>

char number[100];
char words[50001][101];

int main(int argc, char **argv) {
    int map_alphabet[26], i , j , c , n, master_begin_index, master_end_index ,output_buffer_index, pivot, number_len, is_candidate;
    char output_buffer[101];
    map_alphabet['i'-97] = 1;
    map_alphabet['j'-97] = 1;
    map_alphabet['a'-97] = 2;
    map_alphabet['b'-97] = 2;
    map_alphabet['c'-97] = 2;
    map_alphabet['d'-97] = 3;
    map_alphabet['e'-97] = 3;
    map_alphabet['f'-97] = 3;
    map_alphabet['g'-97] = 4;
    map_alphabet['h'-97] = 4;
    map_alphabet['k'-97] = 5;
    map_alphabet['l'-97] = 5;
    map_alphabet['m'-97] = 6;
    map_alphabet['n'-97] = 6;
    map_alphabet['p'-97] = 7;
    map_alphabet['r'-97] = 7;
    map_alphabet['s'-97] = 7;
    map_alphabet['t'-97] = 8;
    map_alphabet['u'-97] = 8;
    map_alphabet['v'-97] = 8;
    map_alphabet['w'-97] = 9;
    map_alphabet['x'-97] = 9;
    map_alphabet['y'-97] = 9;
    map_alphabet['o'-97] = 0;
    map_alphabet['q'-97] = 0;
    map_alphabet['z'-97] = 0;
    
    while( 1 ) {
        number_len = i = j = 0;
        while ( ( c = getchar() ) != '\n' && c != EOF) 
            number[ i ++ ] = c;
        number[ i ] = '\0';
        number_len = i;
        if ( number[0] == '-' && number[1] == '1')
            exit(0);

        scanf("%d",&n);
        // this is to flush stdin extra /n
        c = getchar();


        i = 0;
        while ( n--) {
            j = 0;
            while ( ( c = getchar() ) != '\n') {
                words[i][j ++ ] = c;
            }
            words[i][j] = '\0';
            i ++;
        }
        
        master_begin_index = 0;
        master_end_index = number_len ;
        output_buffer_index = 0;
        
        for ( i = 0 ; words[i][0] != '\0' ; i ++)  {
            is_candidate = 1;
            pivot = master_begin_index;
            for ( j = 0 ; words[i][j] != '\0' ; j ++ ) {
                if ( map_alphabet[ words[i][j] - 97] !=  number[pivot] - 48 || pivot >= master_end_index) {
                    is_candidate = 0;
                    pivot = master_begin_index;
                    break;
                }
                else {
                    pivot ++;
                }
            }
            if (is_candidate) {
                master_begin_index = pivot;
                if ( output_buffer_index != 0)
                    output_buffer[output_buffer_index ++] = ' ';
                for ( j = 0; words[i][j] != '\0'; j ++ ) {
                    output_buffer[output_buffer_index ++] = words[i][j];
                }
            }
            
        
        }
        if ( pivot == master_end_index ) {
            for ( i = 0 ; i < output_buffer_index; i++ )
                putchar(output_buffer[i]);
            putchar('\n');
        }
        else
            printf("No solution.\n");
    }
   
    return 0;
}
    
