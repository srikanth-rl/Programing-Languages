/* Pointers Matrix_Multiplication */
#include<stdio.h>
#include<stdlib.h>
int **allocation(int r,int c){
    int **matrix = (int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;++i)
        *(matrix+i) = (int*)malloc(c*sizeof(int));
    return matrix;
}
void storeInputs(int**mat,int r,int c){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",*(mat+i)+j);
}
void Multiply(int**mat1,int**mat2,int**mat3,int r1,int c1,int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            // *(*(mat3+i)+j) = 0;
            for(int k=0;k<c1;k++)
                *(*(mat3+i)+j) += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            printf("%d ",*(*(mat3+i)+j));
        }printf("\n");
    }
}
int main(){
    int row1,col1,row2,col2;
    scanf("%d %d",&row1,&col1);
    scanf("%d %d",&row2,&col2);
    int**mat1 = allocation(row1,col1);
    int**mat2 = allocation(row2,col2);
    int**mat3 = allocation(row1,col2);
    storeInputs(mat1,row1,col1);
    storeInputs(mat2,row2,col2);
    Multiply(mat1,mat2,mat3,row1,col1,col2);
}