/*
	start
	1. counter = 0, firstNol = -1, lastNol = -1, data[] = {1,0,3,0,0,0,4,5}
	2. angka 0?
		ya - counter = counter + 1, firstNol = <index di perulangan>
		tidak - counter = 0
	3. counter == 3?
		ya - lastNol = <index di perulangan>
		tidak - skip
	end
*/

#include<iostream>

using namespace std;

int main()
{
	int data[] = {1,0,3,0,0,0,4,5};
	int dataLength = sizeof(data) / sizeof(data[0]);
	int counter = 0,
		firstNol = -1,
		lastNol = -1;
	
	for (int i = 0; i < dataLength; i++) {
		int angkaSaatIni = data[i];
		int indexAngkaSaatIni = i;
		
		if (angkaSaatIni == 0) {
			counter = counter + 1;
		} else {
			counter = 0;
		}
		
		if (counter == 1) {
			firstNol = indexAngkaSaatIni;
		} else if (counter == 3) {
			lastNol = indexAngkaSaatIni;
		}
	}
	
	bool ketemuTigaAngkaBerturut = lastNol != -1;
	
	if (ketemuTigaAngkaBerturut) {
		cout << "Ketemu tiga angka 0 berturut pada array" << endl;
		cout << "Posisi nol pertama ada di index ke-" << firstNol << endl;
		cout << "Posisi nol terakhir ada di index ke-" << lastNol << endl;	
	} else {
		cout << "Tidak ditemukan tiga angka 0 berturut pada array";
	}
}
