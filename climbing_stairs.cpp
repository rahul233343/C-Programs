#include<iostream>

using namespace std;

int main(){
	unsigned int ways,test,steps,guess;
	//monk ob;	
	//cout<<"Test";
	cin.clear();	
	cin>>test;
		for(unsigned int i=0;i<test;i++){
			//cout<<"Steps"<<endl<<"Guess";
			cin>>steps>>guess;

				if (steps == 1) {
				    ways= 1;
				}
				else if (steps == 2) {
				    ways= 2;
				} 
				else {
				    //return magic(steps-1) + magic(steps-2);
					int ss,s=1,f=2;				      
					for(int j=0;j<steps-2;j++){
						ss=s+f;
						s=f;
						f=ss;
				      }//end of for
				ways=ss;
				}
			

		unsigned int cnt=0,r;
	 	while(ways > 0)   
	 	{   
			  r = ways % 2 ;   
			  if (r==1)
			  cnt++;
			  ways = ways / 2 ;    
		 }//end of while   
	if (cnt == guess)
	cout<<"CORRECT"<<endl;
	else
	cout<<"INCORRECT"<<endl;
		}//end of test case for loop
return 0;
}//end of main


