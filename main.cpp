/*
Group 1 Members
Sanjae Facey - 1400137119
Jonathan Beckford - ID# 2017002548
Maxine Smith - 1300120136
Brian Davis - 2017001804
*/

#include <iostream>
#include <unistd.h>
#include <iomanip>
#include "Account.h"

using namespace std;

int main(int argc, char** argv) {
	double bal, depositAmount, withdrawalAmount; 
	int option;
	Account a1;
		do{
		system("cls");
		a1.header();
		//cout << "\n\n\t\t\t\t1. Open Account";		
		cout << "\n\n\t\t\t\t1. Deposit";
		cout << "\n\n\t\t\t\t2. Withdraw";
		cout << "\n\n\t\t\t\t3. Balance Enquiry";
		cout << "\n\n\t\t\t\t0. Quit";
		cout << "\n\t\t\t=============================================================================";
		cout << "\n\n\t\t\t\t||====>> ";
		cin >> option;
		
			switch(option){
				/*case 1:{
					a1.header();
					
					cout << "\n\n\t\t\tThe minimum deposit required to open an account is $1000.00...\n\n\t\t\t";
					cout << "\n\t\t\tEnter initial amount to open New Account...\n\n\t\t\t";
					cout << "Starting Deposit : $";
					cin >> bal;
					
					//a1.setBalance(bal);
					
					
					if (bal >= 1000) {
						a1.setBalance(bal);
						a1.header();
						cout << "\n\t\t\tAccount successfully created.\n\t\t\tOpened with ending balance $";
						cout << fixed << setprecision(2) << a1.getBalance();
						cout << "\n\n\t\t\t";
					}
					else {
						a1.header();
						cout << "\n\n\t\t\tInvalid amount entered. Account opened with a minimum deposit of $1000.00\n\n\t\t\t";
					}					
					break;
				}*/
				
				case 1:{
					a1.header();
					cout << "\n\n\t\t\t\t\t||====>> $";
					cin >> depositAmount;
						bal = a1.getBalance();
						if(bal >= 1){
							a1.setDeposit(depositAmount);						
							cout << "\n\t\t\tTransaction successful.\n\t\t\t";
							cout << " Deposit : $" << fixed << setprecision(2) << depositAmount;
							cout << "\n\t\t\tCurrent Balance : $";  
							cout << fixed << setprecision(2) << a1.getBalance();
							cout << "\n\n\t\t\t";
						}else{
							a1.header();
							cout << "\n\t\t\tInvalid account.\n\t\t\tYou do not have an existing account.\n\t\t\tChoose option 1 to create an account.\n\n\t\t\t";
						}							
					break;
				}
				
				case 2:{
					a1.header();
					cout << "\n\n\t\t\t\t\t||====>> $";
					cin >> withdrawalAmount;
						bal = a1.getBalance();
						if(bal > 0 && bal >= withdrawalAmount){
							a1.setWithdrawal(withdrawalAmount);						
							cout << "\n\n\t\t\tTransaction successful.\n\t\t\t";
							cout << "Withdrawal : $" << fixed << setprecision(2) << withdrawalAmount;
							cout << "\n\t\t\tCurrent Balance : $";  
							cout << fixed << setprecision(2) << a1.getBalance();
							cout << "\n\n\t\t\t";
						}else{
							a1.header();
							cout << "\n\t\t\tInsufficient funds.\n\t\t\tYou do not have sufficient funds to complete this transaction.\n\t\t\t";
						}
						
					break;
				}
				
				case 3:{
					a1.header();
					cout << "\n\n\t\t\tAvailable Balance $";
					cout << fixed << setprecision(2) << a1.getBalance();
					cout << "\n\n\t\t\t";
					break;
				}
				case 0:{
					a1.header();
					cout << "\n\n\t\t\tThank you for banking with XYZ Bank.";
					sleep(3);
					exit(0);
					break;
				}
				default : {
					a1.header();
					cout << "\n\t\t\tInvalid operation...\n\n\t\t\t";
					break;
				}
				
			}
			system("pause");		
		}while(option != 0);
	
	return 0;
}

