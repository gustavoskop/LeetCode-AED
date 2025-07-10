void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* ans = (int*)malloc(sizeof(int) * nums1Size);
    int p1 = 0, p2 = 0;

    for (int i = 0; i < nums1Size; i++) {
        if (m > 0 && (n == 0 || nums1[p1] < nums2[p2])) {
            ans[i] = nums1[p1];
            p1++;
            m--;
        } else {
            ans[i] = nums2[p2];
            p2++;
            n--;
        }
    }

    for (int i = 0; i < nums1Size; i++)
        nums1[i] = ans[i];
}