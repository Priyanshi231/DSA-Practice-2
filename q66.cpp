class ArrayQueue {
public:
    int arr[1000];
    int front;
    int rear;

    ArrayQueue() {
        front = 0;
        rear = -1;
    }
    
    void push(int x) {
        rear ++;
        arr[rear] = x;
    }
    
    int pop() {
        int el = arr[front];
        front++;
        return el;
    }
    
    int peek() {
        return arr[front];
    }
    
    bool isEmpty() {
        return front > rear;
    }
};
