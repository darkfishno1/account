class Account
{
public:
	explicit Account(int balance) : balance(balance) {
	}

	void setFiveInterestRatio()
	{
		interestRatio = 1.05f;
		balance = balance * interestRatio;
	}

	void setInterestRatio(float ratio)
	{
		interestRatio = 1.0f + ratio;
		balance = balance * interestRatio;
	}

	int getAfterNyearBalance(int NYear)
	{
		for(int n = 0; n < NYear; n++)
		{
			balance = balance * interestRatio;
		}
		return balance;
	}

	int getBalance(){
		return balance;
	}

	void deposit(int money){
		balance += money;
	}

	void withdraw(int money){
		balance -= money;
	}
private:
	int balance = 10000;
	float interestRatio = 1.0f;
};


