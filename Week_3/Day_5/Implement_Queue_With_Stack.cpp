class MyQueue {
public:
        stack<int> s1;//stack 1 is used as main stack
        stack<int> s2;  //stack 2 is helper stack and is used for pop and peek operations
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);  //insertion on queue and stack is similar so we push element simply onto the stack
    }
    
    int pop() {
        while(s1.empty()!=1){  /*To pop an element from queue means we have to remove first element */
            s2.push(s1.top());/*to implement this we use 2 stack we push topmost element from 1st stack to 2nd and pop the first stack*/
            s1.pop();//the top most element of 2nd stack will be the first element of stack 1 that is front of queue 
        }
        int front=s2.top();//we will store the first element and pop the element from 2nd stack
        s2.pop();
        while(s2.empty()!=1){ //now we redo the process and push all elements of 2nd stack to first
            s1.push(s2.top());
            s2.pop();
        }
        return front; //we return the deleted element
        
    }
    
    int peek() { //using the same logic that we used for pop operation
         while(s1.empty()!=1){// using 2 stacks to implement a queue and returning the first element of queue
            s2.push(s1.top());
            s1.pop();
        }
        int front=s2.top();
        while(s2.empty()!=1){
            s1.push(s2.top());
            s2.pop();
        }
        return front;
    }
    
    bool empty() {
        return s1.empty();  //if the main  stack is empty means the queue is empty and returns the value accordingly
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */