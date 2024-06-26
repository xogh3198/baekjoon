#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n;
string s;
stack<double> st;
double arr[26];
int main() {
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      st.push(arr[s[i] - 'A']);
    } else if (!st.empty()) {
      double tmp = st.top();
      st.pop();
      if (s[i] == '+') {
        tmp = st.top() + tmp;
      } else if (s[i] == '-') {
        tmp = st.top() - tmp;
      } else if (s[i] == '*') {
        tmp = st.top() * tmp;
      } else if (s[i] == '/') {
        tmp = st.top() / tmp;
      }
      st.pop();
      st.push(tmp);
    }
  }
  cout << fixed;
  cout.precision(2);
  cout << st.top() << "\n";
}