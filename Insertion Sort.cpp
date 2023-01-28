/*
This algorithm sorts an array of items by repeatedly taking an element from the unsorted portion of the array and 
inserting it into its correct position in the sorted portion of the array.

To sort an array of size N in ascending order: 
-Iterate from arr[1] to arr[N] over the array. 
-Compare the current element (key) to its predecessor. 
-If the key element is smaller than its predecessor, compare it to the elements before. 
  Move the greater elements one position up to make space for the swapped element.

*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
	
	int key;
	
	for(int i=1; i<n; i++){
		
		key = arr[i];
		
		int j = i-1;
		// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		while (j >= 0 && arr[j] > key){
			
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

// A utility function to print an array of size n
void printArray(int arr[], int n){
	
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "unSorted array: \n";
	printArray(arr, N);
	
	insertionSort(arr, N);
	
	cout << "Sorted array: \n";
	printArray(arr, N);

return 0;
}
