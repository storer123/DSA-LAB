#include<stdio.h>
int main(){
	int r,c,a[10][10],count=0;
	printf("enter no. of row and column\n");
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
	if(c>=(r*c)/2){
        printf("it is not a sparse matrix !!");
	}
	else{
		printf("it is a sparse matrix !\n");
		int sparse[(c*r-count)+1][3];
		sparse[0][0]=r;
		sparse[0][1]=c;
		sparse[0][2]=c*r-count;
		int k=1;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(a[i][j]!=0){
					sparse[k][0]=i;
					sparse[k][1]=j;
					sparse[k][2]=a[i][j];
					k++;
				}
			}
		}
		for(int i=0;i<c*r-count+1;i++){
			for(int j=0;j<3;j++){
				printf("%d\t",sparse[i][j]);
			}printf("\n");
		}
	}
	return 0;
}