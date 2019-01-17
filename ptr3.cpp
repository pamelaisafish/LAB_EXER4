#include <iostream>
using namespace std;

int main() {
	int pam[5];
	int* ptr = pam;
	
	cout << "1st number: ";
	cin >> pam[0];
	cout << "2nd number: ";
	cin >> pam[1];
	cout << "3rd number: ";
	cin >> pam[2];
	cout << "4th number: ";
	cin >> pam[3];
	cout << "5th number: ";
	cin >> pam[4];
	
	for (int i = 0; i <=4; i++){
		cout << *ptr << endl;
		ptr++;
	}
	
	
	return 0;
}
