// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category=Arrays,Strings&sortBy=submissions

vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int>ans ;
        sort(arr,arr+n) ;
        int count = 0 ;
        
        for(int i= 0;i<n-1 ;i++){
            if(arr[i]==arr[i+1]){
                if(count==0){
                 count++ ;
                 ans.push_back(arr[i]) ;
                }

                
            }
            else{
                count = 0 ;
            }
        }
        if(ans.size()>0){
            return ans;
        }
        else{
            ans.assign(1,-1) ;
            return ans ;
        }
