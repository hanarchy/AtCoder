#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin >> s;
  int sum=0;

  for (int i = 0; i < 3; ++i)
    sum += stoi(s.substr(i,1));
  cout << sum << endl;
  return 0;
}