#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	public:
		Account();
		Account(double init_balance);
		void setBalance(double x);
		double getBalance();
		double setDeposit(double x);
		double setWithdrawal(double x);
		void header(void);
	private:
		double balance;
		double deposits;
		double withdrawals;
};

#endif
