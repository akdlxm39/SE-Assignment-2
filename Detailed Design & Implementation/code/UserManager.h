#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include <string>
#include <iostream>

#include "MemberAccountCollection.h"
#include "MemberAccount.h"
#include "LogOutUI.h"
#include "String.h"

class UserManager
{
private:
	MemberAccountCollection* member_account_collection_ptr_;

	MemberAccount* logged_in_member_ptr_;

	bool is_admin_;

	MemberAccount memberAccount;
	MemberAccountCollection memberAccountCollection;
	LogOutUI logOutUI;

public:
	UserManager UserManager(MemberAccountCollection* member_account_collection_ptr);

	MemberAccount* getMember();

	void logIn(String id, String password);

	void logOut(LogOutUI* log_out_ui_ptr);

};
#endif
