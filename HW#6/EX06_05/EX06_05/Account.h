#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <vector>
#include "Date.h"
#include "Transaction.h"

class Account {
private:
	int id;
	double balance;
	double annualInterestRate;
	Date dateCreated;
	std::string name;
	std::vector <Transaction> transactions;
public:
	Account() {
		id = 0;
		balance = 0;
		annualInterestRate = 0.0;
	}

	Account(int newId, double newBalance) {
		id = newId;
		balance = newBalance;
	}

	Account(int newId, double newBalance, double newAnnualInterestRate) {
		id = newId;
		balance = newBalance;
		annualInterestRate = newAnnualInterestRate;
	}

	Account(std::string newName, int newId, double newBalance) {
		name = newName;
		id = newId;
		balance = newBalance;
	}

	Account(double newAnnualInterestRate, double newBalance, int newId, std::string newName) {
		annualInterestRate = newAnnualInterestRate;
		balance = newBalance;
		id = newId;
		name = newName;
	}

	int getId(){ return id; }
	double getBalance(){ return balance; }
	double getAnnualInterestRate(){ return annualInterestRate; }
	std::string getName(){ return name; }

	void setId(int newId) {
		id = newId;
	}

	void setBalance(double newBalance) {
		balance = newBalance;
	}

	void setAnnualInterestRate(double newAnnualInterestRate) {
		annualInterestRate = newAnnualInterestRate;
	}

	void setDateCreated(Date newDateCreated) {
		dateCreated = newDateCreated;
	}

	double getMonthlyInterestRate() {
		return Account::annualInterestRate / 12;
	}

	double withdraw(double amount) {
		balance -= amount;
		Date dateCreated(2015, 2, 10);
		Transaction newTrans(dateCreated, 'W', balance, "withdrawal made");
		transactions.push_back(newTrans);
		return balance;
	}

	double deposit(double amount) {
		balance += amount;
		Date dateCreated(2015, 2, 10);
		Transaction newTrans(dateCreated, 'D', balance, "deposit made");
		transactions.push_back(newTrans);
		return balance;
	}
};

#endif