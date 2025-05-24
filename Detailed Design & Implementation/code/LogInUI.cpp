#include "LogInUI.h"
#include "LogIn.h"

/*
	함수 이름 : LogInUI::LogInUI()
	기능	  : 생성자 (LogIn 객체 주소 저장)
	전달 인자 : LogIn* -> LogIn의 logIn() 호출을 위한 주소
	반환값    : 없음
*/
LogInUI::LogInUI(LogIn* log_in_ptr)
{
	log_in_ptr_ = log_in_ptr;
}

/*
	함수 이름 : LogInUI::getID()
	기능	  : ID를 반환함
	전달 인자 : 없음
	반환값    : string -> ID
*/
string LogInUI::getID()
{
	return id_;
}

/*
	함수 이름 : LogInUI::getPassword()
	기능	  : 비밀번호를 반환함
	전달 인자 : 없음
	반환값    : string -> 비밀번호
*/
string LogInUI::getPassword()
{
	return password_;
}

/*
	함수 이름 : LogInUI::startInterface()
	기능	  : LogInUI 실행 (회원 정보 입력 대기, 입력 시 LogInUI::logIn() 이벤트 발생)
	전달 인자 : 없음
	반환값    : 없음
*/
void LogInUI::startInterface()
{
	// cout << "로그인 하려는 회원의 ID와 비밀번호를 입력해주세요.\n예시) kim pwdpwd\n";
	// cin >> id_ >> password_;
	in_fp >> id_ >> password_;

	logIn();
}

/*
	함수 이름 : LogInUI::logIn()
	기능	  : 이벤트 발생 시, LogIn의 logIn()를 호출하여 이벤트가 발생했음을 알림
				이벤트에 대한 처리 완료 후, 로그인한 회원의 정보를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void LogInUI::logIn()
{
	log_in_ptr_->logIn();

	out_fp << "2.1. 로그인\n";
	out_fp << "> " << id_ << " " << password_ << "\n\n";
}
