#include "LogIn.h"

/*
	함수 이름 : LogIn::LogIn()
	기능	  : 생성자 (UserManager 객체 주소 저장, LogInUI 객체 생성 밎 주소 저장)
	전달 인자 : UserManager* -> UserManager::logIn() 호출을 위한 주소
	반환값    : 없음
*/
LogIn::LogIn(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	log_in_ui_ptr_ = new LogInUI(this);
}

/*
	함수 이름 : LogIn::~LogIn()
	기능	  : 파괴자 (LogInUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
LogIn::~LogIn()
{
	delete log_in_ui_ptr_;
}

/*
	함수 이름 : LogIn::run()
	기능	  : control 객체 실행, LogInUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void LogIn::run()
{
	log_in_ui_ptr_->startInterface();
}

/*
	함수 이름 : LogIn::logIn()
	기능	  : LogInUI 객체에서 id와 password을 전달받아서, UserManager::logIn()를 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void LogIn::logIn()
{
	string id = log_in_ui_ptr_->getID();
	string password = log_in_ui_ptr_->getPassword();

	user_manager_ptr_->logIn(id, password);
}
