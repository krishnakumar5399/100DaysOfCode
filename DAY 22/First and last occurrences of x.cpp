question link -> 
// finding for first element.
    int first (int arr[],int n,int x){
        int s = 0 ;
        int e = n-1 ;
        int ans = -1 ;
        while(s<=e){
            int mid = s + (e-s) /2 ;
            if(arr[mid] == x){
                ans = mid ;
                e = mid -1 ;
            }
            else if (arr[mid] <x ){
                s = mid +1;
            }
            else{
                e= mid -1 ;
            }
        }
        return ans;
    }
    // finding  last occurence;
    int last (int arr[],int n,int x){
        int s = 0 ;
        int e = n-1 ;
        int ans = -1 ;
        while(s<=e){
            int mid = s + (e-s) /2 ;
            if(arr[mid] == x){
                ans = mid ;
                s = mid +1 ;
            }
            else if (arr[mid] <x ){
                s = mid +1;
            }
            else{
                e= mid -1 ;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        int f = first(arr,n,x);
        int l = last(arr,n,x) ;
        vector<int>ans;
        ans.push_back(f);
        ans.push_back(l) ;
        return ans;
    }
