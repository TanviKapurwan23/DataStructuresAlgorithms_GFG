int add (int n){
    if (n <= 0){
        return 0;
    }
    return n + add (n-1);
}

/*Here each call add a level to the stack :

1.  add(4)
2.    -> add(3)
3.      -> add(2)
4.        -> add(1)
5.          -> add(0)

Each of these calls is added to call stack and takes up actual memory.
So it takes O(n) space.
However, just because you have n calls total doesn't mean it takes O(n) space.

Look at the below function :
*/
int addSequence (int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += pairSum(i, i+1);
    }
    return sum;
}

int pairSum(int x, int y){
    return x + y;
}
/*
There will be roughly O(n) calls to pairSum. However, those 
calls do not exist simultaneously on the call stack,
so you only need O(1) space. */
