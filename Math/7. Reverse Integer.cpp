#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int num = 0;
        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            // Check for overflow/underflow
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) return 0; // overflow
            if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit < -8)) return 0; // underflow

            num = num * 10 + digit;
        }
        return num;
    }
};


int main()
{
    Solution sol;
    long long int n;
    cin>> n;
    long long int ans = sol.reverse(n);
    cout<< ans;
}
