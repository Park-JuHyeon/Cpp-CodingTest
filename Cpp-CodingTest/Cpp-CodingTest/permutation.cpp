#include <bits/stdc++.h>
using namespace std;

// 일반 순열호출
//int main() {
//	int a[] = { 1,2,3 };
//	do {
//		for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(a, a + 3));
//}

// 벡터사용 순열
//int main() {
//	vector<int> a = { 2,1,3 };
//	sort(a.begin(), a.end());	// a를 오름차순으로 정렬
//	do {
//		for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(a.begin(), a.end()));		// next_permutation : 오름차순을 기준으로 순열을 생성
//}

// 5개의 수 중에서 2개를 뽑는 순열
//int main() {
//	vector<int> a = { 2,1,3,100,200 };
//	sort(a.begin(), a.end());	// a를 오름차순으로 정렬
//	do {
//		for (int i = 0; i < 2; i++) {
//			cout << a[i] << " ";
//		}
//		cout << '\n';
//	} while (next_permutation(a.begin(), a.end()));		// next_permutation : 오름차순을 기준으로 순열을 생성
//}


// 재귀함수로 만드는 순열
vector <int> v;
void printV(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

void makePermutation(int n, int r, int depth) {
	cout << n << " : " << r << " : " << depth << '\n';
	if (r == depth) {
		printV(v);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		makePermutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}
}

int main()
{
	for (int i = 1; i <= 3; i++)v.push_back(i);
	makePermutation(3, 3, 0);

	return 0;
}