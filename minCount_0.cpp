/*
Code : Minimum Count
Send Feedback
Given an integer N, find and return the count of minimum numbers required to represent N as a sum of squares.
That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}. 
The output will be 1, as 1 is the minimum count of numbers required to represent N as sum of squares.
*/

#include <climits>
#include <algorithm>
#include <cmath>

int minCount(int n)
{
	//Write your code here
    if (n == 0)
        return 0;
    else
    {
        int res = INT_MAX;
        int cur;
        
        for(int i = 1; i <= sqrt(n); i++)
        {
            cur = 1 + minCount(n-(i*i)) ;
            if(cur <= res)
                res = cur;
        }
        
        return res;
    }
}
