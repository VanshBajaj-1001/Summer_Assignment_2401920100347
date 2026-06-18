class MinStack {
public:
       stack<int> st;  /*In this problem we use 2 stack to solve the question*/
       stack<int> minimum;// stack dt to store all elememts   and stack minimum to store the minimum element after each push
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value); //we pusgh element into main stack
        if(minimum.empty()){  //if minimum stack is empty then current element is minimum
            minimum.push(value);
        }
        else{
            minimum.push(min(value,minimum.top()));  //else we check which is minimum value or current top and store the result at top of stack
        }
    }
    
    void pop() { 
        st.pop(); //pop element in both stack
        minimum.pop();
    }
    
    int top() {
        return st.top(); // to return the top element we return top element of main stack
    }
    
    int getMin() {
        return minimum.top();// to return the minimum we return the top of minimum stack
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */