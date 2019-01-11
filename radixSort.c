/*	
Radix Sort
The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(nLogn), i.e., they cannot do better than nLogn.
Counting sort is a linear time sorting algorithm that sort in O(n+k) time when elements are in range from 1 to k.
*/

int getMax(int arr[], int n);
void countSort(int arr[], int n, int exp);

void radixsort(int arr[], int n) {
	int m = getMax(arr, n);

	for (int exp = 1; m/exp>0; exp *= 10) {
		countSort(arr, n, exp);
	}
}

void countSort(int arr[], int n, int exp) {
	int output[n];
	int i;
	count[10] = {0};

	for (i = 0; i < n; i++) {
		count[ (arr[i]/exp) % 10]++；
	}

	for (i = 1; i < 10; i++) {
		count[i] += count[i - 1];
	}

	for (i = n - 1; i>=0; i--) {
		output[count[(arr[i]/exp)%10] - 1] = arr[i];
		count[(arr[i]/exp) % 10]--;
	}

	for (i = 0; i < n; i++) {
		arr[i] = output[i];
	}
}

