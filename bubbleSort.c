

void bubbleSort(int arr[]) {
	int i;
	int j;
	int n = arr.length-1;

	bool isSwap;

	for (i = 0; i< n-1; i++) {
		isSwap = false;
		//	last i elements are already in place
		for (j = 0; j< n-1-i ; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = arr[j+1];
				isSwap = true;
			}
		}

		if (isSwap = false) {
			break;
		}
	}
}