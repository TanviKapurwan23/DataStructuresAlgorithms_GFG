class myStack {
    private int arr[]; // Stack array
    private int cap;   // Maximum capacity
    private int top;   // Index of the top element

    // Constructor to initialize the stack
    public myStack(int c) {
        top = -1;
        cap = c;
        arr = new int[cap];
    }

    // Push method to add an element to the stack
    public void push(int x) {
        if (top == cap - 1) { // Check for overflow
            System.out.println("Stack Overflow");
            return;
        }
        top++;
        arr[top] = x;
    }

    // Pop method to remove and return the top element
    public int pop() {
        if (isEmpty()) { // Check for underflow
            System.out.println("Stack Underflow");
            return -1; // Return a sentinel value for an empty stack
        }
        int res = arr[top];
        top--;
        return res;
    }

    // Method to return the size of the stack
    public int size() {
        return top + 1;
    }

    // Method to check if the stack is empty
    public boolean isEmpty() {
        return (top == -1);
    }
}

class Test {
    public static void main(String[] args) {
        myStack s = new myStack(5); // Initialize a stack of size 5
        s.push(10); // Push elements
        s.push(20);
        System.out.println(s.pop()); // Pop and print the top element (20)
        s.push(30); // Push another element
        System.out.println("Stack size: " + s.size()); // Print stack size
    }
}


// O(1)