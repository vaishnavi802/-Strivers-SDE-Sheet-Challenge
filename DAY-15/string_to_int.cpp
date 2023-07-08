//converting string to integer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sign = 1;
        int n = s.size();
        int i = 0;
        while(i<n && s[i]==' ')
        {
             i++;
        }
        if(i<n && s[i]=='-')
        {
            sign=-1; 
            i++;
        }   
        else if(i<n && s[i]=='+')
        {
             i++;
        }
        while(i<n)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans = ans*10 + (s[i]-'0');
                if(ans>INT_MAX)
                    break;
            }
            else
                break;
            i++;
        }
        ans = sign*ans;

        if(ans>=INT_MAX)
            return INT_MAX;
        else if(ans<=INT_MIN)
            return INT_MIN;
        
        return ans;

    }
};

//finding digits in the given string

#include <bits/stdc++.h> 
int atoi(string s) {
    // Write your code here.
      bool flag = true;
      int digit=0;
      for(int i=0;i<s.size();i++){
            int rem = (int)s[i]-48;
            if(rem == -3){
                flag = false;
            }
            else if(rem>=0 && rem<=9){
                digit= digit*10+rem;
            }
            else {
              continue;
            }
        }
        if (flag == false)
          digit = -1 * digit;

        return digit;
}