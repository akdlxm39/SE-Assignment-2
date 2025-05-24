#ifndef ADD_BICYCLE_UI_H
#define ADD_BICYCLE_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class AddBicycle;

class AddBicycleUI
{
private:
	AddBicycle* add_bicycle_ptr_; // AddBicycle 객체의 주소

	string bid_; // 추가하려는 자전거의 ID
	string model_name_; // 추가하려는 자전거의 모델 명

public:
	AddBicycleUI(AddBicycle* add_bicycle_ptr); // 생성자

	string getBID(); // 자전거 ID 반환
	string getModelName(); // 자전거 모델 명 반환

	void startInterface(); // AddBicycleUI 실행
	void addNewBicycle(); // 자전거 정보 입력 이벤트 처리 함수

};
#endif
