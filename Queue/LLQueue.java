class LLQueue {
    private Node front, rear;
    private int currentSize;

    private class Node {
        int data;
        Node next;
    }

    public LLQueue() {
        front = null;
        rear = null;
        currentSize = 0;
    }

    public boolean isEmpty() {
        return (currentSize == 0);
    }

    public int size() {
        return currentSize;
    }

    public void enqueue(int data) {
        Node oldRear = rear;
        rear = new Node();
        rear.data = data;
        rear.next = null;
        if (isEmpty()) {
            front = rear;
        } else {
            oldRear.next = rear;
        }
        currentSize++;
    }

    public int dequeue() {
        if (isEmpty()) {
            throw new RuntimeException("Queue is empty");
        }
        int data = front.data;
        front = front.next;
        currentSize--;
        if (isEmpty()) {
            rear = null;
        }
        return data;
    }

    public static void main(String[] args) {
        LLQueue queue = new LLQueue();
        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);
        System.out.println("Dequeued: " + queue.dequeue());
        System.out.println("Dequeued: " + queue.dequeue());
        System.out.println("Queue size: " + queue.size());
    }
}