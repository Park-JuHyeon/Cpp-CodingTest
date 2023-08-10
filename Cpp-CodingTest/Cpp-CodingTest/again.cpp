// 했던 풀이 복습
#include<bits/stdc++.h>
using namespace std;

// 1. 펠린드롬
//string n, ret;
//
//int main() {
//	cin >> n;
//	ret = n;
//	reverse(ret.begin(), ret.end());
//	if (n == ret) {
//		cout << 1 << endl;
//	}
//	else {
//		cout << 0 << endl;
//	}
//	return 0;
//}

// 2. 트럭주차
//int A, B, C, a, b, cnt[104], ret;
//
//int main() {
//	cin >> A >> B >> C;
//	for (int i = 0; i < 3; i++) {
//		cin >> a >> b;
//		for (int j = a; j < b; j++) {
//			cnt[j]++;
//		}
//	}
//	for (int j = 0; j < 100; j++) {
//		if (cnt[j] == 1) ret += A;
//		else if (cnt[j] == 2) ret += B * 2;
//		else if (cnt[j] == 3) ret += C * 3;
//	}
//	cout << ret << endl;
//	return 0;
//}

// 3. 농구선수 첫글자
int n, cnt[26];
string name, ret;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		cnt[name[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5) ret += i + 'a';
	}
	if (ret.size()) cout << ret << endl;
	else cout << "PREDAJA" << endl;
	return 0;
}

