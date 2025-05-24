#include "AddBicycle.h"

/*
	함수 이름 : AddBicycle::AddBicycle()
	기능	  : 생성자 (BicycleCollection 객체 주소 저장, AddBicycleUI 객체 생성 밎 주소 저장)
	전달 인자 : BicycleCollection* -> Bicycle 객체를 추가하기 위한 collection class 주소
	반환값    : 없음
*/
AddBicycle::AddBicycle(BicycleCollection* bicycle_collection_ptr)
{
	bicycle_collection_ptr_ = bicycle_collection_ptr;
	add_bicycle_ui_ptr_ = new AddBicycleUI(this);
}

/*
	함수 이름 : AddBicycle::~AddBicycle()
	기능	  : 파괴자 (AddBicycleUI 객체 삭제)
	전달 인자 : 없음
	반환값    : 없음
*/
AddBicycle::~AddBicycle()
{
	delete add_bicycle_ui_ptr_;
}

/*
	함수 이름 : AddBicycle::run()
	기능	  : control 객체 실행, AddBicycleUI::startInterface() 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBicycle::run()
{
	add_bicycle_ui_ptr_->startInterface();
}

/*
	함수 이름 : AddBicycle::addNewBicycle()
	기능	  : AddBicycleUI 객체에서 bid와 model_name을 전달받아서, BicycleCollection::addNewBicycle()를 호출
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBicycle::addNewBicycle()
{
	string bid = add_bicycle_ui_ptr_->getBID();
	string model_name = add_bicycle_ui_ptr_->getModelName();
	bicycle_collection_ptr_->addNewBicycle(bid, model_name);
}
