class LinkedListStack {
public:

    class Node {
        public:
            int data;
            Node * next;
            Node(int val){
                data = val;
                next = NULL;
            }
    };

    Node* head;
    LinkedListStack() {
        head = NULL;
    }
    
    void push(int x) {
        Node * newNode = new Node(x);
        newNode->next = head;
        head = newNode;  
    }
    
    int pop() {
        Node * temp = head;
        int d = temp->data;

        head = head->next;
        delete temp;
        return d;
    }
    
    int top() {
        return head-> data;
    }
    
    bool isEmpty() {
        return head == NULL;
    }
};
