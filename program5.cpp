#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	string Mahasiswa[3][4] = {
		{"1111","ALI","JKT","0823232323"},
		{"122","BUDI","JKT","0823232323"},
		{"1133","FANI","JKT","0823232323"}
	};
	
	cout
		<< setw(5) << "NIM"
		<< setw(25) << "Nama"
		<< setw(25) << "Alamat"
		<< setw(25) << "HP"
		<< endl;
	
	for (int i = 0; i < 3; i++) {
		cout
			<< setw(5) << Mahasiswa[i][0]
			<< setw(25) << Mahasiswa[i][1]
			<< setw(25) << Mahasiswa[i][2]
			<< setw(25) << Mahasiswa[i][3]
			<< endl;
	}
}
