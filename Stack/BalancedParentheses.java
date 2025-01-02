import java.util.Stack;

public class BalancedParentheses {
    // Function to check if two characters are matching pairs
    private static boolean matching(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

    // Function to check if the string has balanced parentheses
    public static boolean isBalanced(String str) {
        Stack<Character> stack = new Stack<>();

        for (char x : str.toCharArray()) {
            // Push opening brackets onto the stack
            if (x == '(' || x == '{' || x == '[') {
                stack.push(x);
            } else {
                // If stack is empty or no match for the closing bracket, return false
                if (stack.isEmpty() || !matching(stack.peek(), x)) {
                    return false;
                }
                stack.pop(); // Pop the matching opening bracket
            }
        }

        // If stack is empty, the string is balanced
        return stack.isEmpty();
    }

    // Example usage
    public static void main(String[] args) {
        String test = "{[()]}";
        if (isBalanced(test)) {
            System.out.println("Balanced");
        } else {
            System.out.println("Not Balanced");
        }
    }
}
