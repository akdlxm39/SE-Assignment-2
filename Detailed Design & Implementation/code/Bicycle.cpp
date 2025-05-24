#include "Bicycle.h"

/*
	�Լ� �̸� : Bicycle::Bicycle()
	���	  : ������ (������ ���� ����)
	���� ���� : string, string -> ������ ID, ������ �� ��
	��ȯ��    : ����
*/
Bicycle::Bicycle(string bid, string model_name)
{
	bid_ = bid;
	model_name_ = model_name;
}

/*
	�Լ� �̸� : Bicycle::getBID()
	���	  : ������ ID ��ȯ
	���� ���� : ����
	��ȯ��    : string -> ������ ID
*/
string Bicycle::getBID()
{
	return bid_;
}

/*
	�Լ� �̸� : Bicycle::getModelName()
	���	  : ������ �� �� ��ȯ
	���� ���� : ����
	��ȯ��    : string -> ������ �� ��
*/
string Bicycle::getModelName()
{
	return model_name_;
}

/*
	�Լ� �̸� : Bicycle::isMatched()
	���	  : ������ ID�� ������ Ȯ��
	���� ���� : string -> Ȯ���ϰ� ���� ������ ID
	��ȯ��    : bool -> ������ true, �ٸ��� false
*/
bool Bicycle::isMatched(string bid)
{
	return bid_ == bid;
}
