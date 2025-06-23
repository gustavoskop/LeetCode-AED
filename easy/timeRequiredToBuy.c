int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int queue[ticketsSize];
    int first = 0, last = ticketsSize - 1;
    int count = 0;
    int* val = &tickets[k];

    while (*val > 0) {
        tickets[0] -= 1;
        int temp = tickets[0];
        for (int i = 0; i < ticketsSize - 1; i++)
            tickets[i] = tickets[i + 1];

        if (temp == 0) {
            if (val == tickets) {
                count++;
                break;
            }
            ticketsSize--;
            last--;
        } else
            tickets[last] = temp;

        if (val == tickets)
            val = &tickets[last];
        else
            *val--;
        count++;
    }
    return count;
}