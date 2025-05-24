#ifndef CREATE_ACCOUNT_UI_H
#define CREATE_ACCOUNT_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class CreateAccount;

class CreateAccountUI
{
private:
	CreateAccount* create_account_ptr_; // CreateAccount 객체의 주소

	string id_; // 가입하려는 회원의 ID
	string password_; // 가입하려는 회원의 비밀번호
	string phone_number_; // 가입하려는 회원의 전화번호

public:
	CreateAccountUI(CreateAccount* create_account_ptr); // 생성자

	string getID(); // ID 반환
	string getPassword(); // 비밀번호 반환
	string getPhoneNumber(); // 전화번호 반환

	void startInterface(); // CreateAccountUI 실행
	void createNewAccount(); // 회원가입 정보 입력 이벤트 처리 함수

};
#endif
