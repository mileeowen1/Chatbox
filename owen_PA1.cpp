/*
Name: Milee Owen
Class: CPSC 121, Spring 2019
Date: January 26, 2019
Programming Assignment: PA1
Description: This program runs a chatBox that interacts with a user. Greeting each other and asking questions such as name, home, dream car, cost, loan years, interest, and calculate the montly payment and total cost. Find out what the miles per gallon is for dream car and whether it meets the U.S. Government standard of 34.1 MPG.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	// declare variables with data types such as string, int, and float
	string userName;
	string chatBotName = "Hoodini";
	string userFrom;
	int userYear;
	float chatBoxYear = 7.0;
	string userDreamCar;
	string userDreamCarColor;
	float userDreamCarCost;
	int userDreamCarLoanYears;
	float userDreamCarInterestRate;
	float mpymt;
	float totalCost;
	float userCarMPG;
	float standardMPG = 34.1;
	
	// ask user to input his name, then greet and tell him chatBot name
	cout << "What is your name?" << endl;
	//cin >> userName; // reads characters in until it reaches whitespace
	// whitespace: spaces, newlines, tabs
	getline(cin, userName);
	cout << "Hi there, it is nice to meet you " << userName << ". My name is " << chatBotName << "." << endl; 
	
	// inquire where the user is from and compliment him
	cout << "Where are you from?" << endl;
	getline(cin, userFrom);
	cout << "You are so lucky to live in " << userFrom << "!" << endl;
	
	// request user's birth year and compare to chatBox age
	cout << "What year were you born?" << endl;
	cin >> userYear;
	cout << "You are " << 2019 - userYear << " years old. That would make you about " << (2019 - userYear) / chatBoxYear << " times older than me. Your'e sooooo old. I'm only " << chatBoxYear << " years old." << endl;
	
	// ask what the user's dream car is and in what color
	cout << "If you were rich enough to afford any car, what would be your dream car?" << endl;
	getline(cin, userDreamCar); // to get rid of extra newline
	getline(cin, userDreamCar);
	cout << "Wow. That's cool. What color do you want it in?" << endl;
	getline(cin, userDreamCarColor);
	cout << "Nice choice! I've always wanted one too, if I had opposable thumbs to drive it." << endl;
	
	// inquire the price
	cout << "How much does it cost?" << endl;
	cin >> userDreamCarCost;
	cout << "OUUUUHHHHHHHHHH, that's quite out of my price range." << endl;
	
	// request loan years and interest rate
	cout << "How many years would you take a loan out to pay for this oh so expensive dream car you desperately want but can't have?" << endl;
	cin >> userDreamCarLoanYears;
	cout << "And how much do you think the annual interest rate would be?" << endl;
	cin >> userDreamCarInterestRate;
	
	// calculate the monthly payment and total cost
	mpymt = (((userDreamCarInterestRate / 100) / 12) * userDreamCarCost)/(1 - pow ((1+((userDreamCarInterestRate/100)/12)),(-1*(userDreamCarLoanYears*12))));
	totalCost = (mpymt*12*userDreamCarLoanYears);
	cout << "Your monthly payemnt for a " << userDreamCar << " in the color " <<userDreamCarColor << " will be $" << mpymt << ", which in total will amout to...oh my that's quite expensive...$" << totalCost << "." << endl;
	
	// ask about the miles per gallon for dream car
	cout << "But is it really worth all that mucho monay..." << endl;
	cout << "What is the miles per gallon for a " << userDreamCar << "?" << endl;
	cin >> userCarMPG;
	
 	// create if statment to determine whether the MPG meets U.S. Government standard
	if (userCarMPG >= standardMPG) {
    cout << "Your dream car MPG meets the U.S. Government's standard." << endl;
  }
  	else if (userCarMPG < standardMPG) {
  	cout << "Your dream car MPG does not meet the U.S. Government's standard." << endl;
  }
	
	return 0;
}
