#ifndef CREATE_ACCOUNT_U_I_H
#define CREATE_ACCOUNT_U_I_H

#include <string>
#include <iostream>

#include "CreateAccount.h"
#include "String.h"

class CreateAccountUI
{
private:
	CreateAccount* create_account_ptr_;

	String id_;

	String password_;

	String phone_number_;

	CreateAccount createAccount;

public:
	CreateAccountUI CreateAccountUI(CreateAccount* create_account_ptr);

	void startInterface();

	String getID();

	String getPassword();

	String getPhoneNumber();

	void createNewAccount();

};
#endif
