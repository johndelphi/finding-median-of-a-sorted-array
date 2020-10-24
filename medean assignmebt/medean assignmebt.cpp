/*john mueama michael 
cosc 1437
date 8/30/2020
discription program that find the median in a given array */ //c++ 11


#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
//Defining a function to find the median of an array of ints, 
//  return type is double because median of ints can be decimals 
double findMedian(int intArray[], int length) {
	double median;
	// Sorting algorithm used for effiecieny 
	std::sort(intArray, intArray + length);
	// Calculate the median for odd length intArrays
	median = intArray[(length / 2)]; 
	// Check if array has an even length
	if (length % 2 == 0) {
		// if even intArray, get next number in intArray and divide by 2
		median = (median + intArray[length / 2 - 1]) / 2;
	}
	// Return the calculated median
	return median;
}

int main() {
	int arrayOne[7] = { 1, 2, 3, 4, 5, 99, 88 };
	cout << findMedian(arrayOne, 7) << endl;
	int arrayTwo[4] = { 1, 2, 3, 4};
	cout << findMedian(arrayTwo, 4) << endl;
	int arrayThree[9] = { 51, 10, 15, 20, 87, 11, 588, 3, 9 };
	cout << findMedian(arrayThree, 9) << endl;
}
