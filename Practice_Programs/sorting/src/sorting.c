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


}


