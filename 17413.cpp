#include <iostream>
#include <stack>
#include <string>
using namespace std;

void stackprint(stack<char> &s) { // 스택 전체를 프린트
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
}

int main() {
  stack<char> s;     //스택
  string str;        // 입력받을 문자열
  getline(cin, str); //  입력받은 문자열
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '<') { //문자열에 <가 있으면
      stackprint(s);     //스택내용 전체 출력
      while (1) {
        cout << str[i];
        if (str[i] == '>') {
          break;
        }
        i++;
      }
    } else if (str[i] == ' ') {
      stackprint(s);
      cout << " ";
    } else {
      s.push(str[i]);
    }
  }
  stackprint(s);
}