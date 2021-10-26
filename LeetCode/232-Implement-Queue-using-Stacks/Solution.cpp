/** PROBLEM LINK: https://leetcode.com/problems/implement-queue-using-stacks/
*/


class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty() == true)
        {
          //copy s1 into s2
            while(s1.size() != 0 )
            {
                s2.push(s1.top()) ;
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        if(s2.empty())
        {
          //copy s1 into s2
            while(s1.size() )
            {
                s2.push(s1.top()) ;
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        if(s1.size() == 0 && s2.size() == 0)
        {
            return true;
        }
        else
            return false;
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
