#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if(n == 1 || n== 2) return 1;

        int a=0, b=1, c=1;

        for (int i = 3; i <= n; i++) {
            int n = a+b+c;
            a = b;
            b = c;
            c = n;
        }

        return c;
    }
};

int main()
{
   int n;
   cin>>n;
   Solution sol;
   int ans =  sol.tribonacci(n);
   cout<<ans<<endl;
}

