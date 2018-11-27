#include <stdio.h>

int stone_weights[20];

void insertion_sort( int * arr , int size) {
    int i , j, key;
    for ( i = 1; i < size ; i ++) {
        key = arr[i];
        j = i - 1;
        while ( arr[j] > key && j >= 0) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main( int argc, char **argv) {
    int n, i, pile_1, pile_2 , larger , smaller, still_larger=0;
    pile_1 = pile_2 = 0;
    scanf("%d",&n);
    for ( i = 0; i < n ; i ++) {
        scanf("%d",&stone_weights[i]);
    }
    insertion_sort( stone_weights, n);
    for ( i = 0; i < n/2 ; i ++ ) {
        if ( i % 2 == 0 ) {
            pile_1 += ( stone_weights[i] + stone_weights[ n-1-i ] );
        } else {
            pile_2 += ( stone_weights[i] + stone_weights[ n-1-i ] );
        }
    }
    if ( pile_1 > pile_2 ) {
        larger = pile_1;
        smaller = pile_2;
    } else {
        larger = pile_2 ;
        smaller = pile_1;
    }

    if ( n %  2 == 0 )
        printf("%d\n",larger - smaller);
    else {
        smaller  = smaller + stone_weights[i];
        if ( larger > smaller ) {
            still_larger = 1;
            printf("%d\n", larger-smaller);
        } 
        else {
            printf("%d\n", smaller-larger);
        }
    }
    return 0;
}


