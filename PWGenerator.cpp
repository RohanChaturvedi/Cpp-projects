// Copyright Rohan Chaturvedi 2014
// Password Generator
// This program generates passwords that can be numeric, alphanumeric, or alphanumeric with symbols

# include <iostream>
# include <cstdlib>
# include <string>
# include <ctime>

using namespace std;

char Numpw(){// returns a random numeric character
	static const char numeric[] = "0123456789";
	return numeric[rand() % 10];
	}

char AlphaNumpw(){// returns a random alphanumeric character
	static const char alnumeric[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	return alnumeric[rand() % 36];
	}

char AlphaNumSympw(){// returns a random alphanumeric or symbol character
	static const char alnumsym[] = "0123456789abcdefghijklmnopqrstuvwxyz!@#$%^&*'";
	return alnumsym[rand() % 45];
	}

int main()
{
	int len = 0; // length of pw in chars
	int quant = 0;// quantity of pws
	int sel = 0;
	cout << "Welcome to the password generator!" << endl << "----------"<< endl;
	cout << "How long do you want your password to be?" << endl;
	cin >> len;
	cout << "How many passwords to generate?" << endl;
	cin >> quant;
	cout << "Please select a type of password from the menu below (1-3): " << endl;
	cout << "1: Numeric Password" << endl << "2: AlphaNumeric Password" << endl << "3: Alpha Numeric + Symbol Password"<< endl;
	cin >> sel;

	switch(sel){// Numeric
	case 1:{
		srand(time(0)); // seed random with time

		for (int i = 0; i < quant; i++){
			string output;
			for (int j = 0; j < len; j++){
				output += Numpw();
			}
			cout << output<< endl;
		}
		break;
	}

	case 2:{// Alphanumeric
		srand(time(0)); // seed random with time

				for (int i = 0; i < quant; i++){
					string output;
					for (int j = 0; j < len; j++){
						output += AlphaNumpw();
					}
					cout << output << endl;
				}
				break;
	}

	case 3:{// Alphanumeric with symbols
		srand(time(0)); // seed random with time

				for (int i = 0; i < quant; i++){
					string output;
					for (int j = 0; j < len; j++){
						output += AlphaNumSympw();
					}
					cout << output << endl;
				}
				break;
		}
	}
	return 0;
}

