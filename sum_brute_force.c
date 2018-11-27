#include <stdio.h>

int main( int argc, char **argv) {
    int n,ans = 0,i;
    scanf("%d",&n);
    if ( n <= 0 ) {
       for ( i = n ; i <= 1 ; i++)
           ans += i;
    }
    else {
        for ( i = 1 ; i <= n; i ++)
            ans += i;
    }
    printf("%d\n",ans);
    return 0;
}
