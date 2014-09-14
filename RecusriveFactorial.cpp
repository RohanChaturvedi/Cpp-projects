//Rohan Chaturvedi 2014
// This program uses recursion to compute n! where n is any integer.

#include <iostream>

int factorial(int input){
	if (input == 0){
		return 1; //0! = 1 (Base Case)
	}
	else{
		return (input * factorial(input -1)); //Recursive call
	}

}

int main(){
	int n = 0;
	std::cout << "Please enter an integer /n";
	std::cin >> n;
	factorial(n);
}

