/*MATRIX USING POINTER*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,r1,c1,r2,c2;
    scanf("%d %d",&r1,&c1);
int **allocate   (int,int);
void matrix      (int**,int,int);
void MAT_ADD     (int**,int**,int**,int,int);
void MAT_SUB     (int**,int**,int**,int,int);
void MAT_MULTIPLY(int**,int**,int**,int,int,int);
    int **mat1=allocate(r1,c1);
    matrix(mat1,r1,c1);
    scanf("%d %d",&r2,&c2);
    int **mat2=allocate(r2,c2);
    matrix(mat2,r2,c2);
    int **mat3=allocate(r1,c2);
    if(r1==r2 & c1==c2)
        MAT_ADD(mat1,mat2,mat3,r1,c1);
    else
        printf("MATRIX_ADDITION is not possible\n");
    if(r1==r2 & c1==c2)
        MAT_SUB(mat1,mat2,mat3,r1,c1);
    else
        printf("MATRIX_SUBTRACTION is not possible\n");

    if(r2==c1)
        MAT_MULTIPLY(mat1,mat2,mat3,r1,c2,c1);
    else
        printf("MATRIX_MULTIPLICATION is not possible\n\n");
}
void MAT_MULTIPLY(int **mat1,int**mat2,int**mat3,int r1,int c2,int c1){
    printf("MATRIX_MULTIPLICATION:-\n");
    int i,j,k;
    for(i=0;i<r1;i++){
        printf("\t");
        for(j=0;j<c2;j++){
            *(*(mat3+i)+j)=0;
                for(k=0;k<c1;k++)
                *(*(mat3+i)+j)+= (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            printf("%d ",*(*(mat3+i)+j));}
        printf("\n");
    }
}
void MAT_ADD(int **mat1,int **mat2,int **mat3,int r1,int c1){
        printf("MATRIX_ADDITION:-\n");
    int i,j;
    for(i=0;i<r1;i++){
        printf("\t");
        for(j=0;j<c1;j++){
            *(*(mat3+i)+j) = (*(*(mat1+i)+j)) + (*(*(mat2+i)+j));
            printf("%d ",*(*(mat3+i)+j));}
        printf("\n");
    }
}
void MAT_SUB(int **mat1,int **mat2,int **mat3,int r1,int c1){
        printf("MATRIX_SUBTRACTION:-\n");
    int i,j;
    for(i=0;i<r1;i++){
        printf("\t");
        for(j=0;j<c1;j++){
            *(*(mat3+i)+j) = (*(*(mat1+i)+j)) - (*(*(mat2+i)+j));
            printf("%d ",*(*(mat3+i)+j));}
        printf("\n");
    }
}
void matrix(int **mat,int n,int m){
    int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d ",*(mat+i)+j);
}
int **allocate(int n,int m){
    int i;
    int **mat = (int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
        *(mat+i) = (int *)malloc(m*sizeof(int));
        return mat;
}