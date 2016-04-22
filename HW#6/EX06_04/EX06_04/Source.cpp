#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

template <typename S>
void shuffle(std::vector<S> &v);

int main() {

	int i, a;
	std::vector<int> v;
	std::cout << "Enter 10 integers" << std::endl;
	for (i = 0; i < 10; i++) {
		std::cin >> a;
		v.push_back(a);
	}

	shuffle(v);

	std::cout << "Shuffled integers are: " << std::endl;
	for (int i = 0; i < v.size(); i++){
		std::cout << v[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}

template <typename S>
void shuffle(std::vector<S> &v) {
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++){
		int index = rand() % v.size();
		S temp = v[index];
		v[index] = v[i];
		v[i] = temp;
	}
}
