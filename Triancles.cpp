#include<iostream>
#include<cmath>
//#include<conio.h>
using namespace std;
class pointri{
public:
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
 
/* A function to check whether point P(x, y) lies inside the triangle formed
   by A(x1, y1), B(x2, y2) and C(x3, y3) */
int isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{  
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);
 
   /* Calculate area of triangle PBC */  
   float A1 = area (x, y, x2, y2, x3, y3);
 
   /* Calculate area of triangle PAC */  
   float A2 = area (x1, y1, x, y, x3, y3);
 
   /* Calculate area of triangle PAB */   
   float A3 = area (x1, y1, x2, y2, x, y);
   
   /* Check if sum of A1, A2 and A3 is same as A */
   if (A == A1 + A2 + A3)
   return 1;
   else
   return 0;
}
 
};//end of class

int main(){
int n,q;
//cout<<"Enter the no. of points and the no of Triangle points";
cin>>n>>q;
//cout<<"Enter the 2D points";
int **point= new int*[n];
for(int i=0;i<n;i++){
point[i]= new int[2];
cin>>point[i][0]>>point[i][1];
}//end of for
//cout<<"Enter the 3D points for Triangle";
int xx,yy,dd;
int **triangle =new int*[q];
for(int i=0;i<q;i++){
triangle[i]=new int[6];
cin>>xx>>yy>>dd;
triangle[i][0]=xx+dd;
triangle[i][1]=yy;
triangle[i][2]=xx;
triangle[i][3]=yy;
triangle[i][4]=xx;
triangle[i][5]=yy+dd;
}//end of for
pointri ob;

for(int i=0;i<q;i++){
int cnt=0;
for(int j=0;j<n;j++){
 int t = ob.isInside(triangle[i][0],triangle[i][1],triangle[i][2],triangle[i][3],triangle[i][4],triangle[i][5],point[j][0], point[j][1]);
     cnt=cnt+t;
     
}
 cout<<cnt<<endl;
}
//getch();
return 0;
}//end of main
