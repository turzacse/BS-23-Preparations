#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        string result;
        while(a.length() < b.length()) a = '0' + a;
        while(b.length() < a.length()) b = '0' + b;

        for(int i = a.length()-1 ; i >= 0; i--)
        {
            int sum = (a[i]- '0') + (b[i]- '0') + c;
            result.push_back((sum % 2)+ '0');
            c = sum / 2;
        }
        if(c) result.push_back('1');
        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
   string a,b;
   cin>>a>>b;
   Solution sol;
   string ans = sol.addBinary(a,b);
   cout<<ans<<endl;
}
