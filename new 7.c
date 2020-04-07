/******************* Problem Statement*****************/
/* PICKING NUMBERS
Link to problem statement: https://www.hackerrank.com/challenges/picking-numbers/problem
*/
/*****************************************************/
/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int max(int a, int b){return (a>b)?a:b;}

int pickingNumbers(int a_count, int* a) {
    int arr[101] = {0}, index = 0, final_count = 0;

    for(int i = 0; i<a_count; i++)
    {
        index = a[i];
        arr[index]++;
    }

    for(int j = 0;j<a_count;j++)
    {
        final_count = max(final_count, arr[j]+arr[j+1] );
    }
    return final_count;
}