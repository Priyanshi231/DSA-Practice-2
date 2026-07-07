class ArrayStack {
public:

    int arr[1000];
    int idx;

    ArrayStack() {
        idx = -1;
    }
    
    void push(int x) {
        idx++;
        arr[idx] = x;
    }
    
    int pop() {
        int t = arr[idx];
        idx --;
        return t;
    }
    
    int top() {
        return arr[idx];
    }
    
    bool isEmpty() {
        if(idx == -1){
            return true;
        }return false;
    }
};
