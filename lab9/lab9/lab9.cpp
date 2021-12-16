
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int N, m;
	cout << "Секунды:";
	cin >> N;
	cout << endl;

	m = N % 60;
	cout << "прошло секунд с последней минуты: " << m;
	return 0;
}