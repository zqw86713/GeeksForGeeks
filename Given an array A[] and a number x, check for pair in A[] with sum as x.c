/*

Given an array A[] and a number x, check for pair in A[] with sum as x
Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x.

METHOD 1 (Use Sorting)

Algorithm :

hasArrayTwoCandidates (A[], ar_size, sum)
1) Sort the array in non-decreasing order.
2) Initialize two index variables to find the candidate 
   elements in the sorted array.
       (a) Initialize first to the leftmost index: l = 0
       (b) Initialize second  the rightmost index:  r = ar_size-1
3) Loop while l < r.
       (a) If (A[l] + A[r] == sum)  then return 1
       (b) Else if( A[l] + A[r] <  sum )  then l++
       (c) Else r--    
4) No candidates in whole array - return 0

*/

void quickSort(int *, int, int);

bool hasArrayTwoCandidates(int A[], int arr_size, int sum) {
	int l, r;

	quickSort(A, 0, arr_size-1);

	l = 0;
	r = arr_size -1;

	while (l < r) {
		if (A[l] + A[r] == sum) {
			return 1;
		}	else if (A[l] + A[r] <sum) {
			l++;
		}	else {
			r--;
		}
	}

	return 0;
}