#include <stdio.h>
#include <stdlib.h>
#include "isprime.h"
int checkint(int n){

for(int i=2;i<n;i++){

//if divisible by any number other than 1 and itself

if(n%i==0){

return 0;

}


}

return 1;

}


