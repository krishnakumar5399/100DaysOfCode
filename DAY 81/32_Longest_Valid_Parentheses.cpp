/*32. Longest Valid Parentheses
Solved
Hard
Topics
Companies
Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
substring
.

 

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
Example 3:

Input: s = ""
Output: 0
 

Constraints:

0 <= s.length <= 3 * 104
s[i] is '(', or ')'.*/

// approach.

/* Approach:
We're using a stack to solve this problem.
We initialize a stack with -1 to handle edge cases.
We also initialize a variable length to store the length of the longest valid parentheses substring found so far.
Iterating Through the String:
We loop through each character of the input string s.
1).
If the character is an opening parenthesis '(':
We push its index onto the stack.

2).
If the character is a closing parenthesis ')':
We pop the top element of the stack as it might correspond to a previously opened parenthesis.
3).
If the stack becomes empty after popping:
We push the index of the current closing parenthesis onto the stack.
4).
If the stack is not empty:
We calculate the length of the current valid substring of parentheses.
The length is the difference between the current index and the index of the top element in the stack.
We update the length variable with the maximum of its current value and the calculated length.
5).
Returning the Result:
After iterating through the entire string, the length variable holds the length of the longest valid parentheses substring.
We return this length as the result.*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st ;
        st.push(-1) ;
        int length = 0 ;
        for(int i = 0 ;i<s.length();i++){
            if(s[i] == '('){
                st.push(i) ;
            }
            else{
                // we found close parentheses
                // pop the top element of the stack
                st.pop() ;
                if(st.empty()){
                    st.push(i) ;
                }
                else{
                    // if stack is not empty
                    // then find length of valid substring parentheses.
                    int len = i - st.top() ;
                    length = max(length,len) ;
                }
            }
 
        }
       return length ;
        
    }
};
int main() 
{
     
     
  return 0;
}
