/******************* Problem Statement*****************/
/*
NEW YEAR CHAOS
Link to Problem Statement: https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
*/

void minimumBribes(int q_count, int* q) 
{
    int bribe_count = 0;
    char str[] = "Too chaotic";
        for(int i = 0;i<q_count;i++)
        {
            if((q[i] - (i+1))>2)
            {
               printf("Too chaotic\n");
                return;
            }
            for(int j = max(0, q[i]-2);j<i;j++)
            {
                if(q[j]>q[i])
                {
                    bribe_count++;
                }
                
            }
        
        }
        printf("%d\n", bribe_count);
}