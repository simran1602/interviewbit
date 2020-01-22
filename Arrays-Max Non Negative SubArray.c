/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* maxset(int* A, int n1, int *len1) {
        int temp=0,start=0,end=0,i=0,count=0,c=0;
        long long int m1=0,m2=0;
        for(i=0;i<n1;i++)
        {
            if(A[i]<0)
            {
                m1=0;
                temp=i+1;
                //printf("%d\n",temp);
                count=0;
            }
            else
            {
                count++;
                m1=m1+A[i];
                if(m2<m1||(m2==m1&&c<count))
                {
                    c=count;
                    m2=m1;
                    end=i;
                    if(start!=temp)
                    {
                        start=temp;
                    }
                   // printf("%d %d\n",start,end);
                }
            }
        }
        int *a=(int*)malloc((end-start+1)*sizeof(int));
        if(m2==0&&c==0)
        {
            *len1=NULL;
            return a;
        }
        *len1=(end-start+1);
        m2=0;
        for(i=start;i<=end;i++)
        {
            a[m2]=A[i];
            m2++;
        }
        return a;
}
