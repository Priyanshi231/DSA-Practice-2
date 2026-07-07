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
        if(idx == -1){
            return -1;
        } 
        int t = arr[idx];
        idx --;
        return t;
    }
    
    int top() {
        if(idx == -1){
            return -1;
        } 
        return arr[idx];
    }
    
    bool isEmpty() {
        return idx == -1;
    }
};
