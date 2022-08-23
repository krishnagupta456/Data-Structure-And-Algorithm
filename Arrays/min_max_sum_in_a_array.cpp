class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int minm = INT_MAX;
    	int maxm = INT_MIN;
    	for(int i = 0; i < N; i ++){
    	    if(A[i] < minm)
    	    minm = A[i];
    	    else if(A[i] > maxm)
    	    maxm = A[i];
    	}
    	
    	int sum = minm + maxm;
    	return sum;
    }

};
