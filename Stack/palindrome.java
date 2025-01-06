boolean isPal(String str)
{
    StringBuilder rev = new StringBuilder(str);
    rev.reverse();
    return str.equals(rev.toString());
}

//O(N)

boolean isPal(String str) {
    int begin = 0;
    int end = str.length() - 1;

    while (begin < end) {
        if (str.charAt(begin) != str.charAt(end)) {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}


// efficient method O(N) AX: O(1)