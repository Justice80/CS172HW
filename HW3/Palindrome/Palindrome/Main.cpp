/*
Justice Martinez
CS 172-1
EX03_01 Find a Palindrome
*/
#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::stack <char> word;
	std::string temp;
	bool isPalindrome = true;

	std::cout << "Enter a string of characters: ";

	std::getline(std::cin, temp);

	for (int i = 0; i < temp.size(); i++){
		word.push(temp[i]);
	}

	do {
		for (int j = 0; j < temp.size(); j++){
			if (word.top() == temp[j]) {
				word.pop();
			}
			else {
				isPalindrome = false;
				break;
			}
		}
		break;
	} while (isPalindrome == true);

	if (isPalindrome == true)
		std::cout << "This is a palindrome!!\n";
	else
		std::cout << "This is not a palindrome....\n";

	return 0;
}