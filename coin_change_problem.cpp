#include<iostream> 
//only use input output library
//there is no use of other library
using namespace std;
int main(){
	int a;
       
	cout << "Enter the amount:"; 
	cin >> a; //input from user to break the amount into highest amount change
        cout << "you will need " << a / 5000 << " of 5000 note" << endl;
	a = a % 5000;
        cout << "you will need " << a / 1000 << " of 1000 note" << endl;
	a = a % 1000;
	cout << "you will need " << a / 500 << " of 500 note" << endl;
	a = a % 500;
	cout << "you will need " << a / 100 << " of 100 note" << endl;
	a = a % 100;
	cout << "you will need " << a / 50 << " of 50 note" << endl;
	a = a % 50;
	cout << "you will need " << a / 20 << " of 20 note" << endl;
	a = a % 20;
	cout << "you will need " << a / 10 << " of 10 note" << endl;
	a = a % 10;
	cout << "you will need " << a / 5 << " of 5 coin" << endl;
	a = a % 5;
	cout << "you will need " << a / 2 << " of 2 coin" << endl;
	a = a % 2;
	cout << "you will need " << a / 1 << " of 1 coin" << endl;
	system("pause"); //to stop the screen for see overall change
	return 0;
}

