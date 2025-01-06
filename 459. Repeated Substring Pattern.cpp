#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int i =1; i<= n/2; i++){
            if(n%1 == 0){
                string substring = s.substr(0, i);
                string repeat = "";

                for(int j = 0 ; j< n/i; j++ ){
                    repeat += substring;
                }

                if(repeat == s) return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    string s;
    cin>> s ;
    bool ans = sol.repeatedSubstringPattern(s);
    if(ans == 1) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
