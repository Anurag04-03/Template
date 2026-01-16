//Bubble Sort

void bubbleSort(int arr[], int n) {
for (int i = 0; i < n - 1; i++){
bool swapped = false; // Optimization to break if already sorted
for (int j = 0; j < n - 1; j++){
if (arr[j] > arr[j + 1]){
swap(arr[j],arr[j+1]);
swapped = true;
}
}
if ( ! swapped) break;// Exit early if no swaps
}
}

//Selection Sort

void selectionSort(vector<int>& arr) {
int n = arr.size();
for (int i = 0; i < n - 1; ++i){
int minIndex = i; // Assume the first unsorted element is the smallest

// Find the smallest element in the unsorted p
for(int j = i + 1; j < n; ++j){
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
//swap the found minimum element with the first unsorted element
if (minIndex != i) {
swap (arr[i], arr[minIndex]);
}
}
}

// Inbuilt Sorting in c++

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int arr[] = {5, 3, 8, 6, 2, 7, 4, 1};
int n = sizeof(arr) / sizeof(arr[0]);// Find array size
sort(arr, arr + n);// Sort in ascending order
cout <<"sorted array: ";
for (int i = 0; i < n; i++)
cout arr[i] << " ";
cout << endl;
return 0;
}


//Insertion Sort

void insertionSort(vector<int>& arr) {
int n = arr.size();
for (int i = 1; i < n; ++i) {
int key = arr[i]; // Current element to be inserted
int j = i - 1;
// Shift element Of the sorted portion to the right
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
--j;
}
// Insert the key element into the correct position
arr[j + 1]  = key;
}
}

//Counting Sort

void countingSort(vector<int>& arr, int maxValue) {
// Create and initialize the count array
vector<int> count(maxValue + 1, 0);
// Count the occurrences of each element
for (int num : arr){
count [num]++;
}
// Overwrite the input array with sorted values
int index = 0;
for (int i = 0; i maxValue; ++i) {
while (count ([i] > 0) {
arr[index++] = i;
count [i]--;
}
}
}