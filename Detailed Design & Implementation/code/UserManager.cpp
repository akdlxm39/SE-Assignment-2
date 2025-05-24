#include "UserManager.h"

/*
	함수 이름 : UserManager::UserManager()
	기능	  : 생성자 (MemberAccountCollection 객체 주소 저장 및 나머지 멤버 변수 초기화)
	전달 인자 : MemberAccountCollection* -> MemberAccountCollection의 getMemberAccount() 호출을 위한 주소
	반환값    : 없음
*/
UserManager::UserManager(MemberAccountCollection* member_account_collection_ptr)
{
	member_account_collection_ptr_ = member_account_collection_ptr;
	logged_in_member_ptr_ = nullptr;
	is_admin_ = false;
}

/*
	함수 이름 : UserManager::getMember()
	기능	  : 현재 로그인 중인 MemberAccount 객체의 주소 반환
	전달 인자 : 없음
	반환값    : MemberAccount* -> 현재 로그인 중인 회원
*/
MemberAccount* UserManager::getMember()
{
	return logged_in_member_ptr_;
}

/*
	함수 이름 : UserManager::logIn()
	기능	  : 회원의 ID와 비밀번호를 이용해 로그인
				ID와 비밀번호가 admin 이라면, is_admin_을 true로 설정
				아니라면, logged_in_member_ptr_에 MemberAccountCollection에서 반환받은 MemberAccount 객체 주소 저장
	전달 인자 : 없음
	반환값    : MemberAccount* -> 현재 로그인 중인 회원
*/
void UserManager::logIn(string id, string password)
{
	if (id == "admin" && password == "admin") {
		is_admin_ = true;
	} else {
		logged_in_member_ptr_ = member_account_collection_ptr_->getMemberAccount(id, password);
	}
}

/*
	함수 이름 : UserManager::logOut()
	기능	  : 로그아웃
				is_admin_이 true라면, LogOutUI::setID()의 인자로 "admin"을 전달하고, is_admin_을 false로 설정 
				아니라면, LogOutUI::setID()의 인자로 (현재 로그아웃하려는 멤버의 ID)를 전달하고, logged_in_member_ptr_를 nullptr로 초기화
	전달 인자 : LogOutUI* -> LogOutUI 객체의 주소
	반환값    : 없음
*/
void UserManager::logOut(LogOutUI* log_out_ui_ptr)
{
	string id;
	if (is_admin_) {
		id = "admin";
		is_admin_ = false;
	}
	else {
		id = logged_in_member_ptr_->getID();
		logged_in_member_ptr_ = nullptr;
	}
	log_out_ui_ptr->setID(id);
}
