// memory & pointer 메모리에 저장, 

#include<bits/stdc++.h>
using namespace std;

//int i;
//int main() {
//	cout << &i << '\n';
//	i = 0;
//	cout << &i << '\n';
//}

// 포인터 : 메모리에 주소를 담는 타입
double a = 4.4;
int c = 10;
int main() {
	// <타입>*<변수명> = <해당 타입의 변수의 주소>
	double* b = &a;  // 변수 a의 주소를 가리키는 b
	int* d = &c;
	cout << sizeof(b) << '\n';
	cout << sizeof(d) << '\n';

}
