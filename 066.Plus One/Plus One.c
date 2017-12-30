/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int n=digitsSize-1;
    
    while(n+1)
    {
        if(digits[n]<9)
        {
            digits[n]++;
            * returnSize=digitsSize;
            return digits;
        }
        else
        {
            digits[n]=0;
            n--;
        }
    }
    int *newdigit=(int *)malloc(sizeof(int)*(digitsSize+1));
    newdigit[0]=1;
    for(int i=1;i<digitsSize+1;i++)
        newdigit[i]=digits[i-1];
    * returnSize=digitsSize+1;
    return newdigit;
}
