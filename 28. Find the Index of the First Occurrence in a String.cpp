#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if(m == 0) return 0;

        for(int i = 0; i<= n-m; i++){
            if(haystack.substr(i,m)== needle){
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    string h, n;
    cin>> h >> n;
    int result = sol.strStr(h,n);
    cout<<result<<endl;
}
