// Programming Assignment 1.cpp 
// Stelton Phelps
// sdphelps
// 2/18/2019

#include <string>
#include <iostream>
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

	//Area Variables - House & Lawn
	int lotLength = rand() % 200 + 25;
	int lotWidth = rand() % 200 + 20;
	int houseLength = rand() % 100 + 10;
	int houseWidth = rand() % 100 + 15;
	
	//Incase the house area is larger than the lot area, randomizes house variables to be less than lot variables
	for (int a = 1; a < 20; a = a + 1) {
		if ((houseLength > lotLength)) {
			houseLength = rand() % 100 + a;
		}
		else if ((houseWidth > lotWidth)) {
			int houseWidth = rand() % 100 + a;
		}
	}

	int lotArea = lotLength * lotWidth;
	int houseArea = houseLength * houseWidth;
	int lawnArea = lotArea - houseArea;
	int lawnFinal;

	//Addition Variables
	int addNum1 = rand() % 100 + 1;
	int addNum2 = rand() % 100 + 1;
	int addFinal;
	int addCheck = addNum1 + addNum2;
	
	//Multiplication Variables
	int multNum1 = rand() % 250 + 1;
	int multNum2 = rand() % 250 + 1;
	int multFinal;
	int multCheck = multNum1 * multNum2;

	//Area Variables - General
	int areaNum1 = rand() % 75 + 1;
	int areaNum2 = rand() % 150 + 1;
	int areaFinal;
	int areaCheck = areaNum1 * areaNum2;

	//Calculate user's score 
	int userCorrect = 0;
	int Questions = 4;
	std::string userName;

	//Introduction
	std::cout << "Hello and Welcome to my Math quiz!\n";
	std::cout << "\n";
	std::cout << "This quiz will test you on solving for Area, multiplication, and addition.\n";
	
	std::cout << "\n";
	std::cout << "Now what is your name? ";
	std::cout << "\n";

	std::getline(std::cin, userName);

	cout << "\n";
	cout << "Hello " << userName << " and thank you for participating!\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	//Question 1: Addition, calculates addition of two variables and checks user inpur
	std::cout << "Now Question 1: Addition";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "What is " << addNum1 << " + " << addNum2 << "?\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cin >> addFinal;
	std::cout << "\n";
	std::cout << "\n";
	if (addFinal == addCheck) {
		std::cout << "Correct! the answer was " << addCheck << ".\n";
		userCorrect = userCorrect + 1;
	}
	else {
		std::cout << "Wrong! the answer was "<< addCheck << ".\n";
		
	}

	//Calculates the multiplication of two variables and checks answer with user input
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Question 2: Multiplication\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "What is " << multNum1 << " * " << multNum2 << "?\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cin >> multFinal;
	std::cout << "\n";
	std::cout << "\n";
	if (multFinal == multCheck) {
		std::cout << "Correct! the answer was " << multCheck << ".\n";
		userCorrect = userCorrect + 1;
	}
	else {
		std::cout << "Wrong! the answer was " << multCheck << ".\n";

	}

	//Calculate area of a rectangle with two variables and checks if user input is correct
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Question 3: Area\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Calculate the area of a rectangle with a length of " << areaNum1 << " and a width of " << areaNum2 << " in feet.\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cin >> areaFinal;
	std::cout << "\n";
	std::cout << "\n";
	if (areaFinal == areaCheck) {
		std::cout << "Correct! the answer was " << areaCheck << ".\n";
		userCorrect = userCorrect + 1;
	}
	else {
		std::cout << "Wrong! the answer was " << areaCheck << ".\n";

	}

	//Calculates area of a lawn using the area of the entire lot of the house minus the area of the house
 	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Question 4: Area of a house\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Calculate the area of a lawn with a house length of " << houseLength << ", a width of " << houseWidth << " and a lot with a length of " << lotLength << " and a width of " << lotWidth << ".\n";
	std::cout << "*Hint: Find the lawn area requires (Area of the lot) - (Area of the house)*\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cin >> lawnFinal;
	std::cout << "\n";
	std::cout << "\n";
	if (lawnFinal == lawnArea) {
		std::cout << "Correct! the answer was " << lawnArea << ".\n";
		userCorrect = userCorrect + 1;
	}
	else {
		std::cout << "Wrong! the answer was " << lawnArea << ".\n";

	}

	//Checks the user's score out of the total questions and gives a unique response if scored 4/4, 3/4 and below 2/4
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "For the current user: " << userName << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	
	if (userCorrect == Questions) {
		
		std::cout << "You managed to score a perfect 100%! Congrats to your A+\n";

	}
	else if (userCorrect <= 2) {
		std::cout << "You unfortunately scored a " << userCorrect <<" out of " << Questions <<" on the quiz.\n";
		std::cout << "But don't give up! Study hard for the next one!\n";
	}
	else {
		std::cout << "You managed to score a "<< userCorrect << " out of " << Questions << " on the quiz.\n";
		std::cout << "Great job! Now let's go for that 100% the next time around.\n";
	}

	return 0;
}


