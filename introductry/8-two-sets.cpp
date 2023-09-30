// TODO!
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;
  if(n*(n+1)/2%2) {
    cout << "NO";
    return 0;
  }
  cout << "YES";
  if(n%4==3) {
    cout << n/2;
    cout << n/2+1;
  } else {
    cout << n/2;
    cout << n/2;
  }
}
