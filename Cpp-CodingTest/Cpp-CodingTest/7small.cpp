// 백준 2309번 일곱난쟁이

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> heights(9);		//  아홉 난쟁이의 키를 저장할 배열
	int sum = 0;		// 난쟁이의 키 합계

	cout << "난쟁이 키 입력" << endl;
	// 아홉 난쟁이 키 입력받기
	for (int i = 0; i < 9; i++) {
		cin >> heights[i];
		sum += heights[i];
	}

	cout << "찾은 난쟁이 키" << endl;
	// 가능한 모든 조합을 검사하여 합이 100이되는 조합 찾기
	for (int i = 0; i < 8; i++) {		// 첫 번째 난쟁이부터 시작해 마지막 난쟁이까지 하나씩 순회 0~7까지
		for (int j = i + 1; j < 9; j++) {		// height[i]의 다음 난쟁이부터 시작해 마지막 난쟁이까지 i+1 ~ 8까지
			if (sum - heights[i] - heights[j] == 100) {
				// 유효한 조합을 찾았을때, 해당 난쟁이를 제외하고 다른 난쟁이의 키를 정렬하여 출력
				vector<int> result;
				for (int k = 0; k < 9; ++k) {
					if (k != i && k != j) {
						result.push_back(heights[k]);
					}
				}
				sort(result.begin(), result.end());		// 오름차순 정렬
				for (int k : result) {
					cout << k << endl;
				}
				return 0;
			}
		}
	}
	return 0;
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
