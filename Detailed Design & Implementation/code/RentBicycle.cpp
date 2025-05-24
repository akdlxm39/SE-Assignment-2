#include "RentBicycle.h"

/*
	함수 이름 : RentBicycle::RentBicycle()
	기능	  : 생성자 (UserManager, BicycleCollection 객체 주소 저장, RentBicycleUI 객체 생성 밎 주소 저장)
	전달 인자 : UserManager* -> 현재 로그인한 회원을 찾기 위한 객체 주소
				BicycleCollection* -> 빌리려는 자전거의 객체 주소를 찾기 위한 collection 클래스의 객체 주소
	반환값    : 없음
*/
RentBicycle::RentBicycle(UserManager* user_manager_ptr, BicycleCollection* bicycle_collection_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	bicycle_collection_ptr_ = bicycle_collection_ptr;
	rent_bicycle_ui_ptr_ = new RentBicycleUI(this);
}

/*
	함수 이름 : RentBicycle::~RentBicycle()
	기능	  : 파괴자 (RentBicycleUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
RentBicycle::~RentBicycle()
{
	delete rent_bicycle_ui_ptr_;
}

/*
	함수 이름 : RentBicycle::run()
	기능	  : control 객체 실행, RentBicycleUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBicycle::run()
{
	rent_bicycle_ui_ptr_->startInterface();
}

/*
	함수 이름 : RentBicycle::rentBicycle()
	기능	  : RentBicycleUI 객체에서 bid를 반환받아서, BicycleCollection::getBicycle()를 bid를 인자로 호출하여, 빌리려는 자전거의 Bicycle 객체 주소를 반환받음
				UserManager::getMember()를 호출하여, 현재 로그인한 멤버의 MemberAccount 객체 주소를 반환받음
				MemberAccount::rent()를 Bicycle 객체 주소를 인자로 호출하여, 자전거 대여
				Bicycle::getModelName()을 호출하여 모델 명을 반환받아서, RentBicycleUI 객체에게 전달
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBicycle::rentBicycle()
{
	string bid = rent_bicycle_ui_ptr_->getBID();
	Bicycle* bicycle_ptr = bicycle_collection_ptr_->getBicycle(bid);

	MemberAccount* member_acccount_ptr = user_manager_ptr_->getMember();
	member_acccount_ptr->rent(bicycle_ptr);

	string model_name = bicycle_ptr->getModelName();
	rent_bicycle_ui_ptr_->setModelName(model_name);
}
