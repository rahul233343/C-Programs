#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	double test,steps,guess,cnt =0; 
	//cout<<"Test";
	//cin.clear();	
	cin>>test;


			double choice = sqrt(5);
			for(unsigned int i=0;i<test;i++){
			//cout<<"Steps"<<endl<<"Guess";
			cin>>steps>>guess;
			
			double r = pow( ((1+choice)/2),steps); 	
			
			cnt = log(r/choice);
			//cout<<cnt;
			cnt++;
			//cout<<endl<<cnt;		 
	 	 


//Checking the Count Against Guess given by villagers

	if (cnt == guess)
	cout<<"CORRECT"<<endl;
	else
	cout<<"INCORRECT"<<endl;
		}//end of test case for loop
return 0;
}//end of main


