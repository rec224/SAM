//working with top_opts matrix files with particular sizes (N16k to start)
//load the matrix in
//scaling and preconditioner will go here
//now we'll start converting the SAM into c++ code

//fix the sizing
int N=16;
int main(){
    //nonzeros in preconditioner
    int nz_count = 0;
    for (int k=1; k<N; k++){
        //looks like A_tmp should be a matrix NxN
        //getting submatrix produced by r[k] and s[k]
        //looks like getting the submatrix will be more difficult than it was in matlab
        A_tmp = A(r[k], s[k]);
        //least squares A_tmp * z = f
        int []f = least_squares(A_tmp, z);
    }
    // generate a sparse matrix from rows, colums, and the put the value 1 in the occupied position
    
    //how do I know what size to make the sparsity matrix? dimensions have to be constant
    int msk [nz_count][nz_count] = {rows,cols};
    for(int i=0; i<nz_count; i++){
        for(int j=0; j<nz_count; j++){
            //how do I know which values are supposed to be 1 and which are supposed to be 0
            x = 1; 
        }
    }
    return 0;
}

//this is so rough come back and write this
//need to look at the least squares calculations in matlab
int * least_squares(int ** A, int * f){
    return f;
}


