#include <bits/stdc++.h>

using namespace std;
// 팩토리얼 재귀함수 모양
int fact(int n) {
	if (n == 1 || n == 0) return 1;
	return n * fact(n - 1);
}

// 팩토리얼 반복문 모양
int fact1(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

// 피보나치 재귀함수 모양
int fibo(int n) {
	cout << "fibo : " << n << '\n';
	if (n == 0 || n == 1) return n;
	return fibo(n - 1) + fibo(n - 2); 
}

int n = 4;
int main() {
	cout << fibo(n) << '\n';
	return 0;
}