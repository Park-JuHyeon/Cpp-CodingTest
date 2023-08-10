// 백준 10988번 펠린드롬 확인
// 펠린드롬 = 거꾸로 해도 똑같은 영어 level, noon
// 펠린드롬이면 1 아니면 0 출력

#include<bits/stdc++.h>
using namespace std;

string str, temp;	// temp는 str을 뒤집었을때의 단어

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