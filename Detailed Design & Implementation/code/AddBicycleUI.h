#ifndef ADD_BICYCLE_UI_H
#define ADD_BICYCLE_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class AddBicycle;

class AddBicycleUI
{
private:
	AddBicycle* add_bicycle_ptr_; // AddBicycle ��ü�� �ּ�

	string bid_; // �߰��Ϸ��� �������� ID
	string model_name_; // �߰��Ϸ��� �������� �� ��

public:
	AddBicycleUI(AddBicycle* add_bicycle_ptr); // ������

	string getBID(); // ������ ID ��ȯ
	string getModelName(); // ������ �� �� ��ȯ

	void startInterface(); // AddBicycleUI ����
	void addNewBicycle(); // ������ ���� �Է� �̺�Ʈ ó�� �Լ�

};
#endif
