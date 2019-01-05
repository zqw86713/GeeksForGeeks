//	java code.
public class Insertion {
	public static void sort (Comparable[] a) {
		int N = a.length;
		for (int i = 1; i< N; i++) {
			for (int j = i; j>0 && a[j]>a[j-1]; j--) {
				exch(a, j, j-1);		//	move sorted element to the right by 1.
			}
		}
	}
}

//	for testing purposes.
public static voi sort (Comparable[] a) {
	int N = a.length;
	for (int i=1; i<N; i++) {
		for (int j=i; j>0 && a[j]>a[j-1];j--) {
			exch(a, j, j-1);
		}

	}
}

private static void exch(Comparable[] a, int i, int j) {
	Comprable t = a[i];
	a[i] = a[j];
	a[j] = t;
}


//	c++ code.

void insertionSort(int a[], int N) {
	for (int i = 1; i < N; i++) { // O(N)
    		X = a[i]; // X is the item to be inserted
    		for (j = i-1; j >= 0 && a[j] > X; j--) { // can be fast or slow
      			a[j+1] = a[j]; // make a place for X
  		}
    		a[j+1] = X; // index j+1 is the insertion point
  	}
}