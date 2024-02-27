/*Display longest name
SchoolAccuracy: 66.29%Submissions: 64K+Points: 0
Internship Alert!
Become an SDE Intern by topping this monthly leaderboard! 

banner
Given a list of names, display the longest name. If there are multiple names of the longest size then return the first occurring name .

Example1 :

Input:
n = 5
names[] = { "Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks" }
Output: GeeksforGeeks
Explanation: name "GeeksforGeeks" has maximum length among all names. 
*/

#include<bits/stdc++.h>
using namespace std;
    string longest(int n, vector<string> &names) {
        // code here
        string s;
        for(auto str : names){
            if(str.length()>s.length()){
                s = str;
            }
        }
        return s ;
    }
int main() 
{
   int  n = 5 ;
    vector<string> names = { "Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks" };
    cout<<longest(n,names)<<endl;
     
     
  return 0;
}