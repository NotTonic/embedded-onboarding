#include <stdio.h>
#include <stdlib.h>

void FizzBuzz(int n)
{
    if (n%3 == 0 && n%5 == 0) {
        printf("FizzBuzz \n");
    }
    else if (n%3 == 0) {
        printf("Fizz \n ");
    }
    else if (n%5 == 0) {
        printf("Buzz \n");
    }

}
int Comparison(const void *a, const void *b)
{
    int A = *(const int *)a;
    int B = *(const int *)b;

if (A < B) {
        return 1;
    }
    else if (A > B) {
        return -1;
    }
    else {
        return 0;
    }



}



int main(void) {
    printf("Hello, World!\n");
    //  Exercise 1.1 
    /*
    matrix_t matrix_transpose(matrix_t m) {
    matrix_t mt = create_matrix(m.cols, m.rows); //<- assume this has been implemented

    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            mt.data[j * m.rows + i] = m.data[i * m.cols + j];
        }
    }

    return mt;
}
    
    I'd improve the code by adding error handling to check if the input matrix is valid (e.g., not NULL, has positive dimensions)
    . Additionally, I would consider using a more descriptive variable name for the transposed matrix (e.g., transposed_matrix)
     to enhance code readability. Finally, I would add comments to explain the logic behind the nested loops for better
      understanding.  

    
    
    */




    //Exercise 2
    int*p1 = malloc(sizeof(int) *20);
    printf("THe first  loop for the int array with a pointer ");
    for (int i = 0; i < 20; i ++){
        p1[i] = i+1;
    
        FizzBuzz(p1[i]);
        
    }
    printf("THe second loop for fizzbuzz 1-30 ");
    for (int i = 1; i <= 30; i ++){
   
        FizzBuzz(i);
        
    }

    //Exercise 3
    qsort(p1, 20, sizeof(int), Comparison);

    printf("Descending array: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", p1[i]);
    }
    printf("\n");

}
