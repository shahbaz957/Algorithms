function merge(A: number[], m: number, B: number[], n: number): void {
    let idx: number = m+n-1;
    let i: number = m-1;
    let j : number = n-1;
    while (j >= 0 && i >=0){
        if (A[i] > B[j]){
            A[idx] = A[i]
            i--
            idx--;
        }else{
            A[idx] = B[j];
            j--;
            idx--;
        }
    }
    if (i < 0){
        while (j >= 0 ){
            A[idx] = B[j];
            idx--;
            j--;
        }
    }
};