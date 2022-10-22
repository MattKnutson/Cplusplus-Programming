#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;



// Function to print user defined key, user defined amount of times //

void t_printChar(char key, unsigned int numOfTimes) {

	char userKey = key;      // Variable to hold the users character //
	unsigned int userNum = numOfTimes;    // Variable to hold the number of loop iterations //

	// Loop to print the character //

	for (unsigned int i = 0; i < userNum; ++i) {
		cout << key;

	}
	

}





// Function to enter the menu with no deposit //

void t_menuNoDeposit(double amount, double interest, int years) {
	double menuAmount = amount;     // Variable to hold initial amount //
	double menuDeposit = 0;             // Variable to hold deposit //
	double menuInterest = interest;         // Variable to hold the interest rate //
	int menuYears = years;            // Variable to hold the number of years //
	double interestEarned;      // Variable to hold the interest over time //
	double yearEndBalance;          // Variable to hold the users balance at the end of the year //
	 

	interestEarned = (menuAmount + menuDeposit) * ((menuInterest / 100) / 12);   // Calculate the interest earned //
	yearEndBalance = menuAmount + interestEarned;                     // Calculate he balance at the end of the year //



	cout << "     Balance and Interest Without Monthly Interest Payment     " << endl;
	t_printChar('-', 64);
	cout << endl;
	t_printChar('-', 64);          // Displays the top of the menu //
	cout << endl;
	cout << endl;
	cout << "     YEAR     YEAR END BALANCE    YEAR END INTEREST EARNED" << endl;
	t_printChar('-', 64);
	cout << endl;


	// Loop to display the year, the users balance at the end of that year, and the usersinterest earned //

	for (int i = 1; i <= menuYears; ++i) {
		cout << "      " << i << ".           " << "$" << fixed << setprecision(2) << yearEndBalance << "                   $" << fixed << setprecision(2) << interestEarned << endl;
		cout << endl;
		
	}
	
	
	t_printChar('-', 64);
	cout << endl;
	t_printChar('-', 64);         // Displays the end of the menu //
	cout << endl;
	cout << endl;
	cout << endl;
	








	
	
}
	



// Function to enter the menu with a deposit //


void t_menuWithDeposit(double amount,double deposit, double interest, int years) {
	double menuAmount = amount;     // Variable to hold initial amount //
	double menuDeposit = deposit;             // Variable to hold deposit //
	double menuInterest = interest;         // Variable to hold the interest rate //
	int menuYears = years;            // Variable to hold the number of years //
	double interestEarned;      // Variable to hold the interest over time //
	double yearEndBalance;          // Variable to hold the users balance at the end of the year //


	interestEarned = (menuAmount + menuDeposit) * ((menuInterest / 100) / 12);   // Calculate the interest earned //
	yearEndBalance = menuAmount + interestEarned;                     // Calculate he balance at the end of the year //



	cout << "       Balance and Interest With Monthly Interest Payment      " << endl;
	t_printChar('-', 64);
	cout << endl;
	t_printChar('-', 64);          // Displays the top of the menu //
	cout << endl;
	cout << endl;
	cout << "     YEAR     YEAR END BALANCE    YEAR END INTEREST EARNED" << endl;
	t_printChar('-', 64);
	cout << endl;


	// Loop to display the year, the users balance at the end of that year, and the usersinterest earned //

	for (int i = 1; i <= menuYears; ++i) {
		cout << "      " << i << ".           " << "$" << fixed << setprecision(2) << yearEndBalance << "                   $" << fixed << setprecision(2) << interestEarned << endl;
		cout << endl;

	}


	t_printChar('-', 64);
	cout << endl;
	t_printChar('-', 64);         // Displays the end of the menu //
	cout << endl;
	cout << endl;
	cout << endl;



	cout << "Press any key to continue......";

	_getch();


}






// The main function //

int main() {
	double userAmount;
	double userDeposit;    // Variable to hold the users input //
	double userInterest;
	int userYears;
	bool runMenu = true;
	int userAnswer;

	// Displays the initial menu and grabs input from user //
	do {
		t_printChar('$', 64);
		cout << endl;
		t_printChar('$', 22);
		cout << " Welcome to Airgead ";      // Prints the header //
		t_printChar('$', 22);
		cout << endl;
		cout << endl;

		cout << "Initial Investment Amount: $";
		cin >> userAmount;                            // Grab initial amount from user //
		cout << endl;

		cout << "Monthly Deposit: $";
		cin >> userDeposit;                       // Grab monthly amount from user //
		cout << endl;

		cout << "Annual Interest: %";
		cin >> userInterest;                 // Grab annual interest form user //
		cout << endl;

		cout << "Number of Years: ";
		cin >> userYears;                 // Grab number of years from user //
		cout << endl;

		cout << "Press any key to continue...........";
		cout << endl;
		t_printChar('$', 64);
		cout << endl;                        // Displays the bottom of the menu //
		t_printChar('$', 64);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;

		_getch();                // Waits for the user to push any key to continue //








		t_menuNoDeposit(userAmount, userInterest, userYears);      // Enters the menu with out a deposit amount //

		cout << endl;
		cout << endl;

		t_menuWithDeposit(userAmount, userDeposit, userInterest, userYears);     // Enters the menu with a deposit amount //




		// Loop to determine if user is finished or would like to start over //
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "What would you like to do next?" << endl;
		cout << "1.) Return to main menu?" << endl;           // Option 1 will return to main menu //
		cout << "2.) Exit?   ";                           // Option 2 will exit the program //
		


		cin >> userAnswer;            // Grab user answer //

		while (userAnswer != 1 && userAnswer != 2) {
			cout << "Please enter the option 1 or 2" << endl;  // Loop until answer is 1 or 2 //
			cin >> userAnswer;
		}

		
			switch (userAnswer) {      // Switch statement to enter main menu or exit program //

			case 1:
				runMenu = true;     // If answer is 1 return to main menu //
				break;

			case 2:
				runMenu = false;     // If answer is 2 exit program //
				return 0;

			}
		
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;


	} while (runMenu == true);     // Runs the prgram until the user selects "2" to exit //
	


	return 0;
}







