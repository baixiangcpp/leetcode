class Stack {
private:
	queue<int> q[2];
public:
	// Push element x onto stack.
	void push(int x) {
		q[0].push(x);
		while(!q[1].empty())
		{
			q[0].push(q[1].front());
			q[1].pop();
		}
		while(!q[0].empty())
		{
			q[1].push(q[0].front());
			q[0].pop();
		}
	}

	// Removes the element on top of the stack.
	void pop() {
		q[1].pop();
	}

	// Get the top element.
	int top() {
		return q[1].front();
	}

	// Return whether the stack is empty.
	bool empty() {
		return q[1].empty();
	}
};
