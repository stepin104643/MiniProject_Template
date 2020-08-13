///@file calculator.c

#include <stdio.h>
#include <stdlib.h>

/**function pointer prototype for calculator*/
typedef int (*pcalc)(int, int);

/**Takes in two numbers and performs arithmetic operations
*on them
* @params[in] x,y, pcalc calculator
* @param[out] result
*/

int arithops(int x, int y, pcalc calculator){

int result=0;

/*assigns value of function pointer operation to result variable */

result=calculator(x,y);

return result;

}
/*addition operation */
int add(int x, int y){
return x+y;}

/*subtraction operation*/
int sub(int x, int y){
return x-y;

}

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


