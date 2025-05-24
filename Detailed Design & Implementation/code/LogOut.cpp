#include "LogOut.h"

/*
	함수 이름 : LogOut::LogOut()
	기능	  : 생성자 (UserManager 객체 주소 저장, LogOutUI 객체 생성 밎 주소 저장)
	전달 인자 : UserManager* -> UserManager::logOut() 실행을 위한 주소
	반환값    : 없음
*/
LogOut::LogOut(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	log_out_ui_ptr_ = new LogOutUI();
}

/*
	함수 이름 : LogOut::~LogOut()
	기능	  : 파괴자 (LogOutUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
LogOut::~LogOut()
{
	delete log_out_ui_ptr_;
}
/*
	함수 이름 : LogOut::run()
	기능	  : control 객체 실행, UserManager::logOut() 호출, LogOutUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void LogOut::run()
{
	user_manager_ptr_->logOut(log_out_ui_ptr_);
	log_out_ui_ptr_->startInterface();
}

