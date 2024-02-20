#include <iostream>

int main () {
	int number = 0;
	// The first part
	std::cin >> number;
	if (number > 0){
		std::cout << "The number is positive" << std::endl;	
	}
	else if (number == 0){
		std::cout << "The number is zero" << std::endl;
	}
	else {
		std::cout << "The number is negative" << std::endl;	
	}

	// The second part
	char grade;
	if (number >= 90 && number <= 100){
		grade = 'A';
	}	
	else if (number >= 80 && number < 90){
		grade = 'B';
	}
	else if (number >= 70 && number < 80){
		grade = 'C';	
	}
	else if (number >= 60 && number < 70){
		grade = 'D';
	}
	else if (number >= 50 && number < 60){
		grade = 'F';
	}

	std::cout << "Grade is : " << grade << std::endl;

	// The third part 
	

	for (int i = 1; i <= 10; ++i){
		std::cout << i << std::endl;
	}

	return 0;
}
