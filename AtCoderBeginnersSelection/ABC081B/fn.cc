#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >>n;
  uint64_t a;
  int min_cnt=30;
  for (int i = 0; i < n; ++i) {
    cin >> a;
    int cnt=0;
    while(a%2 == 0){
      a=a/2;
      ++cnt;
    }
    if (cnt<=min_cnt)
      min_cnt = cnt;
  }
  cout << min_cnt << endl;
  return 0;
}