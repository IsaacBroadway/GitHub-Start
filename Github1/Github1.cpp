# include "github1.h"
# include <cstdlib>
# include <iostream>

using namespace std;


//fill array with 1d value

/* a - integer array
   n - array length
   function fills array with random values with rand() func
*/

void fillArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
		a[i] = rand();
}

// prints array 

/* a - integer array
* const makes read only
   n - array length
   function fills array with random values with rand() func
*/

void printArray(const int a[], int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i] << endl;
	}
}