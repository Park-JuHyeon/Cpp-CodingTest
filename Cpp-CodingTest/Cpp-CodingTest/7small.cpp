// ���� 2309�� �ϰ�������

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> heights(9);		//  ��ȩ �������� Ű�� ������ �迭
	int sum = 0;		// �������� Ű �հ�

	cout << "������ Ű �Է�" << endl;
	// ��ȩ ������ Ű �Է¹ޱ�
	for (int i = 0; i < 9; i++) {
		cin >> heights[i];
		sum += heights[i];
	}

	cout << "ã�� ������ Ű" << endl;
	// ������ ��� ������ �˻��Ͽ� ���� 100�̵Ǵ� ���� ã��
	for (int i = 0; i < 8; i++) {		// ù ��° �����̺��� ������ ������ �����̱��� �ϳ��� ��ȸ 0~7����
		for (int j = i + 1; j < 9; j++) {		// height[i]�� ���� �����̺��� ������ ������ �����̱��� i+1 ~ 8����
			if (sum - heights[i] - heights[j] == 100) {
				// ��ȿ�� ������ ã������, �ش� �����̸� �����ϰ� �ٸ� �������� Ű�� �����Ͽ� ���
				vector<int> result;
				for (int k = 0; k < 9; ++k) {
					if (k != i && k != j) {
						result.push_back(heights[k]);
					}
				}
				sort(result.begin(), result.end());		// �������� ����
				for (int k : result) {
					cout << k << endl;
				}
				return 0;
			}
		}
	}
	return 0;
}

// 2. ����Լ� do while ������ Ǯ��
//int a[9];		// ������ Ű 9��
//int n = 9, r = 7;	// ��ü 9�� �� ��� r 7��
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
