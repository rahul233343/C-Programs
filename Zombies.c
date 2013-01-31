#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

//int sort_function( const void *a, const void *b);
int network(int n,int m);
int sort(int **w,int m, int k);
void main() {
  int n,m,k;
	printf("Enter the values for Time Nodes, Roads, Time steps");
	scanf("%d%d%d",&n,&m,&k);
    network(n,m,k);
	getch();
}
/////////////////////////////////////////////FUNCTION////////////////////////////////////
int network(int n,int m, int k) {
	int **z,*y,*count,**w,result[5];
	int l,i,j,ch,t,tp,pt,g,temp,temp1;
	static int kt;
	time_t e;
	z = ( int** )malloc(m*sizeof( int* ));
////////////////////////////////////////////////////////////////////////////////////////////////////	

printf("Network\n");
	for(i=0;i<m;i++) {
		printf("Enter the %d roads\n",i+1);
		z[i] = (int*) malloc(2*sizeof(int)); 
		    for(j=0;j<2;j++){
		    scanf("%d",&z[i][j]);
		    }
		
	}
    
y = (int*) malloc(n * sizeof(int));

	printf("Enter the no of Zombies at each node\n");

	    for(i=0;i<n;i++) {
		    printf("Enter the Zombies at %d node\n",i+1);
		    scanf("%d",&y[i]);
	    }
	                                                                                        /*            
	                                                                                                    for(i=0;i<m;i++) {
		                                                                                                printf("%d\t",z[i][0]);
		                                                                                                printf("%d\n",z[i][1]);
	                                                                                                    }
                                                                                        	            
	                                                                                        for(i=0;i<n;i++)
		                                                                                        printf("%d\n",y[i]);
                                                                                        */
    w = ( int** )malloc(2*m*sizeof( int* ));
	
	printf(" New Network\n");

	for(i=0;i<(m);i++) {
		//printf("Enter the %d roads\n",i+1);
		 w[i] = (int*) malloc(2*sizeof(int)); 
		for(j=0;j<2;j++){
		w[i][j]=z[i][j];
		}
		
	}
for(i=m,g=0;i<(2*m)&&g<m;i++,g++) {
		//printf("Enter the %d roads\n",i+1);
		 w[i] = (int*) malloc(2*sizeof(int)); 
		
		t=z[g][0];
		z[g][0]=z[g][1];
		z[g][1]=t;
		for(j=0;j<2;j++){
		w[i][j]=z[g][j];
		}
		
	}
	for(i=0;i<(2*m);i++) {
		printf("%d\t",w[i][0]);
		printf("%d\n",w[i][1]);
		}
		

	
		
		for(i=0;i<(2*m);i++){
			for(j=0;j<(2*m)-1;j++){
			    
			    if(w[j][0]>w[j+1][0]){
				    temp=w[j][0];
				    w[j][0]=w[j+1][0];
				    w[j+1][0]=temp;
    			    
			        temp1=w[j][1];
				    w[j][1]=w[j+1][1];
				    w[j+1][1]=temp1;
		        }
		   }
   	 }
	
	
//	qsort((void *)w, 2*m, sizeof(w[0]), sort_function);
	printf("\nSorted Roads Network\n");
	for(i=0;i<(2*m);i++) {
		printf("%d\t",w[i][0]);
		printf("%d\n",w[i][1]);
	}
    count = (int*) malloc(n * sizeof(int));
	for(l=0;l<k;l++){
	//printf("%d",l);
	kt=0;
	for(i=0;i<n;i++) {
	count[i]=0;
	pt=0;
	for(j=i+count[i];j<(2*m);j++){
	
	    if(i==w[j][0]){
	        count[i]=count[i]+1;
            kt=kt+1;
	    }
	pt=kt-count[i];
	//else
	//break;
	}
	srand((unsigned)time(0));
	ch = rand()%count[i];
	//printf("\n%d___%d",i,ch);
	if(y[i]>0){
	pt = pt+ch;
	tp = w[pt][1];
	y[tp]=y[tp]+1;
	y[i]=y[i]-1;
	}
	}
	}
	for(i=0;i<n;i++) 
	//printf("\ncount for %d %d\n",i,count[i]);	

    for(i=0;i<n;i++) 
	printf("\Zombies at node %d is %d\n",i,y[i]);
	
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(y[i]<y[j])
			{
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			 }
		 }
	 }	

 for(i=0;i<n;i++) 
	printf("\Zombies at node %d is %d\n",i,y[i]);
	 for(i=0;i<5;i++){
	 result[i]= y[i];
	printf("\t%d",result[i]);
	}
}


