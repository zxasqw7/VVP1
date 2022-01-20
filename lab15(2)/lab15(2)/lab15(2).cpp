#include <iostream>
using namespace std;

float rings(float r1, float r2) {
	float r = 3.14 * (r1 * r1 - r2 * r2);
	return r;
}
int main() {
	setlocale(LC_ALL, "ru");
	for (float i = 0; i < 3; i++) {
		float r1, r2;
		cout << "Введите 1-ый радиус окружности ( r1 > r2):";
		cin >> r1;
		cout << "Введите 2-ой радиус окружности: ";
		cin >> r2;
		rings(r1, r2);
		cout << rings(r1, r2) << endl;
	}
	return 0;
}


