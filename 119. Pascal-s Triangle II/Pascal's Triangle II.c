/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int i,j;
    int **result=(int **)malloc(sizeof(int*)*(rowIndex+1)); //杨辉三角的行数
    
    for(i=0;i<=rowIndex;i++)
    {
        *(result+i)=malloc(sizeof(int)*(i+1)); //该行元素的个数
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
                result[i][j]=1;
            else
                result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
    }
    *returnSize=rowIndex+1;
    return *(result+rowIndex);
}
