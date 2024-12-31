class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class MyStack {
    private Node head;
    private int size;

    // Constructor
    public MyStack() {
        head = null;
        size = 0;
    }

    // Push operation: Add an element to the stack
    public void push(int x) {
        Node newNode = new Node(x);
        newNode.next = head;
        head = newNode;
        size++;
    }

    // Pop operation: Remove and return the top element of the stack
    public int pop() {
        if (head == null) {
            return Integer.MAX_VALUE; // Stack underflow, return Integer.MAX_VALUE
        }
        int res = head.data;
        head = head.next;
        size--;
        return res;
    }

    // Peek operation: Return the top element of the stack without removing it
    public int peek() {
        if (head == null) {
            return Integer.MAX_VALUE; // Stack is empty, return Integer.MAX_VALUE
        }
        return head.data;
    }

    // Check if the stack is empty
    public boolean isEmpty() {
        return head == null;
    }

    // Get the size of the stack
    public int size() {
        return size;
    }
}

public class LinkedListStack {
    public static void main(String[] args) {
        MyStack stack = new MyStack();

        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println("Top element: " + stack.peek()); // Should print 30
        System.out.println("Stack size: " + stack.size()); // Should print 3

        System.out.println("Popped: " + stack.pop()); // Should print 30
        System.out.println("Top element after pop: " + stack.peek()); // Should print 20

        System.out.println("Stack size after pop: " + stack.size()); // Should print 2
        System.out.println("Is stack empty? " + stack.isEmpty()); // Should print false

        // Testing when the stack is empty
        System.out.println("Pop on empty stack: " + stack.pop()); // Should print Integer.MAX_VALUE
        System.out.println("Peek on empty stack: " + stack.peek()); // Should print Integer.MAX_VALUE
    }
}
