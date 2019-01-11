/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */

void merge(int arr[], int l, int m, int r) ;

voi mergeSort(int arr[], int l, int r) {
     // Same as (l+r)/2, but avoids overflow for 
    // large l and h 
    int m  = l + (r-l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);

    merge(arr, l, m, r);
}


void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;     //  n1 is the length of left sub-array.
    int n2 = r - m;     //  n2 is the length of right sub-array.


    /*  create temp arrays. */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i< n1; i++) {
        L[i] = arr[l+i];
    }

    for (j = 0; j<n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i <n1 && j< n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }   else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

     /* Copy the remaining elements of R[], if there 
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

     /* Copy the remaining elements of R[], if there 
       are any */
    while (j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

}