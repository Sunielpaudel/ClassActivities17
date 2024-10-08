#include "LinearSearchHeader.hpp"

 namespace linear {

	 int linearSearch(int arr[], int number, int target) {
		 for (int i = 0; i < number; i++) {
			 if (arr[i] == target)
				 return i;
		 }
		 return -1;
	 }

}