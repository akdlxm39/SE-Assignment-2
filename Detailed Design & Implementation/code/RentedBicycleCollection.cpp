#include "RentedBicycleCollection.h"

/*
	함수 이름 : RentedBicycleCollection::addBicycle()
	기능	  : 빌린 자전거 배열에 자전거 객체 주소 저장
	전달 인자 : Bicycle* -> 자전거 객체 주소
	반환값    : 없음
*/
void RentedBicycleCollection::addBicycle(Bicycle* bicycle)
{
	if (rented_bicycle_count_ < MAX_NUMBER_OF_RENTED_BICYCLES) {
		rented_bicycles_[rented_bicycle_count_] = bicycle;
		rented_bicycle_count_ += 1;
	}
}

/*
	함수 이름 : RentedBicycleCollection::listAllBicycles()
	기능	  : 빌린 모든 자전거의 정보를 각 자전거 객체에서 반환받아서, 이를 ViewRentedBicyclesUI 객체에 전달
	전달 인자 : ViewRentedBicyclesUI* -> 자전거 정보를 전달할 ViewRentedBicyclesUI 객체의 주소
	반환값    : 없음
*/
void RentedBicycleCollection::listAllBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr)
{
	string bid, model_name;
	for (int i = 0; i < rented_bicycle_count_; i++) {
		bid = rented_bicycles_[i]->getBID();
		model_name = rented_bicycles_[i]->getModelName();
		view_rented_bicycles_ui_ptr->addBicycleInfo(bid, model_name);
	}
}
