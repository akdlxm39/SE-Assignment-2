#include "ViewRentedBicycles.h"

/*
	�Լ� �̸� : ViewRentedBicycles::ViewRentedBicycles()
	���	  : ������ (UserManager ��ü �ּ� ����, ViewRentedBicyclesUI ��ü ���� �G �ּ� ����)
	���� ���� : UserManager* -> ���� �α��ε� MemberAccount�� ��� ���� ��ü �ּ�
	��ȯ��    : ����
*/
ViewRentedBicycles::ViewRentedBicycles(UserManager* user_manager_ptr)
{
	user_manager_ptr_ = user_manager_ptr;
	veiw_rented_bicycles_ui_ptr_ = new ViewRentedBicyclesUI();
}

/*
	�Լ� �̸� : ViewRentedBicycles::~ViewRentedBicycles()
	���	  : �ı��� (ViewRentedBicyclesUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
ViewRentedBicycles::~ViewRentedBicycles()
{
	delete veiw_rented_bicycles_ui_ptr_;
}

/*
	�Լ� �̸� : ViewRentedBicycles::run()
	���	  : control ��ü ����, UserManager ��ü�κ��� ���� �α��ε� MemberAccount�� ��ü �ּҸ� ��ȯ����
				MemberAccount::listAllRentedBicycles()�� ViewRentedBicyclesUI�� �ּҸ� ���ڷ� ȣ��
				ViewRentedBicyclesUI::startInterface() ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void ViewRentedBicycles::run()
{
	MemberAccount* member_account_ptr_ = user_manager_ptr_->getMember();
	member_account_ptr_->listAllRentedBicycles(veiw_rented_bicycles_ui_ptr_);

	veiw_rented_bicycles_ui_ptr_->startInterface();
}
