question link - https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?page=2&category=Arrays,Strings&sortBy=submissions
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int value = 1 ;
        for(int i = 0 ;i<n;i++){
            if(arr[i] <=0){
                continue ;
            }
            else if(arr[i]>value){
                return value;
            }
            else if (arr[i] == value ){
                if(arr[i] == arr[i+1]){
                    continue;
                }
              
            }

            value++;
        }
        return value;
      
       
        
    } 
