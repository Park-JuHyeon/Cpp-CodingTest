// 조합(combination) : 순서와 상관없이 몇명을 뽑아서 갈것인가를 쓸 때 사용
// 5C3 == 5!/3!(5-3)! == 10
#include<bits/stdc++.h>
using namespace std;

// 1. 재귀함수 사용

int n = 5, k = 3, a[5] = { 1,2,3,4,5 };
void print(vector<int> b) {
	for (int i : b) cout << i << " ";
	cout << '\n';
}

void combi(int start, vector<int> b) {
	if (b.size() == k) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}

int main() {
	vector<int>b;
	//combi(-1, b);
	// 조합을 3중 for문으로 구현
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j+1; k < n; k++) {
				cout << i << " : " << j << " : " << k << "\n";
			}
		}
	}
	return 0;
}


 
