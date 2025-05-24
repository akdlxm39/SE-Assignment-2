#ifndef ADD_BICYCLE_H
#define ADD_BICYCLE_H

#include <string>

#include "AddBicycleUI.h"
#include "BicycleCollection.h"

using namespace std;


class AddBicycle
{
private:

	BicycleCollection* bicycle_collection_ptr_; // BicycleCollection 객체 주소

	AddBicycleUI* add_bicycle_ui_ptr_; // AddBicycleUI 객체 주소


public:

	AddBicycle(BicycleCollection* bicycle_collection_ptr); // 생성자
	~AddBicycle(); // 파괴자

	void run(); // AddBicycle 실행
	void addNewBicycle(); // AddBicycleUI에서 자전거 정보를 전달 받아서, BicycleCollection의 addNewBicycle()에 전달

};
#endif
