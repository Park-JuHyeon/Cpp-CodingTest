// ���� 10808 ���ĺ� ����
// counting star�� map�Ǵ� �迭

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
int cnt[26];	// a~z ������ 0 ~ 25�̱� ������ 26���� ĭ �Ҵ�

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout.tie(NULL);

	cin >> str;		// ���ڿ� �Է�
	for (char a : str) {
		// a~z => �ƽ�Ű ���� 97 ~ 122 => 0 ~ 25
		cnt[a - 'a']++;		// cnt[a - 'a'] = 97-97 =0���� 25����
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}

