#ifndef ADD_BICYCLE_H
#define ADD_BICYCLE_H

#include <string>

#include "AddBicycleUI.h"
#include "BicycleCollection.h"

using namespace std;


class AddBicycle
{
private:

	BicycleCollection* bicycle_collection_ptr_; // BicycleCollection ��ü �ּ�

	AddBicycleUI* add_bicycle_ui_ptr_; // AddBicycleUI ��ü �ּ�


public:

	AddBicycle(BicycleCollection* bicycle_collection_ptr); // ������
	~AddBicycle(); // �ı���

	void run(); // AddBicycle ����
	void addNewBicycle(); // AddBicycleUI���� ������ ������ ���� �޾Ƽ�, BicycleCollection�� addNewBicycle()�� ����

};
#endif
