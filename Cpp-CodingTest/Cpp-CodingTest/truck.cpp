// 백준 2979 트럭주차

#include<bits/stdc++.h>
using namespace std;

// A,B,C = 트럭의 주차요금  a,b = 트럭 도착시간, 떠난시간
int A, B, C, a, b, cnt[104], ret;	// cnt = 시간대별 차량의 수 

int main() {
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		for (int j = a; j < b; j++) {	// a(출발)는 이상, b(도착)는 미만
			cnt[j]++;
		}
	}
	for (int j = 0; j < 100; j++) {
		if (cnt[j]) {		// 도착한 트럭의 수
			if (cnt[j] == 1) ret += A;		// 트럭이 1대면 A 더해줌
			else if (cnt[j] == 2) ret += B * 2;  // 트럭이 2대라서 *2
			else if (cnt[j] == 3) ret += C * 3;
		}
	}
	cout << ret << endl;
	return 0;
}