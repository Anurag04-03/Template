
//Array declaration and init

int[] arr = new int[5]; //declaration of an array of size 5
Int[] arr2 = { 1 ,2 ,3, 4, 5}; // Initialization with values


//Sliding window(For Subarray & Contiguous Elements)

//Used for problem that involve subarray of a fixed/Variable size.

//Use Case: Maximum sum subarray of size k.

int sum = 0;
for(int i = 0; i < k; i++) sum += arr[i]; //First window
for(int i = k; i < arr.length; i++){
    sum += arr[i] - arr[i-k]; // Slide window
}

// Two pointer Approach (for Sorted arrays)

//Used to avoid extra loops for finding pairs or subarrays.
int left = 0 , right = arr.length - 1;
while (left < right) {
    int sum = arr[left] + arr[right];
if (sum == target) return new int[]{left,right};
else if (sum < target) left++;
else right--;
}
//Use Case: Finding a pair with a given sum.


// Kadane's Algorithm (For Maximum Sum Subarray)
int maxSum = Integer.MIN_VALUE, currSum = 0;
for(int num : arr ){
currSum = Math.max(num, currSum + num);
maxSum = Math. max(maxSum, currSum) ;
}
//Use Case: Maximum sum contiguous subarray.

//Prefix Sum (For Range Sum Queries in 0(1))
int[] prefixSum = new int[arr. length + 1];
for (int i = 1; i<= arr. length; i++) prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
//Use Case: Fast computation of subarray sums.


//Hashing for Frequency Count (Use Case: Counting occurrences of numbers.)
    Map<Integer , Integer> freq  = new HashMap<>();
    for (int num : arr) freq.put(num, freq.getOrDefault(num, 0) + 1);