#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

int main() {

	Account myAcct(0.015, 1000.00, 1122, "George");
	std::cout << "Account Holder Name: " << myAcct.getName() << std::endl;
	std::cout << "Monthly Interest: " << myAcct.getMonthlyInterestRate() << std::endl;
	std::cout << "Balance: " << myAcct.getBalance() << std::endl;
	std::cout << "\n\nAccount summary\n";
	std::cout << "DAY\t\tAMOUNT\tTYPE\tDESCRIPTION\n";
	myAcct.deposit(30.00);
	myAcct.deposit(40.00);
	myAcct.deposit(50.00);
	myAcct.withdraw(5.00);
	myAcct.withdraw(4.00);
	myAcct.withdraw(3.00);

	return 0;
}