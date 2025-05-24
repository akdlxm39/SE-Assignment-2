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

	string id_; // ȸ���� ID
	string password_; // ȸ���� ��й�ȣ
	string phone_number_; // ȸ���� ��ȭ��ȣ

	RentedBicycleCollection* rented_bicycle_collection_ptr_; // ȸ���� ���� �����ŵ��� �����ϴ� ��ü �ּ�

public:

	MemberAccount(string id, string password, string phone_number); // ������
	~MemberAccount(); // �ı���

	string getID(); // ID ��ȯ

	bool isMatched(string id, string password); // ȸ�� ������ ��ġ�ϴ� �� Ȯ��

	void rent(Bicycle* bicycle_ptr); // �����Ÿ� ������ �Լ�

	void listAllRentedBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr); // ���� ���� ��� �����Ÿ� ���ȭ�ϴ� �Լ�

};
#endif
