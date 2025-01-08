import java.util.ArrayDeque;
import java.util.Deque;

public class LLQueue {
    public static void main(String[] args) {
        Deque<Integer> queue = new ArrayDeque<>();

        // Adding elements to the queue using offer
        queue.offer(1);
        queue.offer(2);
        queue.offer(3);

        // Removing elements from the queue
        System.out.println("Removed: " + queue.remove()); // Output: Removed: 1
        System.out.println("Removed: " + queue.remove()); // Output: Removed: 2

        // Peeking the first element
        System.out.println("Peek: " + queue.peek()); // Output: Peek: 3

        // Checking if the queue is empty
        System.out.println("Is queue empty? " + queue.isEmpty()); // Output: Is queue empty? false

        // Removing the last element
        System.out.println("Removed: " + queue.remove()); // Output: Removed: 3
        System.out.println("Is queue empty? " + queue.isEmpty()); // Output: Is queue empty? true
    }
}
// Polling the first element (returns null if the queue is empty)
System.out.println("Polled: " + queue.poll()); // Output: Polled: null

// Adding elements to the queue again
queue.offer(4);
queue.offer(5);

// Peeking the first element
System.out.println("Peek: " + queue.peek()); // Output: Peek: 4

// Polling the first element
System.out.println("Polled: " + queue.poll()); // Output: Polled: 4
System.out.println("Peek: " + queue.peek()); // Output: Peek: 5
