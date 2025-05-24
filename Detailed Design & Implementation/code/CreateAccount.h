#ifndef CREATE_ACCOUNT_H
#define CREATE_ACCOUNT_H

#include <string>

#include "CreateAccountUI.h"
#include "MemberAccountCollection.h"

using namespace std;

class CreateAccount
{
private:

	MemberAccountCollection* member_account_collection_ptr_; // MemberAccountCollection 객체 주소

	CreateAccountUI* create_account_ui_ptr_; // CreateAccountUI 객체 주소

public:

	CreateAccount(MemberAccountCollection* member_account_collection_ptr); // 생성자

	~CreateAccount(); // 파괴자

	void run(); // CreateAccount 실행

	void createNewAccount(); // CreateAccount 객체에서 회원 정보를 전달받아서, MemberAccountCollection의 createNewAccount()에 전달

};
#endif
