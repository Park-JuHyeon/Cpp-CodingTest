// ���� 9996�� �ѱ��� �׸��ﶩ ������ ��������
// ù��° �ٿ� ������ ����, �ι�°�� ���� ����(a*d) 

#include<bits/stdc++.h>
using namespace std;

int n;			// �׽�Ʈ���̽��� ��
string s, ori_s, pre, suf;		// ���ڿ� ������

int main() {
	cin >> n;		// �׽�Ʈ���̽� ���� �Է�
	cin >> ori_s;	// ����(��ȣȭ��) ���ڿ� �Է�

	int pos = ori_s.find('*');		// ori_s���� * ��ġ ã��
	pre = ori_s.substr(0, pos);		// *(ori_s[1]) �����κ� ����
	suf = ori_s.substr(pos + 1);	// *(ori_s[1]) ���ĺκ�(�� ������ �ϳ��� +1) ����

	for (int i = 0; i < n; i++) {	
		cin >> s;			// ���� ���ڿ� n�� �Է�

		// pre�� suf�� ���̰� s���� ũ�� NE ���
		if (pre.size() + suf.size() > s.size()) {
			cout << "NE\n";
		}
		else {
			// pre�� suf�κ��� s�� ��ġ�ϸ� DA ���, �׷��� ������ NE ���
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
				cout << "DA\n";
			else
				cout << "NE\n";
		}
	}
	return 0;
	
}