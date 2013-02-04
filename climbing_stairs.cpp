#include<iostream>

using namespace std;

class monk{
public:
	unsigned int  magic(unsigned int steps) {
				if (steps == 1) {
				    return 1;
				}
				else if (steps == 2) {
				    return 2;
				} 
				else {
				    return magic(steps-1) + magic(steps-2);
				}
			}//end of magic

};//end of class
int main(){
	unsigned int test,steps,guess;
	monk ob;	
	//cout<<"Test";
	cin.clear();	
	cin>>test;
		for(unsigned int i=0;i<test;i++){
			//cout<<"Steps"<<endl<<"Guess";
			cin>>steps>>guess;
		unsigned int ways = ob.magic(steps); 
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


