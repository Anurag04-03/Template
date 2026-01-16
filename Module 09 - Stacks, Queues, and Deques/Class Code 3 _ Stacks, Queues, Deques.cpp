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