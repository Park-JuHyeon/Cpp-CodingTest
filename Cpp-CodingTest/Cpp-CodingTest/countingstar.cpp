// 백준 10808 알파벳 개수
// counting star는 map또는 배열

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
int cnt[26];	// a~z 까지가 0 ~ 25이기 때문에 26개의 칸 할당

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cout.tie(NULL);

	cin >> str;		// 문자열 입력
	for (char a : str) {
		// a~z => 아스키 숫자 97 ~ 122 => 0 ~ 25
		cnt[a - 'a']++;		// cnt[a - 'a'] = 97-97 =0부터 25까지
	}
	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}

