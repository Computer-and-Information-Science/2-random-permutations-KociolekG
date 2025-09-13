// Gage Kociolek

#include "permutations.h"
#include "randint.h"
#include <cstddef>

// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1 (int array[], size_t size){ 
    // TODO: Implement algorithm #1 here
    // Fill the array A from a[0] to a[N-1] as follows: To fill a[i], generate random numbers until you get 
    // one that is not already in a[0], a[1], …, a[i-1]
        
       for (int i = 0; i < size; i++) {
        size_t randomNum;
        do {
            randomNum = randint (1,size);
        }
        while (search(array, i, randomNum) < i);
        array[i] = randomNum;
    }
}
void permutations2 (int array[], size_t size) {
    // TODO: Implement algorithm #2 here
    //eliminate the search that is done in algorithm 1 and instead 
    //use another array to keep track of whether or not a generated 
    //random number has already been assigned to a prior element.








}

void permutations3 (int array[], size_t size) {
    // TODO: Implement algorithm #3 here








}
