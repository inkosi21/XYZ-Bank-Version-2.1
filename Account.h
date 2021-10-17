#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	public:
		Account();
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
