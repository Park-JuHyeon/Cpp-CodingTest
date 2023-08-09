// 백준 2309번 일곱난쟁이
// 난쟁이 키의 합 100 = 전체키의 합 - 난쟁이가 아닌 a,b

#include <bits/stdc++.h>
using namespace std;
int a[9], sum;
vector<int> v;		// 결과로 출력할 일곱 난쟁이의 키를 저장할 벡터
pair<int, int> ret;		// 합이 100이 되는 두 난쟁이의 인덱스를 저장할 페어

void solve() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < i; j++) {
			if (sum - a[i] - a[j] == 100) {
				ret = { i,j };
				return;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 9; i++) {
		cin >> a[i]; sum += a[i];
	}
	solve();

	for (int i = 0; i < 9; i++) {
		if (ret.first == i || ret.second == i) continue;
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for (int i : v) cout << i << " ";

	//do {
	//	for (int i : a) {
	//		cout << i << " ";	// 모든 난쟁이들의 키를 출력
	//	}
	//	cout << '\n';
	//	int sum = 0;
	//	for (int i = 0; i < 7; i++) {
	//		sum += a[i];
	//	}
	//	if (sum == 100) break;
	//} while (next_permutation(a, a + 9));	// 다음 순열 생성하면서 종료

	//for (int i = 0; i < 7; i++) {
	//	cout << a[i] << endl;
	//	return 0;
	//}

}

// 2. 재귀함수 do while 문으로 풀기
//int a[9];		// 난쟁이 키 9개
//int n = 9, r = 7;	// 전체 9개 중 결과 r 7개
//void solve() {
//	int sum = 0;
//	for (int i = 0; i < r; i++) {
//		sum += a[i];
//	}
//	if (sum == 100) {
//		sort(a, a + 7);
//		for (int i = 0; i < r; i++) {
//			cout << a[i] << endl;
//			exit(0);
//		}
//	}
//}
//
//void print() {
//	for (int i = 0; i < r; i++) {
//		cout << a[i] << " ";
//		cout << '\n';
//	}
//}
//
//void makePermutation(int n, int r, int depth) {
//	if (r == depth) {
//		solve();
//		return;
//	}
//	for (int i = depth; i < n; i++) {
//		swap(a[i], a[depth]);
//		makePermutation(n, r, depth + 1);
//		swap(a[i], a[depth]);
//	}
//	return;
//}
//
//int main() {
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	makePermutation(n, r, 0);
//	return 0;
//}
