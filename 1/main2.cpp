#include "pch.h"
#include "complex.h"

int main() {
	ifstream qupa;
	qupa.open("qupa.txt");
	int k = 0;
	qupa >> k;
	complex* mass = new complex[k];
	for (int i = 0; i < k; i++) {
		qupa >> arr[i].re;
		qupa >> arr[i].im;
	}
	qupa.close();
	int max = 0;
	double b = abs(arr[0]);
	for (int i = 0; i < k; i++) {
		if (b <= abs(mass[i])) {
			max = i;
			b = abs(mass[i]);
		}
	}
	cout << "Макс: " << max << endl;
	delete[] mass;
	return 0;
}