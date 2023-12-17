class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
                break;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    int peek()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    bool empty()
    {
        return st.empty();
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