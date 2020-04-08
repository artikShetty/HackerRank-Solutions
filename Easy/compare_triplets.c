/******************* Problem Statement*****************/
/*
Compare the triplets
Link to Problem Statement: https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/
/*****************************************************/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    static int return_array[2];
    *result_count = 2;
    int alison_points = 0, bob_points = 0;
    for(int i = 0;i<a_count;i++)
    {
        if(a[i]>b[i])
        {
             alison_points++;
        }
        else if(a[i]<b[i])
        {
            bob_points++;
        }
        else
        {
           continue;
        }
    }
    return_array[0] = alison_points;
    return_array[1] = bob_points;

    return return_array;
}