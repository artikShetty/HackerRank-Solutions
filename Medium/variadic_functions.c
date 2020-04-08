/******************* Problem Statement*****************/
/*
Variadic functions in C
Link to Problem Statement: https://www.hackerrank.com/challenges/variadic-functions-in-c/problem
*/
/*****************************************************/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int sum = 0;
    va_list valist;
    va_start(valist, count);
    for(int i =0;i<count;i++)
    {
        sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum;
}

int min(int count,...) {
    int min = MIN_ELEMENT, temp =0;

    va_list valist;
    va_start(valist,count);
    min = va_arg(valist,int);

    for(int i = 1;i<count;i++)
    {
        if((temp = va_arg(valist,int))<min)
        min = temp;
    }
    va_end(valist);

    return min;
}

int max(int count,...) {
    int max = MIN_ELEMENT, temp = 0;

    va_list valist;
    va_start(valist,count);
    max = va_arg(valist,int);

    for(int i = 1;i<count;i++)
    {
        if((temp = va_arg(valist,int))>max)
        max = temp;
    }
    va_end(valist);

    return max;
}

// Test Functions
int test_implementations_by_sending_three_elements() {