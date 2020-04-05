
/******************* Problem Statement*****************/
/* COUNTING VALLEYS
Link to problem statement: https://www.hackerrank.com/challenges/counting-valleys/problem */
/*****************************************************/

int countingValleys(int n, char* s) {
    
    int sea_level = 0, valley_counter = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'U'){sea_level++;}
        else if(s[i] == 'D'){sea_level--;}

        if(sea_level == 0 && s[i] == 'U'){ valley_counter++;}
    }

    return valley_counter;
}