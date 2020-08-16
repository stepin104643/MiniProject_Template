#include<stdio.h>
#include<stdlib.h>
#include "isprime.h"
#include "test_isprime.h"


int main(){

int is_prime=isprime(33);

if(is_prime==1){

printf("Prime");

}

else{

printf("Not prime");

}

test_main();

return 0;

}
