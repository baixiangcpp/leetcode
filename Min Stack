class MinStack {
private:
    stack<int> sk;
    stack<int> min_sk;
public:
    void push(int x) {
        sk.push(x);
        if(min_sk.empty() || min_sk.top() >= x)
            min_sk.push(x);
    }

    void pop() {
        if(min_sk.top() == sk.top())
            min_sk.pop();
        sk.pop();
    }

    int top() {
        return sk.top();
    }

    int getMin() {
        return min_sk.top();
    }
};
