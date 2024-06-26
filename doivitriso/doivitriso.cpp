// doivitriso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int mang[5];
	for (int i = 0; i < 5; i++) {
		cout << "Nhap so thu " << i << " "; cin >> mang[i];
	}

	cout << "\nBefore test:";
	for (int i = 0; i < 5; i++) {
		cout << mang[i] << " ";
	}

	int sln, index;
	sln = mang[0];
	for (int i = 0; i < 5; i++) {
		if (mang[i] > sln) {
			sln = mang[i];
			index = i;
		}
	}
	cout << "\nSo lon nhat" << mang[index];
	mang[index] = mang[0];
	mang[0] = sln;
	cout << "\nAfter test:";
	for (int i = 0; i < 5; i++) {
		cout << mang[i] << " ";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
