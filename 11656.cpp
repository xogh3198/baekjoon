#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  vector<string> v;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    string tmp;
    for (int j = i; j < s.size(); j++) {
      tmp += s[j];
    }
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }
}