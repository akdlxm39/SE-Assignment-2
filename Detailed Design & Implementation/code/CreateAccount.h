#ifndef CREATE_ACCOUNT_H
#define CREATE_ACCOUNT_H

#include <string>
#include <iostream>

#include "MemberAccountCollection.h"
#include "CreateAccountUI.h"

class CreateAccount
{
private:
	MemberAccountCollection* member_account_collection_ptr_;

	CreateAccountUI* create_account_ui_ptr_;

	CreateAccountUI createAccountUI;
	MemberAccountCollection memberAccountCollection;

public:
	CreateAccount(MemberAccountCollection* member_account_collection_ptr);

	void run();

	void createNewAccount();

};
#endif
