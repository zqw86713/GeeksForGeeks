/*	
Counting Sort

Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values (kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.
*/
#define RANGE 255 


void countSort(char arr[]) {
	char output[strlen(arr)];
	int count[RANGE + 1];
	int i;

	memset(count, 0, sizeof(count));

    	// Store count of each character 
	for (i = 0; arr[i]; ++i) {
		++count[arr[i]];
	}

	// Change count[i] so that count[i] now contains actual 
    	// position of this character in output array 
	for (i = 1; i<= RANGE; ++i) {
		count[i] += count[i-1];
	}

	// Build the output character array 
	// most important part.
	for (i = 0; arr[i]; ++i) {
		output[count[arr[i]]-1] = arr[i];

		int t = count[arr[i]];
		output[t-1] = arr[i];


		--count[arr[i]];
	}

	// Copy the output array to arr, so that arr now 
    	// contains sorted characters 
	for (i=0; arr[i]; ++i) {
		arr[i] = output[i];
	}

}

