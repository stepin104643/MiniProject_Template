#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#include "test_sorting.h"

int main()
{

    scanf("%d",&n);

    int* p=malloc(sizeof(int)*n);

    int* q=p;

    for(int i=n;i>0;i--){
        p[i]=i;
    }

    sorting(n,arr);

    free(p);

test_main();

    return 0;

}
