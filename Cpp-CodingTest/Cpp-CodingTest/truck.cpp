// ���� 2979 Ʈ������

#include<bits/stdc++.h>
using namespace std;

// A,B,C = Ʈ���� �������  a,b = Ʈ�� �����ð�, �����ð�
int A, B, C, a, b, cnt[104], ret;	// cnt = �ð��뺰 ������ �� 

int main() {
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		for (int j = a; j < b; j++) {	// a(���)�� �̻�, b(����)�� �̸�
			cnt[j]++;
		}
	}
	for (int j = 0; j < 100; j++) {
		if (cnt[j]) {		// ������ Ʈ���� ��
			if (cnt[j] == 1) ret += A;		// Ʈ���� 1��� A ������
			else if (cnt[j] == 2) ret += B * 2;  // Ʈ���� 2��� *2
			else if (cnt[j] == 3) ret += C * 3;
		}
	}
	cout << ret << endl;
	return 0;
}