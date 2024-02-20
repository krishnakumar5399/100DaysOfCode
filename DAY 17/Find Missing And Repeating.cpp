//  https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&category=Arrays,Strings&sortBy=submissions


vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end()) ;
        vector<int>ans ;
        int index = -1 ;
        for(int i = 0 ;i<n-1;i++){
            if(arr[i] == arr[i+1]){
                index = i ;
            }
        }
        ans.push_back(arr[index]) ;
        
        
        arr.erase(arr.begin()+index) ;
        int result = 0 ;
        for(int i = 0 ;i<n-1 ;i++){
            result ^= arr[i] ;
        }
        for(int i = 0 ;i<=n ;i++){
            result ^= i ;
        }
        ans.push_back(result) ;
        
      

        return ans ;
    }
