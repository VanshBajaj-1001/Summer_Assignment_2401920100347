class RecentCounter {
public:
      queue<int> q; //queue to store requests
    RecentCounter() {
                                  //constructor that initializes the counter with zero requests
    }
    
    int ping(int t) {
        q.push(t);  //we store requests in a queue 
        while(q.empty()!=1 && q.front()<t-3000 ){ //if the queue is not empty and the request is not in last 3000ms it is removed from queue
            q.pop();
        }
        return q.size(); //we return the number of requests in the queue
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */