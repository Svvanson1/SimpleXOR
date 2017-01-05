#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//* String Input
	std::ofstream foo;
	std::string original;
	cin >> original;
	std::string encrypted;
	std::string decrypted;
	std::string newOriginal;
	char key = '.'; 
	//* Encryption Algorithm
	for (int i = 0; i < original.size(); ++i){
		encrypted += original[i] ^ (int(key) + i) % 20;
	}
	cout << "\nHere is the decrypted string: \n" << endl;

	//* Decryption Algorithm
	for (int i = 0; i < encrypted.size(); ++i){
		decrypted += encrypted[i] ^ (int(key) + i) % 20;
	}

	cout << endl << decrypted << endl;

	cin.get();
	return 0;
}
