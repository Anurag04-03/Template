//Stack

//Syntax:
//stack <type>var_name;
//{type->type of element that needs to stored inside stack}
//Stacks can store complicated types as well.
//Example: stack<pair<int,string>>st;

stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

 //Queue
 
 //Syntax:
//queue<type> var_name;
//{type->type of element that needs to stored inside queue}
//Queues can store complicated types as well.
//Example:
//queue<pair<int,string>>q;

queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

//Dequeue

//Syntax:
//deque<type> var_name;
//{type->type of element that needs to stored inside queue}
//Deques can store complicated types as well.
//Example:
//deque<pair<int,string>>d;

//Heap operational- Code

class Max_Heap {
    vector<int>heap;

    void heapify_down(int ind) {
        int n = heap.size();
        int left = 2 * ind + 1;
        int right = 2 * ind + 2;
        int largest = ind;
        int value = heap[ind];
        if (left < n && heap[left] > value) {
            value = heap[left];
            largest = left;
        }
        if (right < n && heap[right] > value) {
            value = heap[right];
            largest = right;
        }
        if (largest == ind)return;
        swap(heap[ind], heap[largest]);
        heapify_down(largest);
    }

    void heapify_up(int ind) {
        if (ind == 0)return;
        int parent = (ind - 1) / 2;
        if (heap[ind] > heap[parent]) {
            swap(heap[ind], heap[parent]);
            heapify_up(parent);
        }
    }

public:

    Max_Heap(vector<int>arr) {
        heap = arr;
    }

    void build() {
        int n = heap.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify_down(i);
        }
    }

    int get_max() {
        if (heap.size() == 0) {
            return -1;
        }
        else {
            return heap[0];
        }
    }

    void insert(int val){
        heap.push_back(val);
        heapify_up(heap.size()-1);
    }

    void remove(){
        int n = heap.size();
        swap(heap[0],heap[n-1]);
        heap.pop_back();
        if(heap.size()==0)return;
        heapify_down(0);
    }

};

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Max_Heap pq(arr);
    pq.build();
    cout<<pq.get_max()<<endl;
    pq.remove();
    cout<<pq.get_max()<<endl;
    pq.insert(40);
    cout<<pq.get_max()<<endl;

}

// Balanced Parenthesis
// C++ program to check if parentheses are balanced

#include <bits/stdc++.h>
using namespace std;

bool isBalanced(const string& s) {
  
    // Declare a stack to store the opening brackets
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        
        // Check if the character is an opening bracket
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]); 
        } 
      
        else {

            // If it's a closing bracket, check if the stack is non-empty
            // and if the top of the stack is a matching opening bracket
            if (!st.empty() && 
                ((st.top() == '(' && s[i] == ')') ||
                 (st.top() == '{' && s[i] == '}') ||
                 (st.top() == '[' && s[i] == ']'))) {

                // Pop the matching opening bracket
                st.pop(); 
            }
            else {
                
                // Unmatched closing bracket
                return false; 
            }
        }
    }
    
    // If stack is empty, return true (balanced), otherwise false
    return st.empty();
}

int main() {  
    string s = "{([])}";
    if (isBalanced(s))
        cout << "true";
    else
        cout << "false";
    return 0;
}

//Next Greater Element using Stack
// greater element for all array elements. 
#include <bits/stdc++.h> 
using namespace std; 

/* prints element and NGE pair for all 
elements of arr[] of size n */
void printNGE(int arr[], int n) 
{ 
	stack<int> s; 

	/* push the first element to stack */
	s.push(arr[0]); 

	// iterate for rest of the elements 
	for (int i = 1; i < n; i++) 
	{ 

		if (s.empty()) { 
			s.push(arr[i]); 
			continue; 
		} 

		/* if stack is not empty, then 
		pop an element from stack. 
		If the popped element is smaller 
		than next, then 
		a) print the pair 
		b) keep popping while elements are 
		smaller and stack is not empty */
		while (s.empty() == false
			&& s.top() < arr[i]) 
		{ 
			cout << s.top() 
				<< " --> " << arr[i] << endl; 
			s.pop(); 
		} 

		/* push next to stack so that we can find 
		next greater for it */
		s.push(arr[i]); 
	} 

	/* After iterating over the loop, the remaining 
	elements in stack do not have the next greater 
	element, so print -1 for them */
	while (s.empty() == false) { 
		cout << s.top() << " --> " << -1 << endl; 
		s.pop(); 
	} 
} 

/* Driver code */
int main() 
{ 
	int arr[] = { 11, 13, 21, 3 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	printNGE(arr, n); 
	return 0; 
}

// Priority Queue 
//Max queue & Min queue

Max Priority Queue :
 priority_queue <type>pq;
{type->Type of element stored inside priority queue}

Min Priority Queue :
priority_queue<type,vector<type>,greater<type>>pq;
{type->type Type of element stored inside priority queue}

//User Defined Priority - Sample Code

// Custom comparator struct (Min Heap based on second value)
struct CustomCompare {
bool operator()(pair<int, int> a, pair<int, int> b) {
return a.second > b.second;// Lower second value = Higher priority
}
};
int main() {
priority_queue<pair<int,int>,vector<int,int>>,CustomCompare> pq;

pq.push({1,5});
pq.push({2,3});
pq.push({3,8});

while(!pq.empty()){
    cout << pq.top().first << " "; //Output:2 1 3 (sorted by second value)
    pq.pop();
}
}

// Implementation of Priority Queue

priority_queue<int>pq;
    pq.push(3);
    pq.push(9);
    pq.push(1);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"priority_queue is empty"<<endl;
    }
    else{
        cout<<"priority_queue is not empty"<<endl;
    }

struct custom_compare{
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        //on the basis of first value -->min priority queue
        //on the basis of second value  -->max priority queue
        if(a.first==b.first){
            return (a.second < b.second);
        }
        return (a.first > b.first);
    }
};
int solve()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,custom_compare>pq;
    pq.push({3,2});
    pq.push({3,4});
    pq.push({2,1});
    pq.push({6,3});
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
    pq.pop();
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
}
