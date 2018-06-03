#include <cmath>
#include <cstdio>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

int main(){
  string s;
  cin >> s;
  bool flag=true,loopflag=false;
  while(!s.empty()) {
    if ((0 < s.size() && s.size() < 5) || loopflag){
      flag = false;
    break;
    }
    loopflag = true;
    if(s.size()>=7){
      if(s.substr(0, 7)=="dreamer" && s.substr(7,3)!="ase"){
        s=s.substr(7);
        loopflag = false;
        continue;
      }
    }
    if(s.size()>=6){
      if(s.substr(0, 6)=="eraser" && s.substr(6,3)!="ase") {
        s = s.substr(6);
        loopflag = false;
        continue;
      }
    }
    if(s.size()>=5){
      if(s.substr(0, 5)=="erase") {
        s = s.substr(5);
        loopflag = false;
        continue;
      }
      if(s.substr(0, 5)=="dream") {
        s = s.substr(5);
        loopflag = false;
        continue;
      }
    }
  }


  cout << (flag? "YES" : "NO") << endl;

  return 0;
}