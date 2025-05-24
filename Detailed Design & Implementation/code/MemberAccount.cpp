#include "MemberAccount.h"

/*
	함수 이름 : MemberAccount::MemberAccount()
	기능	  : 생성자 (회원 정보를 저장, RentedBicycleCollection 객체 생성 및 주소 저장)
	전달 인자 : string, string, string -> ID, 비밀번호, 전화번호
	반환값    : 없음
*/
MemberAccount::MemberAccount(string id, string password, string phone_number)
{
	id_ = id;
	password_ = password;
	phone_number_ = phone_number;
	rented_bicycle_collection_ptr_ = new RentedBicycleCollection();
}

/*
	함수 이름 : MemberAccount::~MemberAccount()
	기능	  : 파괴자 (RentedBicycleCollection 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
MemberAccount::~MemberAccount()
{
	delete rented_bicycle_collection_ptr_;
}

/*
	함수 이름 : MemberAccount::getID()
	기능	  : ID 반환
	전달 인자 : 없음
	반환값    : string -> ID
*/
string MemberAccount::getID()
{
	return id_;
}

/*
	함수 이름 : MemberAccount::isMatched()
	기능	  : 회원 정보가 일치하는지 확인
	전달 인자 : string, string -> ID, 비밀번호
	반환값    : bool -> 일치하면 true 아니면 flase
*/
bool MemberAccount::isMatched(string id, string password)
{
	return id_ == id && password_ == password;
}

/*
	함수 이름 : MemberAccount::rent()
	기능	  : 자전거를 대여, RentedBicycleCollection 객체에 추가
	전달 인자 : Bicycle* -> 빌리려는 자전거의 객체 주소
	반환값    : 없음
*/
void MemberAccount::rent(Bicycle* bicycle_ptr)
{
	rented_bicycle_collection_ptr_->addBicycle(bicycle_ptr);
}

/*
	함수 이름 : MemberAccount::listAllRentedBicycles()
	기능	  : 빌린 자전거를 목록화, RentedBicycleCollection의 listAllBicycles() 호출
	전달 인자 : ViewRentedBicyclesUI* -> 빌린 자전거 목록을 전달할 객체의 주소
	반환값    : 없음
*/
void MemberAccount::listAllRentedBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr)
{
	rented_bicycle_collection_ptr_->listAllBicycles(view_rented_bicycles_ui_ptr);
}
