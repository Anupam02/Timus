#include <stdio.h>

int group_distribution[10001];

void insertion_sort( int * arr, int size) {
    int i , j, key;
    for ( i = 1; i < size; i ++ ) {
        key = arr[i];
        j = i - 1;
        while ( arr[j] > key && j >= 0 ) {
            arr[j + 1] = arr[ j ];
            j = j - 1;
        }
        arr[ j + 1 ] = key;
    }
}

int main( int argc, char **argv) {
    int k, ans = 0, i ;
    scanf("%d",&k);
    for ( i = 0; i < k ; i ++)
        scanf("%d",&group_distribution[i]);
    insertion_sort(group_distribution, k);
    for ( i = 0; i < (k+1)/2 ; i++ ) {
        ans += (group_distribution[i]+1)/2 ;
    }
    printf("%d\n",ans);
    return 0;
}

