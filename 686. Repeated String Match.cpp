#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
    string make = a;
    int count = 1;

    while (make.size() < b.size()) {
        make += a;
        count++;
    }

    if (make.find(b) != string::npos) {
        return count;
    }

    make += a;
    count++;
    if (make.find(b) != string::npos) {
        return count;
    }

    return -1;
}

};

int main()
{
    Solution sol;
    string a,b;
    cin>>a>>b;
    int ans = sol.repeatedStringMatch(a, b);
    cout<<ans<<endl;
}
