#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include <string>

#include "MemberAccountCollection.h"
#include "MemberAccount.h"
#include "LogOutUI.h"

using namespace std;

class UserManager
{
private:

	MemberAccountCollection* member_account_collection_ptr_; // MemberAccountCollection ��ü �ּ�

	MemberAccount* logged_in_member_ptr_; // MemberAccount ��ü �ּ�

	bool is_admin_; // ���� �α��� ���� ����ڰ� Manager���� Ȯ���ϴ� ����


public:

	UserManager(MemberAccountCollection* member_account_collection_ptr); // ������

	MemberAccount* getMember(); // MemberAccount ��ü �ּ� ��ȯ 

	void logIn(string id, string password); // �α���
	void logOut(LogOutUI* log_out_ui_ptr); // �α׾ƿ�

};
#endif
