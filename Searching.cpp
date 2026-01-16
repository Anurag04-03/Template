//Linear Search

// Function to perform linear search
int linearSearch(const vector<int>& array, int target) {
for (int i =0; i < array. size(); i++) {
// Check if the current element matches the target
if (array [i]== target) {
return i; // Return the index if found
}
}
return -1;  // Return -1 if not found
}

//Binary Search

// Function to perform binary search
int binarySearch(const vector<int>& array, int target) {
int low = 0, high = array. size() -1;
while ( low <= high) {
int mid = low + (high - low)/2;  // Prevent overflow
if (array [mid]==target) {
return mid; // Target found
else if (array [mid] < target) {
low = mid + 1; // Search in the right half
}else {
high = mid - 1; // Search in the left half
}
}
return —1; // Target not found
}

//Lower Bound

// Function to find the first occurrence
int lowerBound(const vector<int>& array, int target){
int low = 0, high = array.size() - 1, result = -1;
while (low <= high) {
int mid = low + (high - low) / 2;
if (array [mid]==target) {
result = mid;// Potential first occurrence
high = mid - 1; // Narrow search to the left side
}else if (array [mid] < target) {
low= mid + 1; // Move to the right half
}else {
    high = mid - 1; // Move to the left half
}
}
return result;
}

//Upper Bound 

// Function to find the last occurrence (upper bound -1) of the target
int upperBound(const vector <int>& array, int target) {
int low = 0, high = array. size() — 1, result = —1;
while (low <= high) {
int mid = low + (high — low) / 2;
if (array [mid]==target) {
result = mid; // Potential last occurrence
low = mid + 1; // Narrow search to the right side
} else if (array [mid] < target) {
low= mid + 1; // Move to the right half
}else {
high = mid — 1; // Move to the left half
}
}
return result;
}

//Code

// Function to count occurrences of the target
int countOccurrences(const vector<int>& array, int target) {
int first = lowerBound(array, target);

if (first == -1) {
return O; // Target not found
}
int last = upperBound(array, target);

return (last — first + 1); // Total occurrences
}

