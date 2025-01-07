#include<bits/stdc++.h>
using namespace std;

int findFib (int n) {
  if(n == 0) return 0;
  if(n == 1 || n == 2) return 1;

  int a = 1, b = 1;
  for (int i = 3; i<=n; i++)
  {
      int next = a+b;
      a = b;
      b = next;
  }
  return b;
}

int main()
{
    int n;
    cin>> n;
    cout<< findFib(n)<<endl;

}
