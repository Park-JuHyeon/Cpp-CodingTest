// ���� 10988�� �縰��� Ȯ��
// �縰��� = �Ųٷ� �ص� �Ȱ��� ���� level, noon
// �縰����̸� 1 �ƴϸ� 0 ���

#include<bits/stdc++.h>
using namespace std;

string str, temp;	// temp�� str�� ������������ �ܾ�

int main() {
	cin >> str;
	temp = str;
	reverse(temp.begin(), temp.end());
	if (temp == str) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;

}