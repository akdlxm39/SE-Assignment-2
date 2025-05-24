#include "MemberAccount.h"

/*
	�Լ� �̸� : MemberAccount::MemberAccount()
	���	  : ������ (ȸ�� ������ ����, RentedBicycleCollection ��ü ���� �� �ּ� ����)
	���� ���� : string, string, string -> ID, ��й�ȣ, ��ȭ��ȣ
	��ȯ��    : ����
*/
MemberAccount::MemberAccount(string id, string password, string phone_number)
{
	id_ = id;
	password_ = password;
	phone_number_ = phone_number;
	rented_bicycle_collection_ptr_ = new RentedBicycleCollection();
}

/*
	�Լ� �̸� : MemberAccount::~MemberAccount()
	���	  : �ı��� (RentedBicycleCollection ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
MemberAccount::~MemberAccount()
{
	delete rented_bicycle_collection_ptr_;
}

/*
	�Լ� �̸� : MemberAccount::getID()
	���	  : ID ��ȯ
	���� ���� : ����
	��ȯ��    : string -> ID
*/
string MemberAccount::getID()
{
	return id_;
}

/*
	�Լ� �̸� : MemberAccount::isMatched()
	���	  : ȸ�� ������ ��ġ�ϴ��� Ȯ��
	���� ���� : string, string -> ID, ��й�ȣ
	��ȯ��    : bool -> ��ġ�ϸ� true �ƴϸ� flase
*/
bool MemberAccount::isMatched(string id, string password)
{
	return id_ == id && password_ == password;
}

/*
	�Լ� �̸� : MemberAccount::rent()
	���	  : �����Ÿ� �뿩, RentedBicycleCollection ��ü�� �߰�
	���� ���� : Bicycle* -> �������� �������� ��ü �ּ�
	��ȯ��    : ����
*/
void MemberAccount::rent(Bicycle* bicycle_ptr)
{
	rented_bicycle_collection_ptr_->addBicycle(bicycle_ptr);
}

/*
	�Լ� �̸� : MemberAccount::listAllRentedBicycles()
	���	  : ���� �����Ÿ� ���ȭ, RentedBicycleCollection�� listAllBicycles() ȣ��
	���� ���� : ViewRentedBicyclesUI* -> ���� ������ ����� ������ ��ü�� �ּ�
	��ȯ��    : ����
*/
void MemberAccount::listAllRentedBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr)
{
	rented_bicycle_collection_ptr_->listAllBicycles(view_rented_bicycles_ui_ptr);
}
