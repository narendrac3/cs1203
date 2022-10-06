/*Selection sort*/

void selectionSort(int *a, int n){
    int i, imax, t;

    for(i = n; i>1; i = i-1) {
        imax = findIndexOfMax(a, i);
        //t = a[imax]; a[imax] = a[n-1]; a[n-1] = t;
        swap(&a[imax], &a[i-1]); //swap( a+imax, a+i-1)
    
    }
}
//Important but Confusing!
void selectionSort2(int *a, int n){
    for(int * current = a + n -1; current!=a; current = current -1) {
        swap( findAddressOfMax(a,current), current); //swap( a+imax, a+i-1)
    }
}


/*===========================================*/

void insertionSort(){
    //2 lists
}


/*=========================================== */

int findIndexOfMax(int *a, int n){
    int imax; //This will contain the address of the largest element encountered
    int i;
    //error case if there are no elements in the list
    if(n < 1) {
        return -1;
    }

    imax = 0; // I am assuming a[0] is the max elememt
    for(i=1; i<n, i++) {
        if (a[i] > a[imax]){
            imax = i;
        }
    }

    return imax;

}

int main(int argc, char **argv){
    int *a;
    int n = 10;
    int maxIndex;
    int p, q;
    NodeAddress list;

    srand(time(NULL));

    a = generateArray(n)
    list = linkedListfromArray
    



    p = 5;
    q = 10;
    swap(&p, &q)
    printf("%d\n", p);
}
    
    
int findAddressOfMax(int *a, int n){
    int* amax = NULL;
    if(n>=1) {
        amax = a;
        for (int i = 1; i < n; i++){
            if (*(a+i) > *(a + amax)){
                amax = i;
            }
        }

    }
    return amax;
}



void swap(int *x, int *y){
    int t;
    t = *x;
    *x = *y
    *y = t;
}




