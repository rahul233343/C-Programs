#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	unsigned int test,steps,guess,cnt =0; 
	//cout<<"Test";
	//cin.clear();	
	cin>>test;


			float choice = sqrt(5);
			for(unsigned int i=0;i<test;i++){
			//cout<<"Steps"<<endl<<"Guess";
			cin>>steps>>guess;
			
			long double r = pow(((1+choice)/2),steps); 	
			//cout<<r;
			cnt = log10 (r/choice);
			//float cnt = log(pow(((1+sqrt(5))/2),steps)/sqrt(5));			
			cout<<cnt<<endl;
			int d=int (cnt);			
			cout<<d<<endl;			
			d++;
					
			cout<<d<<endl;		 
	 	 


//Checking the Count Against Guess given by villagers

	if (d == guess)
	cout<<"CORRECT"<<endl;
	else
	cout<<"INCORRECT"<<endl;
		}//end of test case for loop
return 0;
}//end of main


