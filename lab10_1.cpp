#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan, rate, pay, PB, In, T, NB;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	int i = 1;
	PB = loan;
	NB = loan;
	while(NB != 0){
		cout << setw(13) << left <<  i; 
		cout << setw(13) << left << PB;
		In = PB*rate/100.0;
		cout << setw(13) << left << In;
		T = PB + In;
		cout << setw(13) << left << T;
		if(T <= pay) pay = T;
		cout << setw(13) << left << pay;
		NB = T - pay;
		cout << setw(13) << left << NB;
		cout << "\n";
		PB = NB;
		i++;
		
	}

	return 0;
}
