/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxArr(int* A, int n1) {
    int min1=INT_MIN,min2=INT_MIN,max1=INT_MAX,max2=INT_MAX;
    int i=1,d1=0,d2=0;
    for(i=0;i<n1;i++)
    {
        if(max1<(A[i]+i))
        max1=A[i]+i;
        if(min1>(A[i]+i))
        min1=A[i]+i;
        if(max2<(A[i]-i))
        max2=A[i]-i;
        if(min2>(A[i]-i))
        min2=A[i]-i;
    }
     d1=max1-min1;
        d2=max2-min2;
        if(d1>d2)
        return d1;
        else
        return d2;
}
