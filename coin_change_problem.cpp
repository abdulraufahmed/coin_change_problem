#include<iostream>
using namespace std;
void change(int oa, int ra, int coins[]){ //function of making change of given amount
	if (oa % 100 < oa) // original amount greater than modulas 100 of original amount
	{
		coins[6] = (oa / 100); //divisible original amount save in array 
		ra= oa % 100; // modulas 100 of original amount equal to remaining amount
		oa = ra; //remaining amount equal to original amount
	}
	if ((oa % 50) < oa)
	{
		coins[5] = (oa / 50);
		ra = oa % 50;
		oa = ra;
	}
	if ((oa % 20) < oa)
	{
		coins[4] = (oa / 20);
		ra = oa % 20;
		oa = ra;
	}
	if ((oa % 10) < oa)
	{
		coins[3] = (oa / 10);
		ra = oa % 10;
		oa = ra;
	}
	if ((oa % 5) < oa)
	{
		coins[2] = (oa / 5);
		ra = oa % 5;
		oa = ra;
	}
	if ((oa % 2) < oa)
	{
		coins[1] = (oa / 2);
		ra = oa % 2;
		oa = ra;
	}
	if ((oa % 1) < oa)
	{
		coins[0] = (oa / 1);
		ra = oa % 1;
	}
}
void showchange(int arr[]){ // function for displaying amount to be change

	if (arr[6] > 0)
		cout << "Number of 100 note: " << + arr[6] <<endl;
	if (arr[5] > 0)
		cout << "Number of 50 note: " << +arr[5] << endl;
	if (arr[4] > 0){
	    if (arr[4] > 10)
	    arr[4] = 0;
		cout << "Number of 20 note: " << +arr[4] << endl;
	}
	if (arr[3] > 0)
		cout << "Number of 10 coin: " << +arr[3] << endl;
	if (arr[2] > 0) 
		cout << "Number of 5 coin: " << +arr[2] << endl;
	if (arr[1] > 0)
		cout << "Number of 2 coin: " << +arr[1] << endl;
	if (arr[0] > 0)
		cout << "Number of 1 coin: " << +arr[0] << endl;
}
int main(){
	int tc;
	int ra;
	int oa = 0;
	int b;
	jump:
	cout << "Enter the number of coin you want to change must be greater than 100:"<< endl;
	cin >> oa; // input amount to be change
	if (oa < 100){
    cout << "your Entered number is less than 100:"<< endl;
    goto jump;
	}
	tc = oa;
	ra = 0;
	int coins[7]; // initialize array of length 7
	change(oa, ra, coins); // call to change function
	cout << "The change of given input will be:" << endl;
	showchange(coins); //call to showchange function
	
	cin >> b;
    
}
