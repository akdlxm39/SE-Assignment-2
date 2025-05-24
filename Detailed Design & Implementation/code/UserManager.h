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

	MemberAccountCollection* member_account_collection_ptr_; // MemberAccountCollection 객체 주소

	MemberAccount* logged_in_member_ptr_; // MemberAccount 객체 주소

	bool is_admin_; // 현재 로그인 중인 사용자가 Manager인지 확인하는 변수


public:

	UserManager(MemberAccountCollection* member_account_collection_ptr); // 생성자

	MemberAccount* getMember(); // MemberAccount 객체 주소 반환 

	void logIn(string id, string password); // 로그인
	void logOut(LogOutUI* log_out_ui_ptr); // 로그아웃

};
#endif
