// ���� 1159�� �󱸰��
// ó�� �������� �� N(1~150), �����̸� �Է� �� ù���ڰ� ���� ������ 5�� �̻��̸� �� ���ĺ� ���

#include<bits/stdc++.h>
using namespace std;

int n, cnt[26]; // cnt = ���ĺ� a~z
string name, ret;		// ret�� ���ڷ� ǥ���� ���ĺ��� ���ڷ� �ٲ��ִ� ����

int main() {
	cin >> n;		// ���� ���� �Է�
	for (int i = 0; i < n; i++) {
		cin >> name;	// ���� ���ڸ�ŭ �̸� �Է�
		cnt[name[0] - 'a']++;		// ���ĺ� a�� 0������ �ٲ��ָ鼭 ���
	}
	for (int i = 0; i < 26; i++) {		// ���ĺ� a�� 0���� z�� 25����
		if (cnt[i] >= 5) {			// �� ���ĺ� ������ 5���� ũ��
			ret += (i + 'a');		// ret�� �� ���ĺ� ����
		}
	}
	if (ret.size()) cout << ret << '\n';	// ret.size()�� ret�� ���� �ִ��� Ȯ��
	else cout << "PREDAJA" << endl;

	return 0;
}