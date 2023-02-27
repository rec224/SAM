int N;
int matrix_mult(int[][16], int[][16], int[][16]);
int SAM();
int matrix_mult(int **a, int **b, int **c){
    //function matrix_mult takes two full matrices and an empty matrix
    //the function stores the multiplication in the new matrix
    //return 0 if there is a successful multiplication
    return 0;
}
int SAM(){
    //pattern 0
    int patt[7] = {-6000, -300, -3, 0, 3, 300, 6000};
    //can add and then comment out patterns as we go
    //patt is used for preprocessing the sparsity pattern
    //compute the map (SAM) as M = As0
    int A[16][16];
    int B[16][16];
    int C[16][16];
    //N = size(A, 1)
    //here we are saying we want the size of dimension 1 in A
    int N = sizeof(A[0]);
    //DSR1 = spdiags(1./sqrt(diag(A), [0], N, N)
    //As = Dsr1*(A*Dsr1)
    
    int multSuccess = matrix_mult(A, B, C);
    return 0;
}
