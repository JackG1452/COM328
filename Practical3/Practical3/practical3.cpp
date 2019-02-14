//==============================================================================
// Name        : practical3.cpp
// Author      : your name
// Version     : 1.0
// Description : practical 3 test program to exercise the simple sort algorithms
//==============================================================================

#include <string>
#include <cstdlib>	// srand
#include <ctime>	// time
#include "Array.h"
#include "Sort.h"

using namespace std;

// PostCondition: array is filled with random numbers 1..range
void fillRandom(Array<int> & data, int range=100) {
	for (int i = 0; i < data.length(); i++) {
		data[i] = rand() % range + 1;
	}
}

// test selection sort
void testSelect() {

	Array<int> Select(20);

	fillRandom(Select, 100);

	cout << "unsorted Select array" << Select << endl;

	selectionSort(Select);

	cout << "sorted Select array" << Select << endl;
}

// test insertion sort
void testInsert() {
	Array<int> Insert(20);

	fillRandom(Insert, 100);

	cout << "unsorted Insert array" << Insert << endl;

	insertionSort(Insert);

	cout << "sorted Insert array" << Insert << endl;

	insertionSort(Insert);
	cout << "sorted Insert array" << Insert << endl;
}


// return difference in the largest and smallest elements in the array  
int maxDiff(const Array<int> & data) {
    return 0;
}
// Compare performance of selection/insertion sort.
void testBoth() {

	Array<int> SelectBoth(20);
	fillRandom(SelectBoth, 100);
	Array<int> InsertBoth(20);
	InsertBoth = SelectBoth;
	cout << "SelectBoth Array" << SelectBoth << endl;
	cout << "InsertBoth Array" << InsertBoth << endl;
	selectionSort(SelectBoth);
	insertionSort(InsertBoth);
	
}

// test string sorting
void testString() {

}

// Main method.
int main() {
	
	//initialise the random number generator (used in fillRandom())
	srand((unsigned)time(NULL));

	// call test methods here
	//testSelect();
	//testInsert();
	for (int i = 0; i < 10; i++)
	{
		testBoth();
	}
	
	// ---------------------------------------------------
	cout << endl << "Press enter to quit";
	cin.get();
	return 0;
}
