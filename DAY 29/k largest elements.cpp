	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>ans;
	    sort(arr,arr+n) ;
	    int e = n-1;
	    int index = 0 ;
	    while(index<k){
	        ans.push_back(arr[e--]);
	        index++;
	    }
	    return ans;
	}
