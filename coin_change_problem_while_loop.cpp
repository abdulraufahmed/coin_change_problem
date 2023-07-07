#include<iostream> 
//only use input output library
//there is no use of other library
using namespace std;
void myFunction(int num) {
	   
       int count;
       int notes[]={5000,1000,500,100,50,20,10,5,2,1};
       int i=0;
       
	if (std::cin.fail()){
	cout << "Your given input is not number" << endl;
	}
	else{
	    while(num != 0){
		
	    count = num / notes[i] ;
        cout << "you will need " <<count << " of "<<notes[i]<<" note" << endl;
        
	    num = num % notes[i];
	
    	i++;
	    }
	}
	cout << "Do you want to Check again Y N:";
    char choise;
	cin >> choise; 
	if(choise == 'Y' || choise == 'y'){
	int b=0;
	cout << "Enter the amount:" ; 
	cin >> b; //input from user to highest amount change
    myFunction(b);	
	}
	else
    cout <<"End !!";
}
int main(){
    int a = 0;
    int c = 0;
   	cout << "Enter the amount:" ; 
	cin >> a; //input from user to highest amount change
	myFunction(a);
	return 0;
}
