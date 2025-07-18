#define min(a, b) ((a) < (b) ? (a) : (b))

int maxArea(int* height, int heightSize) {
    int max = 0, temp = 0, i = 0, j = heightSize - 1;

    while (i != j) {
        temp = (j - i) * min(height[i], height[j]);
        if (temp > max)
            max = temp;
        if (height[i] < height[j])
            i++;
        else
            j--;
    }
    return max;
}