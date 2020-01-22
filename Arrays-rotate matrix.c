/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void rotate(int** A, int n11, int n12) {
    int i=0,j=0;
   while(i<n11/2)
    { 
        j=i;
        while(j<n11-i-1)
        { 
            int temp = A[i][j]; 
            A[i][j] = A[n11 - 1 - j][i]; 
            A[n11 - 1 - j][i] = A[n11 - 1 - i][n11 - 1 - j]; 
            A[n11 - 1 - i][n11 - 1 - j] = A[j][n11 - 1 - i]; 
            A[j][n11 - 1 - i] = temp; 
            j++;
        } 
        i++;
    } 
}
