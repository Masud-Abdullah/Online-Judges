class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int>newQ;
        int last_element;
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            if(q.empty())
            {
                last_element = val;
                break;
            }
            newQ.push(val);
        }
        q = newQ;
        return last_element;
    }
    
    int top() {
        queue<int>newQ;
        int last_element;
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            if(q.empty())
            {
                last_element = val;
            }
            newQ.push(val);
        }
        q = newQ;
        return last_element;
    }
    
    bool empty() {
        if(q.empty())return true;
        else return false;   
    }
    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */