// AC
#include <iostream>

#include <string>
using namespace std;

int main(){
  uint64_t a, b, n;
  string x, s;
  cin >> a >> b >> n;
  cin >> x;
  for (int i = 0; i < n; ++i) {
    s = x.substr(i,1);
    if(s=="S" && a>=1) --a;
    if(s == "C" && b>=1) --b;
    if(s == "E"){
      if (a>=b && a>=1) --a;
      else if(b>=1) --b;
    }
  }
  cout << a << endl;
  cout << b << endl;

  return 0;
}