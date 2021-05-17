/*
Code : Staircase using Dp
Send Feedback
A child runs up a staircase with 'n' steps and can hop either 1 step, 2 steps or 3 steps at a time. 
Implement a method to count and return all possible ways in which the child can run-up to the stairs.
*/

long staircase(int n){
    
    long arr[n + 1];
    
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    
    for(int i = 3; i <= n; i++){
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    
    return arr[n];
    
}
