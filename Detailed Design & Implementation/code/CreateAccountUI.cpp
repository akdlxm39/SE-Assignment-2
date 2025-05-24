#include "CreateAccountUI.h"
#include "CreateAccount.h"
/*
	함수 이름 : CreateAccountUI::CreateAccountUI()
	기능	  : 생성자 (CreateAccount 객체 주소 저장)
	전달 인자 : CreateAccount* -> CreateAccount의 createNewAccount() 호출을 위한 주소
	반환값    : 없음
*/
CreateAccountUI::CreateAccountUI(CreateAccount* create_account_ptr)
{
	create_account_ptr_ = create_account_ptr;
}

/*
	함수 이름 : CreateAccountUI::getID()
	기능	  : ID를 반환함
	전달 인자 : 없음
	반환값    : string -> ID
*/
string CreateAccountUI::getID()
{
	return id_;
}

/*
	함수 이름 : CreateAccountUI::getPassword()
	기능	  : 비밀번호를 반환함
	전달 인자 : 없음
	반환값    : string -> 비밀번호
*/
string CreateAccountUI::getPassword()
{
	return password_;
}

/*
	함수 이름 : CreateAccountUI::getPhoneNumber()
	기능	  : 전화번호를 반환함
	전달 인자 : 없음
	반환값    : string -> 전화번호
*/
string CreateAccountUI::getPhoneNumber()
{
	return phone_number_;
}

/*
	함수 이름 : CreateAccountUI::startInterface()
	기능	  : CreateAccountUI 실행 (회원 정보 입력 대기, 입력 시 CreateAccountUI::createNewAccount() 이벤트 발생)
	전달 인자 : 없음
	반환값    : 없음
*/
void CreateAccountUI::startInterface()
{
	// cout << "가입하려는 회원의 ID와 비밀번호, 전화번호를 입력해주세요.\n예시) kim pwdpwd 01011111111\n";
	// cin >> id_ >> password_ >> phone_number_;
	in_fp >> id_ >> password_ >> phone_number_;

	createNewAccount();
}

/*
	함수 이름 : CreateAccountUI::createNewAccount()
	기능	  : 이벤트 발생 시, CreateAccount의 createNewAccount()를 호출하여 이벤트가 발생했음을 알림
				이벤트에 대한 처리 완료 후, 가입한 회원의 정보를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void CreateAccountUI::createNewAccount()
{
	create_account_ptr_->createNewAccount();

	out_fp << "1.1. 회원가입\n";
	out_fp << "> " << id_ << " " << password_ << " " << phone_number_ << "\n\n";
}
