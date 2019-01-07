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

int binarySearchRecursive(int[] a, int x, int low, int high) {
	if (low >high) {
		return -1;
	}

	int mid = (low + high) / 2;

	if (a[mid] < x) {
		return binarySearchRecursive(a, x, mid+1, high);
	}	else if (a[mid] > x) {
		return binarySearchRecursive(a, x, low, mid-1);
	}	else {
		return mid;
	}
}