// 백준 9996번 한국이 그리울땐 서버에 접속하지
// 첫번째 줄에 파일의 개수, 두번째에 파일 패턴(a*d) 

#include<bits/stdc++.h>
using namespace std;

int n;			// 테스트케이스의 수
string s, ori_s, pre, suf;		// 문자열 변수들

int main() {
	cin >> n;		// 테스트케이스 개수 입력
	cin >> ori_s;	// 원본(암호화된) 문자열 입력

	int pos = ori_s.find('*');		// ori_s에서 * 위치 찾기
	pre = ori_s.substr(0, pos);		// *(ori_s[1]) 이전부분 추출
	suf = ori_s.substr(pos + 1);	// *(ori_s[1]) 이후부분(은 어차피 하나라서 +1) 추출

	for (int i = 0; i < n; i++) {	
		cin >> s;			// 비교할 문자열 n개 입력

		// pre와 suf의 길이가 s보다 크면 NE 출력
		if (pre.size() + suf.size() > s.size()) {
			cout << "NE\n";
		}
		else {
			// pre와 suf부분이 s와 일치하면 DA 출력, 그렇지 않으면 NE 출력
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
				cout << "DA\n";
			else
				cout << "NE\n";
		}
	}
	return 0;
	
}