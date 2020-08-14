#include <stdio.h>
#include <stdlib.h>

void sorting(int n, int* p){

for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            if(*(p+i) > *(p+j)){

                int t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
}
return p;
}

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

    return 0;

}

