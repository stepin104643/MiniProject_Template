/**
*@file calculator.h
*/

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

/**
*Depending on the choice, performs a different arithmetic operation
*@param[in] x first integer
*@param[in] y second integer
*@param[in] pcalc calculator function pointer
*@return result of chosen operation
*/ 
int arithops(int x, int y, pcalc calculator);

/**
*performs addition
*@param[in] x first integer
*@param[in] y second integer
*@return sum of x and y
*/

int add(int x, int y);
/**
*performs subtraction
*@param[in] x first integer
*@param[in] y second integer
*@return difference of x and y
*/


int sub(int x,int y);


#endif

