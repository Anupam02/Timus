#include <stdio.h>

int main(int argc, char **argv) {
    int n,ans;
    scanf("%d",&n);
    if ( n < 0) {
        n = -1*n;
        ans = -1*((n*(n+1))/2 - 1);
    }
    else 
        ans = ( (n*(n+1))/2 );
    printf("%d\n",ans);
    return 0;
}
