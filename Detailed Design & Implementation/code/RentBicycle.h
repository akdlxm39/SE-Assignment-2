#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include <string>

#include "UserManager.h"
#include "BicycleCollection.h"
#include "RentBicycleUI.h"
#include "MemberAccount.h"

using namespace std;

class RentBicycle
{
private:

	UserManager *user_manager_ptr_; // UserManager 객체 주소

	BicycleCollection *bicycle_collection_ptr_; // BicycleCollection 객체 주소

	RentBicycleUI *rent_bicycle_ui_ptr_; // RentBicycleUI 객체 주소

public:
	RentBicycle(UserManager* user_manager_ptr, BicycleCollection* bicycle_collection_ptr); // 생성자
	~RentBicycle(); // 파괴자

	void run(); // RentBicycle 실행
	void rentBicycle(); // 빌리려는 자전거를 찾아, 현재 로그인한 회원이 빌리도록 하는 함수

};
#endif
