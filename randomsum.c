#include<stdio.h>
void main(){
int *arr,s, i,e,j,l,r,n;
float f;
scanf("%d%d",&n,&s);
arr=(int *)malloc(n*sizeof(int));
j=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
			/*if(e<n){
				arr[j]=e;
				j=j+1;
			}//end of if
*/
	}//end of for i
r=i=0;
j=arr[i];
while(i<n&&j<n){
	l=i;
	e=arr[l];
	while(l<n && e<n){
		
		printf("\n%d\t%d",arr[i],arr[l]);
		if(arr[i]+arr[l]<=s){
			r=r+1;
		}
	l=l+1;
	e=arr[l];
	}//end of for l
i=i+1;
j=arr[i];
}//end of for i

f=(float)r/s;
printf("%.01f",f);
}//end of main
