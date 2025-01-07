#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();
        for(int i = n-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};


int main()
{
   Solution sol;
   vector<int> digits = {9,9,9,9};
   vector<int> result = sol.plusOne(digits);

   cout<< "Results: ";
   for(int n: result){
     cout<<n;
   } cout<<endl;
}
