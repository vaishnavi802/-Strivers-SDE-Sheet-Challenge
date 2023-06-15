// finding longest substring without repeatation of charecters
//firstly initialize vector v of size 256 charecters with -1
//then initialize maxlen=1 and start=-1 for storing the starting index of the longest substring
//then iterate over the string and check if v[s[i]]>start it means that the charecter is already present in the substring
//if it is already present then update start with v[s[i]] that is new repeating charecter index
// and for each iteration update charecter vector with the index of the charecter that is v[s[i]]=i
//then update maxlen=max(maxlen,i-start) that is the length of the longest substring

#include<bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int maxlen=0;
        int start=-1;
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]]>start)
            {
                start=v[s[i]]; //checking for repeating index
            }
            v[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};