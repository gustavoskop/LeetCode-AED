// https://leetcode.com/problems/plus-one/solutions/


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *returnDigits, i;

    if (digits[digitsSize - 1] < 9) {
        digits[digitsSize - 1] += 1;
        *returnSize = digitsSize;
        return digits;
    }

    else {
        returnDigits = (int*)malloc(sizeof(int) * (digitsSize + 1));
        if (digitsSize == 1 && digits[0] == 9) {
            returnDigits[1] = 0;
            returnDigits[0] = 1;
            *returnSize = 2;
            return returnDigits;
        }

        for (i = 0; i < digitsSize; i++)
            returnDigits[i] = digits[i];
        returnDigits[i--] = 0;

        while (i > 0 && returnDigits[i] == 9) {
            returnDigits[i] = 0;
            if (returnDigits[i - 1] < 9) {
                returnDigits[i - 1] += 1;
                *returnSize = digitsSize;
                return returnDigits;
            }
            i--;
        }
        if (i == 0 && returnDigits[i] == 9) {
            returnDigits[i + 1] = 0;
            returnDigits[i] = 1;
        }
    }

    *returnSize = digitsSize + 1;
    return returnDigits;
}
