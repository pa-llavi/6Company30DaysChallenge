class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> dp(n);
	    
	    dp[0]=1;
	    int i=0, j=0, k=0;
	    
	    for(int x=1; x<n; x++) {
	        dp[x] = min(dp[i]*2, min(dp[j]*3, dp[k]*5));
	        if(dp[x] == dp[i]*2) i++;
	        if(dp[x] == dp[j]*3) j++;
	        if(dp[x] == dp[k]*5) k++;
	    }
	    
	    return dp[n-1];
	}
};
