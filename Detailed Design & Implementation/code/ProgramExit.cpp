#include "ProgramExit.h"

/*
	함수 이름 : ProgramExit::ProgramExit()
	기능	  : 생성자 (UserManager 객체 주소 저장, LogOutUI 객체 생성 밎 주소 저장)
	전달 인자 : UserManager* -> UserManager::logOut() 실행을 위한 주소
	반환값    : 없음
*/
ProgramExit::ProgramExit(int* is_program_exit_ptr)
{
	is_program_exit_ptr_ = is_program_exit_ptr;
	program_exit_ui_ptr_ = new ProgramExitUI();
}

/*
	함수 이름 : ProgramExit::~ProgramExit()
	기능	  : 파괴자 (LogOutUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
ProgramExit::~ProgramExit()
{
	delete program_exit_ui_ptr_;
}
/*
	함수 이름 : ProgramExit::run()
	기능	  : control 객체 실행, ProgramExitUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void ProgramExit::run()
{
	*is_program_exit_ptr_ = 1;
	program_exit_ui_ptr_->startInterface();
}

