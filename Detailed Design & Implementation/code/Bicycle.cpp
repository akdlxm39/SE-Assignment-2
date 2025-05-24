#include "Bicycle.h"

/*
	함수 이름 : Bicycle::Bicycle()
	기능	  : 생성자 (자전거 정보 저장)
	전달 인자 : string, string -> 자전거 ID, 자전거 모델 명
	반환값    : 없음
*/
Bicycle::Bicycle(string bid, string model_name)
{
	bid_ = bid;
	model_name_ = model_name;
}

/*
	함수 이름 : Bicycle::getBID()
	기능	  : 자전거 ID 반환
	전달 인자 : 없음
	반환값    : string -> 자전거 ID
*/
string Bicycle::getBID()
{
	return bid_;
}

/*
	함수 이름 : Bicycle::getModelName()
	기능	  : 자전거 모델 명 반환
	전달 인자 : 없음
	반환값    : string -> 자전거 모델 명
*/
string Bicycle::getModelName()
{
	return model_name_;
}

/*
	함수 이름 : Bicycle::isMatched()
	기능	  : 자전거 ID가 같은지 확인
	전달 인자 : string -> 확인하고 싶은 자전거 ID
	반환값    : bool -> 같으면 true, 다르면 false
*/
bool Bicycle::isMatched(string bid)
{
	return bid_ == bid;
}
