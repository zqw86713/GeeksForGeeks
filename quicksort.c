/*  QuickSort 
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

Always pick first element as pivot.
Always pick last element as pivot (implemented below)
Pick a random element as pivot.
Pick median as pivot.

The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
*/

//  int partition_r(int arr[], int low, int high) ;
int partition(int arr[], int low, int high) ;
void swap(int* a, int* b) ;


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}


void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  


/*
int partition_r(int arr[], int low, int high)  {
    srand(time(NULL));
    int ramdom = low + rand() % (high - low);

    swap(&arr[random], &arr[high]);

    return partition(arr, low, high);
}
*/


/* This function takes last element as pivot, places 
  the pivot element at its correct position in sorted 
  array, and places all smaller (smaller than pivot) 
  to left of pivot and all greater elements to right 
  of pivot */

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low -1);

    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}