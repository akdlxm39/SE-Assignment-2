#include "CreateAccount.h"

/*
	함수 이름 : AddBicycle::AddBicycle()
	기능	  : 생성자 (MemberAccountCollection 객체 주소 저장, CreateAccountUI 객체 생성 밎 주소 저장)
	전달 인자 : MemberAccountCollection* -> MemberAccount 객체를 추가하기 위한 collection class 주소
	반환값    : 없음
*/
CreateAccount::CreateAccount(MemberAccountCollection* member_account_collection_ptr)
{
	member_account_collection_ptr_ = member_account_collection_ptr;
	create_account_ui_ptr_ = new CreateAccountUI(this);
}

/*
	함수 이름 : CreateAccount::~CreateAccount()
	기능	  : 파괴자 (CreateAccountUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
CreateAccount::~CreateAccount()
{
	delete create_account_ui_ptr_;
}

/*
	함수 이름 : CreateAccount::run()
	기능	  : control 객체 실행, CreateAccountUI::startInterface 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void CreateAccount::run()
{
	create_account_ui_ptr_->startInterface();
}

/*
	함수 이름 : CreateAccount::createNewAccount()
	기능	  : CreateAccount 객체에서 id와 password, phone_number를 전달받아서, MemberAccountCollection::createNewAccount()를 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void CreateAccount::createNewAccount()
{
	string id = create_account_ui_ptr_->getID();
	string password = create_account_ui_ptr_->getPassword();
	string phone_number = create_account_ui_ptr_->getPhoneNumber();

	member_account_collection_ptr_->createNewAccount(id, password, phone_number);
}
