int climbStairs(int n) {
    int i = 0, j = 1, m = 0, temp = 0;

    for (i = 0; i < n; i++) {
        temp = j;
        j += m;
        m = temp;
    }
    return j;
}