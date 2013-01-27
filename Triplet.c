#include<stdio.h>
void main(){
  struct node{
	unsigned int data;
	unsigned int data1;
	unsigned int data2;
	struct node *link;
	};
	struct node *start, *ar,*ar1,*pptr,*kl,*pptr1,*start1;
unsigned int i,j,k,l,n,diff,x,*arr,p,q;
start = NULL,start1=NULL;
ar = NULL,ar1=NULL,pptr1=NULL;
pptr = NULL;
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
					//diff=(arr[i]*100)+(arr[j]*10)+arr[k];
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

	ar = start;
	while(ar!=NULL)
	{
	printf("\n%u%u%u",ar->data,ar->data1,ar->data2);
	ar=ar->link;
	x=x+1;
	}
	printf("\nthe no of node is %u",x);

	 printf("\n\n\n");

pptr =start;
	while(pptr!=NULL)
	{
	kl=pptr;
	ar = pptr->link;
		while(ar!=NULL)
		{
		if(kl->data>ar->data)
			{
			diff=kl->data;
			kl->data=ar->data;
			ar->data=diff;
			}
		ar=ar->link;
		}
	pptr= pptr->link;
	//a=a+1;
	}

/*printf("\nthe sorted linked list is");
printf("\nelements");
ar=start;
	while(ar!=NULL)
	{
	printf("\n%u",ar->data);
	ar=ar->link;
	}
*/
ar=start;
while(ar!=NULL) {
kl=ar->link;
if(kl==NULL){
pptr1 = ar1;
ar1 =  malloc(sizeof(struct node));
ar1->data=ar->data;
ar1->link = NULL;
if(start1==NULL)
start1 = ar1;
else
pptr1->link = ar1;
break;
}
if(ar->data == kl->data){
ar=ar->link;
}
else{
pptr1 = ar1;
ar1 =  malloc(sizeof(struct node));
ar1->data=ar->data;
ar1->link = NULL;
if(start1==NULL)
start1 = ar1;
else
pptr1->link = ar1;
ar=ar->link;

}
}

printf("\nelements");
ar1=start1;
x=0;
	while(ar1!=NULL)
	{
	printf("\n%u",ar1->data);
	ar1=ar1->link;
	x=x+1;
	}

	 printf("%u",x);
}
