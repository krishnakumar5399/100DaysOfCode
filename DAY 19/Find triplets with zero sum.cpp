    //Function to find triplets with zero sum.
// --> https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/

    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n) ;
        for(int i = 0 ; i <n ;i++) { 
        int s  = i+1;
        int e  = n-1 ;
        while(s<e){
            if(arr[i]+arr[s]+arr[e]==0) {
                return 1;
            }
            else if ((arr[i] + arr[s] + arr[e])<0){
                s++;
            }
            else{
                e--;
            }
        }
        }
        return 0 ;
