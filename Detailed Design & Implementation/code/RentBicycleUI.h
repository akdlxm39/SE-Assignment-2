#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class RentBicycle;

class RentBicycleUI
{
private:

	RentBicycle* rent_bicycle_ptr_; // RentBicycle 객체 주소

	string bid_; // 자전거 ID
	string model_name_; // 자전거 모델명

public:
	RentBicycleUI(RentBicycle* rent_bicycle_ptr); // 생성자

	string getBID(); // 자전거 ID 반환

	void setModelName(string model_name); // 자전거 모델명 저장

	void startInterface(); // RentBicycleUI 실행
	void selectBicycle(); // 빌리려는 자전거 ID 입력 이벤트 처리 함수

};
#endif
