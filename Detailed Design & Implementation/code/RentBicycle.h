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

	UserManager *user_manager_ptr_; // UserManager ��ü �ּ�

	BicycleCollection *bicycle_collection_ptr_; // BicycleCollection ��ü �ּ�

	RentBicycleUI *rent_bicycle_ui_ptr_; // RentBicycleUI ��ü �ּ�

public:
	RentBicycle(UserManager* user_manager_ptr, BicycleCollection* bicycle_collection_ptr); // ������
	~RentBicycle(); // �ı���

	void run(); // RentBicycle ����
	void rentBicycle(); // �������� �����Ÿ� ã��, ���� �α����� ȸ���� �������� �ϴ� �Լ�

};
#endif
