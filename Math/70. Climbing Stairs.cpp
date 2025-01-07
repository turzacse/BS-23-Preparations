#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        int prev2 = 1, prev1 = 2;

        for (int i = 3; i <= n; i++) {
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};

int main()
{
   int n;
   cin>>n;
   Solution sol;
   int ans =  sol.climbStairs(n);
   cout<<ans<<endl;
}
