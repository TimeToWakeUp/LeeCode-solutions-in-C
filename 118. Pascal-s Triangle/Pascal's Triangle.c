/**
 * Return an array of arrays.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes) {
    int i,j;
    int **result;
    * columnSizes=(int *)malloc(sizeof(int)*numRows);
    result=(int **)malloc(sizeof(int *)*numRows);
    
    for(i=0;i<numRows;i++)
    {
        *(*columnSizes+i)=i+1;
        *(result+i)=malloc(sizeof(int)*(i+1)); //每行元素的个数等于该行对应的行数
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
                result[i][j]=1;
            else
                result[i][j]=result[i-1][j-1]+result[i-1][j];
        }
    }
    return result;
}
