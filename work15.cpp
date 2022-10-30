#include <iostream>
using namespace std;
int main()
{
//1
/*	int i = 2;
	do {
		cout << i << " ";
		i += 2;
	} while (i <= 100);*/
//2
/*	int a, b, sum = 0;
	cin >> a >> b;
	int i = b;
	do {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i -= 1;
	} while (i >= a);
	cout << sum << endl;*/
//3
/*	int n;
	cin >> n;
	int i = 1;
	do {
		cout << i * i << endl;
		i++;
	} while (i * i <= n);*/
//29
/*	int i = 2;
	do {
		cout << i << " ";
		i += 2;
	} while (i <= 100); */
//30
/*	int sum = 0, i = 1;
	do {
		sum = sum + i;
		i += 2;
	} while (i <= 99);
	cout << sum << endl;*/
//17
/*	int n, a, cr = 0;
	cin >> n;
	int i = 1;
	do {
		cin >> a;
		cr = cr + a;
		i++;
	} while (i<=n);
	cr = cr / n;
	cout << cr << endl;*/
//18
/*	int n, sum = 0;
	cin >> n;
	int i = 1;
	do{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			sum += 1;
		}
		i++;
	} while (i <= n);
	cout << sum << endl;*/
//22
/*	int n;
	double sum = 0;
	cin >> n;
	double i = 1.00;
	do{
		sum = sum + 1 / i;
		i++;
	} while (i <= n);
	cout << sum << endl;*/
	return 0;
}