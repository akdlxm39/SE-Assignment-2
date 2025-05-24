#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
	�Լ� �̸� : RentBicycleUI::RentBicycleUI()
	���	  : ������ (RentBicycle ��ü �ּ� ����)
	���� ���� : RentBicycle* -> RentBicycle�� rentBicycle() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
RentBicycleUI::RentBicycleUI(RentBicycle* rent_bicycle_ptr)
{
	rent_bicycle_ptr_ = rent_bicycle_ptr;
}

/*
	�Լ� �̸� : RentBicycleUI::getBID()
	���	  : ������ ID�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ������ ID
*/
string RentBicycleUI::getBID()
{
	return bid_;
}

/*
	�Լ� �̸� : RentBicycleUI::setModelName()
	���	  : ������ �𵨸��� ������
	���� ���� : string -> ������ �𵨸�
	��ȯ��    : ����
*/
void RentBicycleUI::setModelName(string model_name)
{
	model_name_ = model_name;
}

/*
	�Լ� �̸� : RentBicycleUI::startInterface()
	���	  : AddBicycleUI ���� (������ ID �Է� ���, �Է� �� RentBicycleUI::selectBicycle() �̺�Ʈ �߻�)
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBicycleUI::startInterface()
{
	// cout << "�������� �������� ID�� �Է����ּ���.\n����) b1\n";
	// cin >> bid_;
	in_fp >> bid_;

	selectBicycle();
}

/*
	�Լ� �̸� : RentBicycleUI::selectBicycle()
	���	  : �̺�Ʈ �߻� ��, RentBicycle�� rentBicycle()�� ȣ���Ͽ� �̺�Ʈ�� �߻������� �˸�
				�̺�Ʈ�� ���� ó�� �Ϸ� ��, ���� �������� ������ ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBicycleUI::selectBicycle()
{
	rent_bicycle_ptr_->rentBicycle();

	out_fp << "4.1. ������ �뿩\n";
	out_fp << "> " << bid_ << " " << model_name_ << "\n\n";
}
