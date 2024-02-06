// 58. Length of Last Word

// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal 
// substring
//  consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6

#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{

    int x = 0;
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && x == 1)
            break;
        else if (s[i] != ' ')
        {
            x = 1;
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "Hello World" ;
    string str = "   fly me   to   the moon  " ;
    cout<<"length of the last word : "<<lengthOfLastWord(s)<<endl;   //5

    cout<<"length of the last word : "<<lengthOfLastWord(str)<<endl;  // 4

    


    return 0;
}