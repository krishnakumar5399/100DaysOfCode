// 242. Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false



#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s.compare(t) == 0){
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "anagram";
    string t = "nagaram" ;
    if(isAnagram(s,t)) {
        cout<<"this is anagram "<<endl;
    }
    else{
        cout<<"this is not anagram "<<endl ;
    }

    return 0;
}