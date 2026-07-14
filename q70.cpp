class LinkedListQueue {
public:
    class Node{
        public:

        int data;
        Node * next;

        Node (int val){
            data = val;
            next = NULL;
        }
    };

    Node * head;
    Node * tail;

    LinkedListQueue() {
        head = NULL;
        tail = NULL;
    }
    
    void push(int x) {
        Node * nn = new Node(x);
        if(head == NULL){
            head = tail = nn; 
        }else{
           
            tail->next = nn;
            tail = nn;
        }
    }
    
    int pop() {
        Node * temp = head;
        int d = temp->data;

        head = head->next;

        if(head == NULL){
            tail = NULL;
        }
        
        delete temp;
        return d;
    }
    
    int peek() {
        return head->data;
    }
    
    bool isEmpty() {
        return head == NULL;
    }
};
