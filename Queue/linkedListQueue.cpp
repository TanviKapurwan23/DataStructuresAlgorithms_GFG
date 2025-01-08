 struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
 };

 struct Queue{
    Node * front, *rear;
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enque(){
        Node * temp = new Node(x);;
        if(front == nullptr){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deque(){
        if(front == nullptr){
            return;}
        front *temp = front;
        front = front->next;
        if(front == nullptr){
            rear = nullptr;
        }
        delete(temp);
    }
 };