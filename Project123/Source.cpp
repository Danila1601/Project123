#include <iostream>  // библиотеки которые мы используем 
#include <ctime>     // чтобы код работал
#include <cstdlib>
#include <map>
using namespace std;

int main() {
	srand(time(0));
	int sum;
	map<int, int> m;
	for (int i = 2; i < 13; i++) m[i] = 0;
	for (int i = 0; i < 1000; i++) {
		sum = rand() % 6 + 1 + rand() % 6 + 1;
		m[sum] += 1;
	}
	for (int i = 1; i < 7; i++)
		cout << i << '\t' << m[i] << '\n';
	system("pause");
	return 0;
}