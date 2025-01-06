#include<bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cout << "Enter Amount:" ;
 cin>> n;

 vector<int> notes = {1000, 500, 100, 50, 20, 10, 5, 1};
 vector<int> count(notes.size(), 0);

 for (int i= 0; i<notes.size(); i++){
    if(n>=notes[i]){
        count[i] = n / notes[i];
        n = n % notes[i];
    }
 }

 cout << "Currency Count : \n";
 for (int i = 0; i< notes.size(); i++){
    if(count [i] != 0)
    cout<< notes[i] << " " << count[i] <<endl;
 }
}
