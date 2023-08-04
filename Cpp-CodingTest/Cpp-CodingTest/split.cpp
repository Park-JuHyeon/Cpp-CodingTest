// split() 함수 : 다른 프로그래밍언어에서도 문자열을 특정 문자열을 기준으로 쪼개어서 배열화시키는 함수
// C++ 에서는 split 함수를 지원안해서 만들어야함

#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimeter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimeter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	ret.push_back(token);
	return ret;
}

int main() {
	string s = "abcdabc", d = "d";
	vector<string> a = split(s, d);
	for (string b : a) cout << b << "\n";
}

