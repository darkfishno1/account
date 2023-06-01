#include "pch.h"
#include <vector>
#include "../Project11/cal.cpp"

using namespace std;

class AccountFixture : public testing::Test
{
public:
	Account account{10000};
};
TEST_F(AccountFixture, CreateAcountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, FiveInterestRatio) {
	account.setFiveInterestRatio();
	EXPECT_EQ(10500, account.getBalance());
}


TEST_F(AccountFixture, SetInterestRatio) {
	account.setInterestRatio(0.1f);
	EXPECT_EQ(11000, account.getBalance());
}


TEST_F(AccountFixture, GetBalanceAfterNyear) {
	account.setInterestRatio(0.03f);
	EXPECT_EQ(11938, account.getAfterNyearBalance(5));
}