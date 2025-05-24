#include "LogOutUI.h"
#include "LogOut.h"

/*
	함수 이름 : LogOutUI::setID()
	기능	  : 회원의 ID를 저장함
	전달 인자 : string -> ID
	반환값    : 없음
*/
void LogOutUI::setID(string id)
{
	id_ = id;
}

/*
	함수 이름 : LogOutUI::startInterface()
	기능	  : LogOutUI 실행 (입력 이벤트 없음, 로그아웃 한 회원의 ID 출력)
	전달 인자 : 없음
	반환값    : 없음
*/
void LogOutUI::startInterface()
{
	out_fp << "2.2. 로그아웃\n";
	out_fp << "> " << id_ << "\n\n";
}
