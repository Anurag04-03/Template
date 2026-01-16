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