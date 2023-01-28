/*
Selection Sort Algorithm

The algorithm maintains two subarrays in a given array.
1-The subarray which already sorted. 
2-The remaining subarray was unsorted.
In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked 
and moved to the beginning of unsorted subarray. 
After every iteration sorted subarray size increase by one and unsorted subarray size decrease by one.
After N (size of array) iteration we will get sorted array.

Follow the below steps to solve the problem:
-Initialize minimum value(min_idx) to location 0.
-Traverse the array to find the minimum element in the array.
-While traversing if any element smaller than min_idx is found then swap both the values.
-Then, increment min_idx to point to the next element.
-Repeat until the array is sorted.

*/

#include <bits/stdc++.h>
using namespace std;

//Swap function, two pointers, x and y
void swap(int *xp, int *yp){
	
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n){

	// One by one move boundary of unsorted subarray
	for (int i=0 ; i<n-1; i++){
	
		// Find the minimum element in unsorted array
		int min_idx = i;
		for (int j=i+1; j<n; j++){
			
			if (arr[j] < arr[min_idx]){
				min_idx = j;
			}	
		}

		// Swap the found minimum element with the first element
		if(min_idx != i){
			swap(&arr[min_idx], &arr[i]);
		}
	}
}

//Function to print an array
void printArray(int arr[], int size){
	
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";

	}
	cout << endl;
}

int main(){
	
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "UnSorted array: \n";
	printArray(arr, n);
		
	selectionSort(arr, n);
	cout <<endl<< "Sorted array: \n";
	printArray(arr, n);

return 0;
}
