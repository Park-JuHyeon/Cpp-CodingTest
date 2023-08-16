// 백준 11655 ROT13
// 알파벳을 13번째 뒤로 미루는 것

#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] < 97) {
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}

		cout << s[i] << "";
	}
	return 0;
}


