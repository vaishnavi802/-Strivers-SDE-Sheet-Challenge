//finding longest common prefix in given array of strings

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res="";
        sort(begin(strs),end(strs));
        string st=strs[0];
        string end=strs[n-1];
        for(int i=0;i<st.size();i++)
        {
            if(st[i]==end[i])
            {
                res=res+st[i];
            }
            else
            {
                break;
            }
        }
        return res;
    }
};

// Time Complexity: O(nlogn)
// Space Complexity: O(1)