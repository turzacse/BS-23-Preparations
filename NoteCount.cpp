#include <bits/stdc++.h>
using namespace std;


int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    vector<int> notes = {1000, 500, 100, 50, 10, 5, 1};
    vector<int> count(notes.size(), 0);

    for (int i = 0; i < notes.size(); i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount %= notes[i];
        }
    }

    cout << "Currency count:\n";
    for (int i = 0; i < notes.size(); i++) {
        if (count[i] > 0) {
            cout << notes[i] << " " << count[i] << endl;
        }
    }

    return 0;
}

