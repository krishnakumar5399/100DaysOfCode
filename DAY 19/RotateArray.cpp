/*Rotate Array

Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

 

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:

Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6
*/

// rotate array (counter-clockwise direction) by D steps    means that pahle se roatation karna hai
// arr [] {1,2,3,4,5} k = 1  ; 
//  arr[] = {2,3,4,5,1} ;
// if k = 2 ;
// arr[] = {3,4,5,1,2} ;

#include<bits/stdc++.h>
using namespace std;
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        
        // code here
        // for clockwise rotation 
        if(d>n){         // if rotation time is grater than size of array then rotation % k ;
          d = d % n ;  
        }
        // for counter-clockwise direction) by D steps the
        // that's why rotate by k step banane ke liye yesa karna para.
        int k = abs(n-d) ;
        int ans [n] ;
        for(int i = 0 ;i<n ; i++){
        
            ans[(i+k)%n] = arr[i] ;
            
        }
        for(int i = 0 ;i<n;i++){
            arr[i] = ans[i] ;
       }
    }
    void print(int arr[],int n){
        for(int i = 0 ;i<n ;i++){
            cout<<arr[i]<<" ";
        }
    }
int main() 
{
    //int arr[5] = {1,2,3,4,5} ;
    
    // int d  = 2 ;
    // rotateArr(arr,d,5) ;
    // print(arr,5) ;            // 3 4 5 1 2 
    
    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int n = 10 ;
    int d  = 2 ;
    // rotateArr(arr,d,n) ;
    // print(arr,n) ;            // 6 8 10 12 14 16 18 20 2 4 
    // cout<<endl;


   rotateArr(arr,15,n) ;         // 12 14 16 18 20 2 4 6 8 10 
    print(arr,n) ; 
     
     
  return 0;
}