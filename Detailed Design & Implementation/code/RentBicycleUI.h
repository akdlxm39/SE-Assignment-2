#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class RentBicycle;

class RentBicycleUI
{
private:

	RentBicycle* rent_bicycle_ptr_; // RentBicycle ��ü �ּ�

	string bid_; // ������ ID
	string model_name_; // ������ �𵨸�

public:
	RentBicycleUI(RentBicycle* rent_bicycle_ptr); // ������

	string getBID(); // ������ ID ��ȯ

	void setModelName(string model_name); // ������ �𵨸� ����

	void startInterface(); // RentBicycleUI ����
	void selectBicycle(); // �������� ������ ID �Է� �̺�Ʈ ó�� �Լ�

};
#endif
