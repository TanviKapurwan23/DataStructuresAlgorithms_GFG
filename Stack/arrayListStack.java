import java.util.ArrayList; // Import the ArrayList class

// Stack implementation using ArrayList
class myStack {
    ArrayList<Integer> al = new ArrayList<>();

    // Push method to add an element to the stack
    void push(int x) {
        al.add(x);
    }

    // Pop method to remove and return the top element
    int pop() {
        if (isEmpty()) {
            System.out.println("Stack Underflow");
            return -1; // Sentinel value for an empty stack
        }
        int res = al.get(al.size() - 1);
        al.remove(al.size() - 1);
        return res;
    }

    // Peek method to return the top element without removing it
    int peek() {
        if (isEmpty()) {
            System.out.println("Stack is Empty");
            return -1; // Sentinel value for an empty stack
        }
        return al.get(al.size() - 1);
    }

    // Method to check if the stack is empty
    boolean isEmpty() {
        return al.isEmpty();
    }

    // Method to get the size of the stack
    int size() {
        return al.size();
    }
}

// Test class to demonstrate the stack
public class arrayListStack {
    public static void main(String[] args) {
        myStack stack = new myStack();

        // Push elements to the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // Peek the top element
        System.out.println("Top element: " + stack.peek()); // Output: 30

        // Pop elements from the stack
        System.out.println("Popped element: " + stack.pop()); // Output: 30
        System.out.println("Popped element: " + stack.pop()); // Output: 20

        // Check if the stack is empty
        System.out.println("Is stack empty? " + stack.isEmpty()); // Output: false

        // Pop the last element
        System.out.println("Popped element: " + stack.pop()); // Output: 10

        // Try popping from an empty stack
        System.out.println("Popped element: " + stack.pop()); // Output: Stack Underflow
                                                              //          -1
    }
}



// O(1)