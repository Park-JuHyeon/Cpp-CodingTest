// ���� 11655 ROT13
// ���ĺ��� 13��° �ڷ� �̷�� ��

#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
	getline(cin, s);	// �Է¿� ���Ⱑ �������� cin ��� getline�Լ��� ����Ѵ�.
	for (int i = 0; i < s.size(); i++) {
		// �빮���϶� �ƽ�Ű �ڵ� 65 ~ 90
		if (s[i] >= 65 && s[i] < 97) {
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		// �ҹ��� �ƽ�Ű�ڵ� 97~122
		if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		cout << s[i];
	}
	
	return 0;
}


