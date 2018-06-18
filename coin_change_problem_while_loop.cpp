#include<iostream> 
//only use input output library
//there is no use of other library
using namespace std;
int main(){
	int a;
       int count;
       int notes[]={5000,1000,500,100,50,20,10,5,2,1};
       int i=0;
	cout << "Enter the amount:"; 
	cin >> a; //input from user to break the amount into highest amount change
	while(a != 0){
		
	count = a / notes[i] ;
        cout << "you will need " <<count << " of "<<notes[i]<<" note" << endl;
        
	a = a % notes[i];
	
	i++;
	}
	
	system("pause"); //to stop the screen for see overall change
	return 0;
}
