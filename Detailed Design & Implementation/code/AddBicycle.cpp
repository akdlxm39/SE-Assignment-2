#include "AddBicycle.h"

/*
	�Լ� �̸� : AddBicycle::AddBicycle()
	���	  : ������ (BicycleCollection ��ü �ּ� ����, AddBicycleUI ��ü ���� �G �ּ� ����)
	���� ���� : BicycleCollection* -> Bicycle ��ü�� �߰��ϱ� ���� collection class �ּ�
	��ȯ��    : ����
*/
AddBicycle::AddBicycle(BicycleCollection* bicycle_collection_ptr)
{
	bicycle_collection_ptr_ = bicycle_collection_ptr;
	add_bicycle_ui_ptr_ = new AddBicycleUI(this);
}

/*
	�Լ� �̸� : AddBicycle::~AddBicycle()
	���	  : �ı��� (AddBicycleUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
AddBicycle::~AddBicycle()
{
	delete add_bicycle_ui_ptr_;
}

/*
	�Լ� �̸� : AddBicycle::run()
	���	  : control ��ü ����, AddBicycleUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void AddBicycle::run()
{
	add_bicycle_ui_ptr_->startInterface();
}

/*
	�Լ� �̸� : AddBicycle::addNewBicycle()
	���	  : AddBicycleUI ��ü���� bid�� model_name�� ���޹޾Ƽ�, BicycleCollection::addNewBicycle()�� ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void AddBicycle::addNewBicycle()
{
	string bid = add_bicycle_ui_ptr_->getBID();
	string model_name = add_bicycle_ui_ptr_->getModelName();
	bicycle_collection_ptr_->addNewBicycle(bid, model_name);
}
