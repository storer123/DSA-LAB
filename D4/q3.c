//3.    WAP to transpose a sparse matrix.
#include<stdio.h>
int main(){
	int r,c,a[10][10],count=0;
	printf("enter no. of row and column of matrix 1 :\n");
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			    count++;
		}
	}
	printf("\nthe matrix is :- \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
		printf("the sparse matrix 1 !\n");
		int sparse1[(c*r-count)+1][3];
		sparse1[0][0]=r;
		sparse1[0][1]=c;
		sparse1[0][2]=c*r-count;
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
		for(int i=0;i<c*r-count+1;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",sparse1[i][j]);
			}printf("\n");
		}
     //////////////////////////////////////////////
    printf("transpose of sparse matrix is:-\n");
    for(int i=0;i<r*c-count+1;i++){
            int t=sparse1[i][0];
            sparse1[i][0]=sparse1[i][1];
            sparse1[i][1]=t;
    }



    for(int k=0;k<r*c-count ;k++){
        for(int i=1;i<r*c-count-k ;i++){
            if(sparse1[i][0]>sparse1[i+1][0]||(sparse1[i][0]==sparse1[i+1][0]&&sparse1[i][1]>sparse1[i+1][1])){
                for(int j=0;j<3;j++){
                    int t=sparse1[i][j];
                    sparse1[i][j]=sparse1[i+1][j];
                    sparse1[i+1][j]=t;
                }
            }          
        }
    }
    for(int i=0;i<c*r-count+1 ; i++){
 			for(int j=0;j<3;j++){
 				printf("%d\t",sparse1[i][j]);
 			}printf("\n");
 		}
	return 0;
}