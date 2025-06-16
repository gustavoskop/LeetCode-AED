/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int i, j;

    for (i = 0; i < pricesSize; i++){
        for(j = i + 1; j < pricesSize; j++){
            if(prices[i] >= prices[j]){
                prices[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    *returnSize = pricesSize;
    return prices;
}