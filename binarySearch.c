/*	In binary search, we look for an element x in a sorted array by first comparing x
 to the midpoint of the array.
*/

int binarySearch(int[] a, int x) {
	int low = 0;
	int high = a.length-1; 
	int middle;

	while (low <= high) {
		middle = (low + high) /2;

		if (x < a[middle]) {
			high = middle -1;
		} else if (x>a[middle]) {
			low = middle + 1;
		}	else {
			return middle;
		}
	}

	return -1;
	
}