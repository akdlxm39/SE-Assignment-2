#include "BicycleCollection.h"

/*
	함수 이름 : BicycleCollection::addNewBicycle()
	기능	  : 자전거 배열에 자전거 추가
	전달 인자 : string, string -> 자전거 정보
	반환값    : 없음
*/
void BicycleCollection::addNewBicycle(string bid, string model_name)
{
	Bicycle* new_bicycle = new Bicycle(bid, model_name);

	if (bicycle_count_ < MAX_NUMBER_OF_BICYCLES) {
		bicycles_[bicycle_count_] = new_bicycle;
		bicycle_count_ += 1;
	}
}

/*
	함수 이름 : BicycleCollection::getBicycle()
	기능	  : 찾으려는 자전거에 해당하는 자전거 객체 반환
	전달 인자 : string -> 자전거 ID
	반환값    : Bicycle* -> 자전거 객체 주소
*/
Bicycle* BicycleCollection::getBicycle(string bid)
{
	for (int i = 0; i < bicycle_count_; i++) {
		if (bicycles_[i]->isMatched(bid)) {
			return bicycles_[i];
		}
	}
	return nullptr;
}
