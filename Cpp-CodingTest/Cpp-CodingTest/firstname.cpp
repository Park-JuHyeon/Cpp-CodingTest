// 백준 1159번 농구경기
// 처음 선수들의 수 N(1~150), 선수이름 입력 후 첫글자가 같은 선수가 5명 이상이면 그 알파벳 출력

#include<bits/stdc++.h>
using namespace std;

int n, cnt[26]; // cnt = 알파벳 a~z
string name, ret;		// ret는 숫자로 표현된 알파벳을 문자로 바꿔주는 역할

int main() {
	cin >> n;		// 선수 숫자 입력
	for (int i = 0; i < n; i++) {
		cin >> name;	// 선수 숫자만큼 이름 입력
		cnt[name[0] - 'a']++;		// 알파벳 a를 0번으로 바꿔주면서 상승
	}
	for (int i = 0; i < 26; i++) {		// 알파벳 a인 0부터 z인 25까지
		if (cnt[i] >= 5) {			// 한 알파벳 개수가 5보다 크면
			ret += (i + 'a');		// ret에 그 알파벳 저장
		}
	}
	if (ret.size()) cout << ret << '\n';	// ret.size()는 ret에 값이 있는지 확인
	else cout << "PREDAJA" << endl;

	return 0;
}