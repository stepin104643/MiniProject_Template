///@file isprime.c
#include <stdio.h>
#include <stdlib.h>
#include "isprime.h"

/**
* Checks if given number is prime or not
* @param[in] n
* @param[out] 0 or 1 (boolean False or True) 
*/

int checkint(int n){

for(int i=2;i<n;i++){

/* if divisible by any number other than 1 and itself */

if(n%i==0){

return 0;

}


}

/* else */
return 1;

}


