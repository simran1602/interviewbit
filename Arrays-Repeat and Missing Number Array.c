/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* repeatedNumber(const int* A, int n1, int *len1) {
    int *res=(int *)malloc(2*sizeof(int));
    int repeated=0,total=0;
    int i=0,j=0,flag=0;
    total=((n1+1)*(n1+2))/2;
    while(i<n1-1)
    {
        j=i+1;
        while(j<n1 && flag!=1)
        {
            if(A[i]==A[j])
            {
                repeated=A[i];
                flag=1;
                break;
            }
            j++;
        }
        total-=A[i];
    }
    total-=A[n1-1];
    if(flag==1)
    total+=repeated;
    res[0]=repeated;
    res[1]=total;
    *len1=2;
    return res;
}
