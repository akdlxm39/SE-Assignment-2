#ifndef MEMBER_ACCOUNT_H
#define MEMBER_ACCOUNT_H

#include <string>

#include "ViewRentedBicyclesUI.h"
#include "RentedBicycleCollection.h"
#include "Bicycle.h"

using namespace std;

class MemberAccount
{
private:

	string id_; // 회원의 ID
	string password_; // 회원의 비밀번호
	string phone_number_; // 회원의 전화번호

	RentedBicycleCollection* rented_bicycle_collection_ptr_; // 회원이 빌린 자전거들을 관리하는 객체 주소

public:

	MemberAccount(string id, string password, string phone_number); // 생성자
	~MemberAccount(); // 파괴자

	string getID(); // ID 반환

	bool isMatched(string id, string password); // 회원 정보가 일치하는 지 확인

	void rent(Bicycle* bicycle_ptr); // 자전거를 빌리는 함수

	void listAllRentedBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr); // 내가 빌린 모든 자전거를 목록화하는 함수

};
#endif
