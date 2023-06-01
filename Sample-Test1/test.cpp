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
