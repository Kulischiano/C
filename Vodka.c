#include<stdio.h>
#include<stdlib.h>

typedef struct matrix{
    int str;
    int stl;
    int matrix[str][stl];
} matrix;
matrix* create_matrix(unsigned int n, unsigned int m);
void insert_element(matrix* a,unsigned int i, unsigned int j, int x);
void delete_element(matrix* a,unsigned int i, unsigned int j, int x);
void transpose_matrix(matrix* a);
void print_matrix(matrix* a);
void free_matrix(matrix* a);

struct element{
    unsigned int i;
    unsigned int j;
    int matrix_a[i][j] ;
};

int main(void)
{
    create_matrix(5,5);
    insert_element(create_matrix,4,3, 10);
    delete_element(create_matrix,4,3, 10);
    transpose_matrix(create_matrix);
    print_matrix(create_matrix);
    free_matrix(create_matrix);


    return 0;
}


matrix* create_matrix(unsigned int n, unsigned int m)
{
    matrix* a = (matrix*)malloc(sizeof(matrix));
    a->str = n;
    a->stl = m;
}

void insert_element(matrix* a,unsigned int i, unsigned int j, int x)
{
    a-> str = i;
    a-> stl = j;
    element-> a[i][j] = x;
}
void delete_element(matrix* a,unsigned int i, unsigned int j, int x)
{
    a -> str = NULL;
    a -> stl = NULL;
}
void transpose_matrix(matrix* a)
{
    a -> str = *stl;
    a -> stl = *str;
}
void print_matrix(matrix* a){
    printf("%i\n", a-> str);
    printf("%i\n", a-> stl);

}
void free_matrix(matrix* a)
{
    return 0;
}
