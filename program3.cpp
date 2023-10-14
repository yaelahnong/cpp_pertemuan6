#include<iostream>

using namespace std;

int main()
{
	int numbers[5], sum = 0;
	
	for (int i = 0; i < 5; i++) {
		cout << "Enter numbers " << i << ": ";
		cin >> numbers[i];
		sum += numbers[i];
	}
	
	cout << "Total Sum = " << sum << endl;
}
