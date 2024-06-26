#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a = 0;
  for (int i = 0; i < s.size(); i++) {
    a++;
  }
  cout << a;
}