#ifndef TRANSACTOIN_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

class Transaction {
private:
	Date dateTransaction;
	char type;
	double amount;
	double balance;
	std::string description;
public:
	Transaction();

	Transaction(Date newDateTransaction, char newType, double newBalance, std::string newDescription){
		dateTransaction = newDateTransaction;
		type = newType;
		balance = newBalance;
		description = newDescription;
		print();
	}

	void print(){
		std::cout << dateTransaction.getDay() << "-" << dateTransaction.getMonth() << "-" << dateTransaction.getYear() <<
			"\t" << balance << "\t" << type << "\t" << description << "\t" << std::endl;
	}
};

#endif