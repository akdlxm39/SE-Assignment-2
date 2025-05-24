#include "AddBicycleUI.h"
#include "AddBicycle.h"
/*
	함수 이름 : AddBicycleUI::AddBicycleUI()
	기능	  : 생성자 (AddBicycle 객체 주소 저장)
	전달 인자 : AddBicycle* -> AddBicycle의 addNewBicycle() 호출을 위한 주소
	반환값    : 없음
*/
AddBicycleUI::AddBicycleUI(AddBicycle* add_bicycle_ptr)
{
	add_bicycle_ptr_ = add_bicycle_ptr;
}

/*
	함수 이름 : AddBicycleUI::getBID()
	기능	  : 자전거 ID를 반환함
	전달 인자 : 없음
	반환값    : string -> 자전거 ID
*/
string AddBicycleUI::getBID()
{
	return bid_;
}

/*
	함수 이름 : AddBicycleUI::getModelName()
	기능	  : 자전거 모델명을 반환함
	전달 인자 : 없음
	반환값    : string -> 자전거 모델명
*/
string AddBicycleUI::getModelName()
{
	return model_name_;
}

/*
	함수 이름 : AddBicycleUI::startInterface()
	기능	  : AddBicycleUI 실행 (자전거 정보 입력 대기, 입력 시 AddBicycleUI::addNewBicycle() 이벤트 발생)
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBicycleUI::startInterface()
{
	// cout << "추가하려는 자전거의 ID와 모델명을 입력해주세요.\n예시) b1 bikeMaker\n";
	// cin >> bid_ >> model_name_;
	in_fp >> bid_ >> model_name_;

	addNewBicycle();
}

/*
	함수 이름 : AddBicycleUI::addNewBicycle()
	기능	  : 이벤트 발생 시, AddBicycle의 addNewBicycle()를 호출하여 이벤트가 발생했음을 알림
				이벤트에 대한 처리 완료 후, 추가한 자전거의 정보를 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBicycleUI::addNewBicycle()
{
	add_bicycle_ptr_->addNewBicycle();

	out_fp << "3.1. 자전거 등록\n";
	out_fp << "> " << bid_ << " " << model_name_ << "\n\n";
}
