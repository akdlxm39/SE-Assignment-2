#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include <string>

#include "Bicycle.h"

using namespace std;

#define MAX_NUMBER_OF_BICYCLES 100

class BicycleCollection
{
private:

	Bicycle* bicycles_[MAX_NUMBER_OF_BICYCLES] = {}; // 자전거 객체 주소 배열, nullptr로 초기화

	int bicycle_count_ = 0; // 자전거 객체의 개수 기록, 0으로 초기화

public:

	void addNewBicycle(string bid, string model_name); // 자전거 추가

	Bicycle* getBicycle(string bid); // 원하는 자전거 객체 주소 반환

};
#endif
