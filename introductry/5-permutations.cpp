#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
  int n;
  cin >> n;
  if(n==1) {
    cout << 1;
    return 0;
  }
  if(n==2 || n==3) {
    cout << "NO SOLUTION";
    return 0;
  }
  
  if(n%2==0) 
    for(int i=0; i<=n; i+=2)
      cout << i << " ";
    for(int i=0; i<=n-1; i+=1)
      cout << i << " ";
  } else {
    for(int i=0; i<=n; ++i)
      cout << i << " ";
    for(int i=0; i<=n-1; i+=2)
      cout << i << " ";
  }


// 1 3 5 7 2 4 6
// 2 4 6 1 3 5
}
