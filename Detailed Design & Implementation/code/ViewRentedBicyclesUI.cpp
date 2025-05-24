#include "ViewRentedBicyclesUI.h"

/*
	함수 이름 : ViewRentedBicyclesUI::sortBicycleInfoes_()
	기능	  : 현재 빌린 모든 자전거 정보를 ID 기준 사전순으로 정렬
	전달 인자 : 없음
	반환값    : 없음
*/
void ViewRentedBicyclesUI::sortBicycleInfoes_()
{
	sort(bicycle_infoes_, bicycle_infoes_ + bicycle_count_);
}

/*
	함수 이름 : ViewRentedBicyclesUI::startInterface()
	기능	  : ViewRentedBicyclesUI 실행 (입력 이벤트 없음, 현재 빌린 모든 자전거의 정보를 ID 기준 사전순으로 출력)
	전달 인자 : 없음
	반환값    : 없음
*/
void ViewRentedBicyclesUI::startInterface()
{
	sortBicycleInfoes_();
	out_fp << "5.1. 자전거 대여 리스트\n";
	for (int i = 0; i < bicycle_count_; i++) {
		out_fp << "> " << bicycle_infoes_[i].first << " " << bicycle_infoes_[i].second << "\n";
	}
	out_fp << "\n";

}

/*
	함수 이름 : ViewRentedBicyclesUI::addBicycleInfo()
	기능	  : 매개변수로 전달받은 자전거 정보를 자전거 정보 배열에 저장
	전달 인자 : string, string -> 자전거 ID, 자전거 모델명
	반환값    : 없음
*/
void ViewRentedBicyclesUI::addBicycleInfo(string bid, string model_name)
{
	if (bicycle_count_ < MAX_NUMBER_OF_RENTED_BICYCLES) {
		bicycle_infoes_[bicycle_count_++] = { bid, model_name };
	}
}
