#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
//#include<conio.h>
using namespace std;

class jewel{
  public:
		void find(){
			string list;
			cin>>list;
			
			int lt=list.length();
			sort(list.begin(),list.end());	
            
            int cnt=0;
	        int j=0;		
			
			while(j<lt){
				int diff=0;
				diff=list.find_last_of(list[j]) - j;
				if(diff==0)
					cnt++;
				else
					cnt +=(diff/2)+1;
				j = j+diff+1;
			}//end of while

			cout<<cnt<<endl;
		}//end of find function
	};//end of class

int main(){
	jewel ob;
	int k;
	cin>>k;
	for(int l=0;l<k;l++)
	ob.find();
//getch();
}//end of main
