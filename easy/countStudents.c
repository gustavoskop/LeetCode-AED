int countStudents(int* students, int studentsSize, int* sandwiches,
                  int sandwichesSize) {
    int i, j = 0, count = studentsSize, flag = 0;

    while (flag == 0) {
        flag = 1;
        for (i = 0; i < studentsSize; i++) {
            if (j == sandwichesSize)
                break;
            if (students[i] == sandwiches[j]) {
                flag = 0;
                students[i] = 2;
                count--;
                j++;
            }
        }
    }
    return count;
}