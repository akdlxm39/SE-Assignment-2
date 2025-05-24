#include "RentBicycle.h"

/*
	�Լ� �̸� : RentBicycle::RentBicycle()
	���	  : ������ (UserManager, BicycleCollection ��ü �ּ� ����, RentBicycleUI ��ü ���� �G �ּ� ����)
	���� ���� : UserManager* -> ���� �α����� ȸ���� ã�� ���� ��ü �ּ�
				BicycleCollection* -> �������� �������� ��ü �ּҸ� ã�� ���� collection Ŭ������ ��ü �ּ�
	��ȯ��    : ����
*/
RentBicycle::RentBicycle(UserManager* user_manager_ptr, BicycleCollection* bicycle_collection_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	bicycle_collection_ptr_ = bicycle_collection_ptr;
	rent_bicycle_ui_ptr_ = new RentBicycleUI(this);
}

/*
	�Լ� �̸� : RentBicycle::~RentBicycle()
	���	  : �ı��� (RentBicycleUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
RentBicycle::~RentBicycle()
{
	delete rent_bicycle_ui_ptr_;
}

/*
	�Լ� �̸� : RentBicycle::run()
	���	  : control ��ü ����, RentBicycleUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBicycle::run()
{
	rent_bicycle_ui_ptr_->startInterface();
}

/*
	�Լ� �̸� : RentBicycle::rentBicycle()
	���	  : RentBicycleUI ��ü���� bid�� ��ȯ�޾Ƽ�, BicycleCollection::getBicycle()�� bid�� ���ڷ� ȣ���Ͽ�, �������� �������� Bicycle ��ü �ּҸ� ��ȯ����
				UserManager::getMember()�� ȣ���Ͽ�, ���� �α����� ����� MemberAccount ��ü �ּҸ� ��ȯ����
				MemberAccount::rent()�� Bicycle ��ü �ּҸ� ���ڷ� ȣ���Ͽ�, ������ �뿩
				Bicycle::getModelName()�� ȣ���Ͽ� �� ���� ��ȯ�޾Ƽ�, RentBicycleUI ��ü���� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void RentBicycle::rentBicycle()
{
	string bid = rent_bicycle_ui_ptr_->getBID();
	Bicycle* bicycle_ptr = bicycle_collection_ptr_->getBicycle(bid);

	MemberAccount* member_acccount_ptr = user_manager_ptr_->getMember();
	member_acccount_ptr->rent(bicycle_ptr);

	string model_name = bicycle_ptr->getModelName();
	rent_bicycle_ui_ptr_->setModelName(model_name);
}
