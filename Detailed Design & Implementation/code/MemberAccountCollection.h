#ifndef MEMBER_ACCOUNT_COLLECTION_H
#define MEMBER_ACCOUNT_COLLECTION_H

#include <string>
#include <iostream>

#include "MemberAccount.h"

class MemberAccountCollection
{
private:
	MemberAccount* member_accounts_[];

	int member_count_;

	MemberAccount memberAccount;
	MemberAccount memberAccount[];

public:
	void createNewAccount(string id, string password, string phone_number);

	MemberAccount* getMemberAccount(string id, string password);

};
#endif
