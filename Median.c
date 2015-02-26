#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int cmp(const int * a,const int * b);
void main()
{

int i,l,n,j,temp,k;
static int cnt=0;
char ch;
int *array;
float median;
//printf("Enter No of Elements\n");
scanf("%d",&n);
array = (int*)malloc(n*sizeof( int));
//printf("Enter Choice\n");
for(l=0;l<n;l++){
  //      printf("%d",cnt);
        fflush(stdin);
        scanf("%c",&ch);
                if (ch=='a'){
                    //printf("Enter Elements\n");
                    scanf("%d",&array[cnt]);
                    cnt=cnt+1;
                     qsort(array, cnt, sizeof(int ), cmp);

                    if((cnt)==1)
                        printf("%d",array[cnt-1]);
                    else{
                            if((cnt)%2==0){
                                median= (float)(array[(cnt)/2]+array[(cnt)/2-1])/2;
                                printf("%.01f",median);
                                }
                            else{
                                temp =array[(cnt+1)/2-1];
                                 printf("%d",temp);
                           }
                     }
                }
        if(ch=='r'){
            //cnt=cnt+1;
            scanf("%d",&k);
            if(cnt==0||cnt==1){
                printf("Wrong!");
                goto label;
            }

                for(i=0;i<cnt;i++){
                  if(array[i]==k){
		                for(j=i;j<cnt-1;j++)
		                {
		                array[j]=array[j+1];
		                }
                    cnt=cnt-1;
                    break;
	                }
                }

            if((cnt)==1)
                printf("%d",array[cnt-1]);
            else{
                if((cnt)%2==0){
                    median= (float)(array[(cnt)/2]+array[(cnt)/2-1])/2;
                    printf("%.01f",median);
                    }
                else{
                    temp =array[(cnt+1)/2-1];
                     printf("%d",temp);
               }
            }
        label:
        ;
        }

}

getch();
}

int cmp(const int * a,const int * b)
{
  if (*a==*b)
    return 0;
  else
    if (*a < *b)
        return -1;
     else
      return 1;
}
