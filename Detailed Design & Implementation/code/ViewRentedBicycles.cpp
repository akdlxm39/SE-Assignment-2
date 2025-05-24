#include "ViewRentedBicycles.h"

/*
	함수 이름 : ViewRentedBicycles::ViewRentedBicycles()
	기능	  : 생성자 (UserManager 객체 주소 저장, ViewRentedBicyclesUI 객체 생성 밎 주소 저장)
	전달 인자 : UserManager* -> 현재 로그인된 MemberAccount를 얻기 위한 객체 주소
	반환값    : 없음
*/
ViewRentedBicycles::ViewRentedBicycles(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	veiw_rented_bicycles_ui_ptr_ = new ViewRentedBicyclesUI();
}

/*
	함수 이름 : ViewRentedBicycles::~ViewRentedBicycles()
	기능	  : 파괴자 (ViewRentedBicyclesUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
ViewRentedBicycles::~ViewRentedBicycles()
{
	delete veiw_rented_bicycles_ui_ptr_;
}

/*
	함수 이름 : ViewRentedBicycles::run()
	기능	  : control 객체 실행, UserManager 객체로부터 현재 로그인된 MemberAccount의 객체 주소를 반환받음
				MemberAccount::listAllRentedBicycles()를 ViewRentedBicyclesUI의 주소를 인자로 호출
				ViewRentedBicyclesUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void ViewRentedBicycles::run()
{
	MemberAccount* member_account_ptr_ = user_manager_ptr_->getMember();
	member_account_ptr_->listAllRentedBicycles(veiw_rented_bicycles_ui_ptr_);

	veiw_rented_bicycles_ui_ptr_->startInterface();
}
