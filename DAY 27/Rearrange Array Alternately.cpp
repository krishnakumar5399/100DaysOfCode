 // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	if(n != 1){
    	    
    	   vector<int>ans;
    	   int s = 0 ;
    	   int e = n-1 ;
    	   while(s<=e){
    	    ans.push_back(arr[e--]) ;
    	    ans.push_back(arr[s++]) ;
    	   }
    	   
    	   for(int i = 0 ;i<n;i++){
    	    arr[i] = ans[i] ;
    	}
    	
    	}
    
    	
