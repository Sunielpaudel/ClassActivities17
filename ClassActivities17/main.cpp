#include<iostream>
#include "LinearSearchHeader.hpp"

using namespace linear;

int main() {
	int arr[] = { 3,6,8,9,12 };
	int number = sizeof(arr) / sizeof(arr[0]);

	int target = 10;

	int result = linearSearch(arr, number, target);

	if (result != -1) {
		std::cout << "Element found at index: " << result << std::endl;
	}
	else {
		std::cout << "Element not found, return value: " << result << std::endl;
	}

	return 0;
}