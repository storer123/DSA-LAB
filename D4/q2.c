#include<stdio.h>
int main(){
	int r,c,a[10][10],b[10][10],count=0,n,size1=0,size2=0,size=0;
	printf("enter no. of row and column of matrix 1 :\n");
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
			    size1++;
		}
	}//int size1=c*r-count;
	printf("\nthe matrix is :- \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
		printf("the sparse matrix 1 !\n");
		int sparse1[(size1)+1][3];
		sparse1[0][0]=r;
		sparse1[0][1]=c;
		sparse1[0][2]=size1;
		int k=1;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(a[i][j]!=0){
					sparse1[k][0]=i;
					sparse1[k][1]=j;
					sparse1[k][2]=a[i][j];
					k++;
				}
			}
		}
		
		for(int i=0;i<size1+1;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",sparse1[i][j]);
			}printf("\n");
		}
    count=0;
    printf("enter no. of row and column of matrix 2 :\n");
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&b[i][j]);
			if(b[i][j]==0){
			    size2++;
			}
		}
	}
	printf("\nthe matrix is :- \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",b[i][j]);
		}printf("\n");
	}
    printf("the sparse matrix 2 !\n");
		int sparse2[size2+1][3];
		sparse2[0][0]=r;
		sparse2[0][1]=c;
		sparse2[0][2]=size2;
		k=1;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(b[i][j]!=0){
					sparse2[k][0]=i;
					sparse2[k][1]=j;
					sparse2[k][2]=b[i][j];
					k++;
				}
			}
		}
		for(int i=0;i<size2+1;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",sparse2[i][j]);
			}printf("\n");
		}
		if(sparse1[0][0]!=sparse2[0][0]||sparse2[0][1]!=sparse2[0][1]){
            printf("\nmatrix addition is not possible!!!\n");
			return 0;
		}
		printf("matrix anddition is possible\n sum of sparse matrix is: \n");
		int sum[size1+size2+1][3],i=1,j=1;k=1;
        while(i<size1+1 && j<size2+1){
			if(sparse1[i][0]==sparse2[j][0]){
				if(sparse1[i][1]==sparse2[j][1]){
					sum[k][0]=sparse1[i][0];
					sum[k][1]=sparse1[i][1];
				    sum[k][2]=sparse1[i][2]+sparse2[j][2];
					k++;i++;j++;
    			}
    			else if(sparse1[i][1]<sparse2[j][1]){
                    sum[k][0]=sparse1[i][0];
					sum[k][1]=sparse1[i][1];
				    sum[k][2]=sparse1[i][2];
					k++;i++;
    			}
			    else{
                    sum[k][0]=sparse2[j][0];
					sum[k][1]=sparse2[j][1];
				    sum[k][2]=sparse2[j][2];
					k++;j++;
			    }
			}
			
			else if(sparse1[i][0]<sparse2[j][0]){
				    sum[k][0]=sparse1[i][0];
					sum[k][1]=sparse1[i][1];
				    sum[k][2]=sparse1[i][2];
					k++;i++;
			}
			else{
                    sum[k][0]=sparse2[j][0];
					sum[k][1]=sparse2[j][1];
				    sum[k][2]=sparse2[j][2];
					k++;j++;
			}
		}//i--;j--;
		while(i<size1+1){
				sum[k][0]=sparse1[i][0];
					sum[k][1]=sparse1[i][1];
				    sum[k][2]=sparse1[i][2];
					k++;i++;
			}
		while(j<size2+1){
				sum[k][0]=sparse2[j][0];
					sum[k][1]=sparse2[j][1];
				    sum[k][2]=sparse2[j][2];
					k++;j++;
			}
		sum[0][0]=sparse1[0][0];
		sum[0][1]=sparse1[0][1];
		sum[0][2]=k-1;
		for(int i=0;i<k;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",sum[i][j]);
			}printf("\n");
		}
     printf("%d\t",sum[2][2]);
	return 0;
}