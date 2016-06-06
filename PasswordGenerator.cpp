//============================================================================
// Name        : PasswordGenerator.cpp
// Author      : Macbrine and miblake6
// Version     :
// Copyright   : Don't do it
// Description : Password Generator
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	unsigned int pw_length = 0;
	cout << "Input desired password length: ";
	cin >> pw_length;
	string pw(pw_length, 'a');
	for(auto& digit : pw)
		digit = static_cast<char>(rand()%255);
	cout << "Your pw is " << pw << endl;

	return 0;
}

