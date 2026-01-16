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