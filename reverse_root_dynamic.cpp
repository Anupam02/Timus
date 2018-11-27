#include <stdio.h>
#include <math.h>

typedef __int64 BIG;
#define round(x) (__int64)((x) + 0.5)

struct node {
    double value;
    struct node *prev;
};

int main(int argc, char ** argv) {
    char * buffer = malloc(sizeof(char)*255);
    struct node *lnk;
    struct node *p = NULL;

    double n;
    while ( scanf("%f",&n) ) {
        lnk = new struct node;
        lnk->value = round(sqrt(n)*10000)/10000.0;
        lnk->prev = p;
        p = lnk;
    }

    while(p) {
        sprintf(buffer,"%.4lf",p->value);
        printf("%s\n",buffer);
        p=p->prev;
    }
    return 0;
}
