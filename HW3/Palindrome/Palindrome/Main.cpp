/*
Justice Martinez
CS 172-1
EX03_01 Find a Palindrome
*/
#include <iostream>
#include <stack>
#include <string>

bool isPalindrome(const std::string& s);

int main()
{
	std::string temp;

	std::cout << "Enter a string of characters: ";

	std::getline(std::cin, temp);
	const std::string check = temp;

	if (isPalindrome(check))
		std::cout << "This is a palindrome!!\n";
	else
		std::cout << "This is not a palindrome....\n";

	return 0;
}

bool isPalindrome(const std::string& s) {
	bool isPalindrome = true;
	std::stack <char> word;
	char check[100];

	for (int k = 0; k < s.size(); k++){
		check[k]=tolower(s[k]);
		word.push(check[k]);
	}

	do {
		for (int j = 0; j < s.size(); j++){
			if (word.top() == check[j]) {
				word.pop();
			}
			else {
				isPalindrome = false;
				break;
			}
		}
		break;
	} while (isPalindrome == true);

	return isPalindrome;
}