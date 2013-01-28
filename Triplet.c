#include<stdio.h>
//#include<conio.h>
void main(){
	struct node{
	unsigned int data;
	unsigned int data1;
	unsigned int data2;
	struct node *link;
	};
	struct node *start, *ar,*pptr,*p1,*p2;
unsigned int i,j,k,l,n,x,*arr;
start = NULL;
ar = NULL,pptr = NULL;
//printf("Enter the total no of elements");
scanf("%u",&n);
arr= (unsigned int*)malloc(n*sizeof(unsigned int));
//printf("Enter the elements");
for(i=0;i<n;i++)
scanf("%u",&arr[i]);
	x=0;
	 for(i=0;i<n-2;i++){

	       for(j=i;j<n-1;j++){
		    if(arr[i]<arr[j]){
			for(k=j;k<n;k++){
			    if(arr[j]<arr[k]){
					pptr = ar;
					ar = (struct node *) malloc(sizeof(struct node));
					ar->data=arr[i];
					ar->data1=arr[j];
					ar->data2=arr[k];		
					ar->link = NULL;
					if(start==NULL)
					start = ar;
					else
					pptr->link = ar;

			    }
		    }
		    }
	       }
	 }

	/*ar = start;
	while(ar!=NULL)
	{
	printf("\n%u%u%u",ar->data,ar->data1,ar->data2);
	ar=ar->link;
	x=x+1;
	}
	printf("\nthe no of node is %u",x);

	 printf("\n\n\n");
*/
p1=start;
pptr=NULL;
while(p1!=NULL){
    
p2=p1->link;
	while(p2!=NULL){
		if((p1->data==p2->data)&&(p1->data1==p2->data1)&&(p1->data2==p2->data2)) {
			if(p1==start){			
				start=start->link;
				pptr=p1;
				goto label;
			}
			else{
			pptr->link=p1->link;
			//pptr=p1;
			goto label;
			}
		}		
			
		
		p2=p2->link;
	}
	
	pptr=p1;
	label:	
	p1=p1->link;
	
}

//printf("\nelements");
p1=start;
x=0;
	while(p1!=NULL)
	{
	//printf("\n%u%u%u",p1->data,p1->data1,p1->data2);
	p1=p1->link;
	x=x+1;
	}

	 printf("%u",x);
}
