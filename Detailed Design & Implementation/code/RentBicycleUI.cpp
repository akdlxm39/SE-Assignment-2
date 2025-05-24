#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
	함수 이름 : RentBicycleUI::RentBicycleUI()
	기능	  : 생성자 (RentBicycle 객체 주소 저장)
	전달 인자 : RentBicycle* -> RentBicycle의 rentBicycle() 호출을 위한 주소
	반환값    : 없음
*/
RentBicycleUI::RentBicycleUI(RentBicycle* rent_bicycle_ptr)
{
	rent_bicycle_ptr_ = rent_bicycle_ptr;
}

/*
	함수 이름 : RentBicycleUI::getBID()
	기능	  : 자전거 ID을 반환함
	전달 인자 : 없음
	반환값    : string -> 자전거 ID
*/
string RentBicycleUI::getBID()
{
	return bid_;
}

/*
	함수 이름 : RentBicycleUI::setModelName()
	기능	  : 자전거 모델명을 저장함
	전달 인자 : string -> 자전거 모델명
	반환값    : 없음
*/
void RentBicycleUI::setModelName(string model_name)
{
	model_name_ = model_name;
}

/*
	함수 이름 : RentBicycleUI::startInterface()
	기능	  : AddBicycleUI 실행 (자전거 ID 입력 대기, 입력 시 RentBicycleUI::selectBicycle() 이벤트 발생)
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBicycleUI::startInterface()
{
	// cout << "빌리려는 자전거의 ID를 입력해주세요.\n예시) b1\n";
	// cin >> bid_;
	in_fp >> bid_;

	selectBicycle();
}

/*
	함수 이름 : RentBicycleUI::selectBicycle()
	기능	  : 이벤트 발생 시, RentBicycle의 rentBicycle()를 호출하여 이벤트가 발생했음을 알림
				이벤트에 대한 처리 완료 후, 빌린 자전거의 정보를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBicycleUI::selectBicycle()
{
	rent_bicycle_ptr_->rentBicycle();

	out_fp << "4.1. 자전거 대여\n";
	out_fp << "> " << bid_ << " " << model_name_ << "\n\n";
}
