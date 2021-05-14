/*
Code : Min Steps to 1
Send Feedback
Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:
1.) Subtract 1 from it. (n = n - ­1) ,
2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  
Write brute-force recursive solution for this.

*/

#include <climits>
#include <algorithm>

int countMinStepsToOne(int n)
{
	//Write your code here
    if(n == 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else 
    {
        int s1 = INT_MAX;
        int s2 = INT_MAX;
        int s3 = INT_MAX;
        int res;
        
        if(n % 3 == 0)
        {
            s1 = 1 + countMinStepsToOne(n/3); 
        }
        
        if(n % 2 == 0)
        {
            s2 = 1 + countMinStepsToOne(n/2); 
        }
        
        s3 = 1 + countMinStepsToOne(n-1);
        
        
        res = min(s1, min(s2,s3));
        
        return res;
    }
}
