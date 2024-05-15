#include<bits/stdc++.h>
using namespace std;


void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size() ;
	int m = matrix[0].size() ;
	vector<int> row(n,0) ;
	vector<int>col(m,0) ;

	for(int i = 0 ;i<n;i++){
		for(int j = 0 ;j<m;j++){
			if(matrix[i][j] == 0){
				row[i] = 1 ;
				col[j] = 1 ;
			}
		}
	}

	// marked row or column me zero hai usme entire row or column me zero set kar do.
	for(int i = 0 ;i<n;i++){
		for(int j = 0 ;j<m;j++){
			if(row[i] == 1 || col[j] == 1){
				matrix[i][j] = 0 ;
			}
		}
	}
}
int main() 
{
     
     
  return 0;
}