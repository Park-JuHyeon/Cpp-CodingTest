// memory & pointer �޸𸮿� ����, 

#include<bits/stdc++.h>
using namespace std;

//int i;
//int main() {
//	cout << &i << '\n';
//	i = 0;
//	cout << &i << '\n';
//}

// ������ : �޸𸮿� �ּҸ� ��� Ÿ��
double a = 4.4;
int c = 10;
int main() {
	// <Ÿ��>*<������> = <�ش� Ÿ���� ������ �ּ�>
	double* b = &a;  // ���� a�� �ּҸ� ����Ű�� b
	int* d = &c;
	cout << sizeof(b) << '\n';
	cout << sizeof(d) << '\n';

}
