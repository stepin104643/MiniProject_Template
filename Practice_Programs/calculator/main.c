#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
#include "test_calculator.h"


int main(){

int x=0;
int y=0;
int result=0;
int choice=0;


/*based on choice given by user, either addition or subtraction is performed
as operation by calculator function */

switch(choice){

case 1:
    result=arithops(int x, int y, add);
    break;
case 2:
    result=arithops(int x, int y, sub);
    break;
default:
    printf("wrong choice!");
    }

    printf("%d",result);

    return 0; }
