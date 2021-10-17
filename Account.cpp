#include <iostream>
#include <iomanip>
#include "Account.h"

using namespace std;

Account::Account(){
	do{
		system("cls");
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t======================           XYZ BANK           =========================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t======================                              =========================";
		cout << "\n\t\t\t======================             MENU             =========================";
		cout << "\n\t\t\t======================                              =========================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t== Programmers: Sanjae Facey, Jonathan Beckford, Maxine Smith, Brian Davis ==";
		cout << "\n\t\t\t=============================================================================\n";
		cout << "\n\n\t\t\tThe minimum deposit required to open an account is $1000.00...\n\n\t\t\t";
		cout << "\n\t\t\tEnter initial amount to open New Account...\n\n\t\t\t";
		cout << "Starting Deposit : $";
		cin >> balance;
			if(balance >= 1000){ 
				cout << "\n\t\t\tAccount successfully created.\n\t\t\tOpened with ending balance $" << fixed << setprecision(2) << balance;
				cout << "\n\t\t\t";
				system("pause");
			}else{
				system("cls");
				cout << "\n\t\t\t=============================================================================";
				cout << "\n\t\t\t=============================================================================";
				cout << "\n\t\t\t======================           XYZ BANK           =========================";
				cout << "\n\t\t\t=============================================================================";
				cout << "\n\t\t\t======================                              =========================";
				cout << "\n\t\t\t======================             MENU             =========================";
				cout << "\n\t\t\t======================                              =========================";
				cout << "\n\t\t\t=============================================================================";
				cout << "\n\t\t\t== Programmers: Sanjae Facey, Jonathan Beckford, Maxine Smith, Brian Davis ==";
				cout << "\n\t\t\t=============================================================================\n";
				cout << "\n\n\t\t\tInvalid amount entered. Account opened with a minimum deposit of $1000.00\n\n\t\t\t";
				balance = 0;
				cout << "\n\t\t\t";
				system("pause");
			}
		}while(balance < 1000);
	}

	double Account::getBalance(){
		//Getter function that will be invoked everytime the balance enquiry function is called
		//or when the account balance is otherwise updated
			
		return balance;
	}
	
	double Account::setDeposit(double x){
		//Accepts deposit request from user.
		deposits = x;
		balance += deposits;
				
		return balance;
	}
	
	double Account::setWithdrawal(double x){
		//Accepts withdrawal requests from user
		withdrawals = x;
		balance -= withdrawals;
				
		return balance;
	}
	
	void Account::header(void){
		system("cls");
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t======================           XYZ BANK           =========================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t======================                              =========================";
		cout << "\n\t\t\t======================             MENU             =========================";
		cout << "\n\t\t\t======================                              =========================";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\t\t\t== Programmers: Sanjae Facey, Jonathan Beckford, Maxine Smith, Brian Davis ==";
		cout << "\n\t\t\t=============================================================================\n";
		return;
	}		
