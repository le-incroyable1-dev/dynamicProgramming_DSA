#include <algorithm>
#include <climits>

int countStepsToOne(int n)
{
	//Write your code here
    if(n == 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else
    {
        int res;
        int s1, s2, s3;
        int *arr = new int[n];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        
        for(int i = 3; i < n; i++)
        {
            s1 = INT_MAX;
            s2 = INT_MAX;
            s3 = INT_MAX;
            
            if((i+1) % 3 == 0)
        	{
            	s1 = 1 + arr[((i+1)/3)-1]; 
        	}
        
        	if((i+1) % 2 == 0)
        	{
            	s2 = 1 + arr[((i+1)/2)-1];
        	}
        
        	s3 = 1 + arr[i-1];
        
        
        	res = min(s1, min(s2,s3));
            
            arr[i] = res;
        }
        
        return arr[n-1];
        
    }
    
}
