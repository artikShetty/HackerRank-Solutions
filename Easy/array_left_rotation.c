/******************* Problem Statement*****************/
/*
Arrays: Left Rotation
Link to Problem Statement: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
*/
/*****************************************************/

int* rotLeft(int a_count, int* a, int d, int* result_count) {
    *result_count = a_count;
    int temp = 0, j;
    for(int i = 0;i<d;i++)
    {
        temp = a[0];
        for( j=0;j<a_count-1;j++)
        {
            a[j] = a[j+1];
        }
        a[j] = temp;
    }
    return a;
}