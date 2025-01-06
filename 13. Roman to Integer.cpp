#include<bits/stdc++.h>
using namespace std;

int romanToInt (string s){
    auto getValue = [](char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0; // Invalid character
        }
    };

    int result = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        // If the current numeral is smaller than the next, subtract it
        if (i < n - 1 && getValue(s[i]) < getValue(s[i + 1])) {
            result -= getValue(s[i]);
        } else {
            result += getValue(s[i]);
        }
    }
    return result;
}

int main(){
    int n;
    string s;
    cin>> s;
    cout << "Input: " << s << "\nOutput: " << romanToInt(s) << endl;
}
