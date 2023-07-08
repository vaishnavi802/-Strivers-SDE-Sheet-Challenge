//reverse words in a string

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res="";
        int i=0;
        int n = s.size();
        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            string sub=s.substr(i,j-i);
            if(res.size()==0) res=sub;
            else res=sub+" "+res;
            i=j+1;
        }
        return res;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)