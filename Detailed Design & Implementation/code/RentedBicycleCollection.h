#ifndef RENTED_BICYCLE_COLLECTION_H
#define RENTED_BICYCLE_COLLECTION_H

#include <string>

#include "Bicycle.h"
#include "ViewRentedBicyclesUI.h"

using namespace std;

#define MAX_NUMBER_OF_RENTED_BICYCLES 10

class RentedBicycleCollection
{
private:

	Bicycle* rented_bicycles_[MAX_NUMBER_OF_RENTED_BICYCLES] = {}; // 빌린 자전거 객체 주소 배열, nullptr로 초기화

	int rented_bicycle_count_ = 0; // 빌린 자전거 객체의 개수 기록, 0으로 초기화


public:

	void addBicycle(Bicycle* bicycle_ptr); // 자전거 대여

	void listAllBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr);  // 빌린 모든 자전거 정보 전달

};
#endif
