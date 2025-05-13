int numJewelsInStones(char* jewels, char* stones) {
    int count = 0, j, i;

    for(i = 0;i < jewels[i] != '\0'; i++)
        for(j = 0; j < stones[j] != '\0'; j++){
            if(stones[j] == jewels[i])
            count += 1;
        }

        return count;

}