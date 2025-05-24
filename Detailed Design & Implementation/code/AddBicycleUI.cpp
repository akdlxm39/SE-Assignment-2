#include "AddBicycleUI.h"
#include "AddBicycle.h"
/*
	�Լ� �̸� : AddBicycleUI::AddBicycleUI()
	���	  : ������ (AddBicycle ��ü �ּ� ����)
	���� ���� : AddBicycle* -> AddBicycle�� addNewBicycle() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
AddBicycleUI::AddBicycleUI(AddBicycle* add_bicycle_ptr)
{
	add_bicycle_ptr_ = add_bicycle_ptr;
}

/*
	�Լ� �̸� : AddBicycleUI::getBID()
	���	  : ������ ID�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ������ ID
*/
string AddBicycleUI::getBID()
{
	return bid_;
}

/*
	�Լ� �̸� : AddBicycleUI::getModelName()
	���	  : ������ �𵨸��� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ������ �𵨸�
*/
string AddBicycleUI::getModelName()
{
	return model_name_;
}

/*
	�Լ� �̸� : AddBicycleUI::startInterface()
	���	  : AddBicycleUI ���� (������ ���� �Է� ���, �Է� �� AddBicycleUI::addNewBicycle() �̺�Ʈ �߻�)
	���� ���� : ����
	��ȯ��    : ����
*/
void AddBicycleUI::startInterface()
{
	// cout << "�߰��Ϸ��� �������� ID�� �𵨸��� �Է����ּ���.\n����) b1 bikeMaker\n";
	// cin >> bid_ >> model_name_;
	in_fp >> bid_ >> model_name_;

	addNewBicycle();
}

/*
	�Լ� �̸� : AddBicycleUI::addNewBicycle()
	���	  : �̺�Ʈ �߻� ��, AddBicycle�� addNewBicycle()�� ȣ���Ͽ� �̺�Ʈ�� �߻������� �˸�
				�̺�Ʈ�� ���� ó�� �Ϸ� ��, �߰��� �������� ������ ���
	���� ���� : ����
	��ȯ��    : ����
*/
void AddBicycleUI::addNewBicycle()
{
	add_bicycle_ptr_->addNewBicycle();

	out_fp << "3.1. ������ ���\n";
	out_fp << "> " << bid_ << " " << model_name_ << "\n\n";
}
