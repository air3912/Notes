#include<stdio.h>
#include<stdlib.h>

int** generateMatrix(int n, int *size, int **colSizes) {
    int **pp = malloc(n*sizeof(int*)); //分配指针数组
    *size = n; //返回 n 行
    *colSizes = malloc(n*sizeof(int)); //分配数组 
    //注意：以下是常见的错误 
    //**colSizes = malloc(n*sizeof(int)); //分多写一个* 
    //colSizes = malloc(n*sizeof(int)); //少多写一个* 
    //程序会有怎么样反应呢？ 
    for(int i=0,k=1;i<n;i++){
        (*colSizes)[i] = i+1; //每行有 i个元素
        pp[i] = malloc((i+1)*sizeof(int)); //分配每行i个元素
        for(int j=0;j<i+1;j++) {
            pp[i][j]=k++;
        }
    }    
    return pp; 
} 

int main() {
    int n = 3;
    
    int size, *colSizes;
    int** p = generateMatrix(n, &size, &colSizes);
    
    for(int i=0;i<size;i++){
        for(int j=0;j<colSizes[i];j++) 
            printf("%d ",p[i][j]);
        printf("\n");
    }
    
    for(int i=0;i<size;i++) free(p[i]);
    free(p);
    free(colSizes); 
}

