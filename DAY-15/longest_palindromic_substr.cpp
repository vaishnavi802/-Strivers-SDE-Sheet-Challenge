//finding lomgest palindromic substring in a string

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int st=0,en=0;
        int n=s.size();
        if(n<=1) return s;
        int maxlen=1;

        //odd length
        for(int i=1;i<n-1;i++)
        {
            int l,r;
            l=i,r=i;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                     l--;
                     r++;
                }
               else
                 break;
            }
            int len=r-l-1;
            if(len>maxlen){
                maxlen=len;
                st=l+1;
                en=r-1;
            }
        }

        //even length
         for(int i=0;i<n-1;i++)
        {
            int l,r;
            l=i,r=i+1;
            while(l>=0 && r<n)
            {
                if(s[l]==s[r])
                {
                     l--;
                     r++;
                }
               else
                 break;
            }
            int len=r-l-1;
            if(len>maxlen){
                maxlen=len;
                st=l+1;
                en=r-1;
            }
        }

        return s.substr(st,maxlen);
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)