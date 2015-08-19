class Queue {
private:
	stack<int> lhs;
	stack<int> rhs;
public:
	// Push element x to the back of queue.
	void push(int x) {
		rhs.push(x);
	}

	// Removes the element from in front of queue.
	void pop(void) {
		if (!lhs.empty())
		{
			 lhs.pop();
		}
		else
		{
			while (!rhs.empty())
			{
				lhs.push(rhs.top());
				rhs.pop();
			}
			lhs.pop();
		}
	}

	// Get the front element.
	int peek(void) {
		if (!lhs.empty())
		{
			return lhs.top();
		}
		else 
		{
			while (!rhs.empty())
			{
				lhs.push(rhs.top());
				rhs.pop();
			}
			return lhs.top();
		}
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return lhs.empty() && rhs.empty();
	}
};