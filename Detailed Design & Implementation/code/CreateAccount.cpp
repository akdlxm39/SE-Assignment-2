#include "CreateAccount.h"

/*
	�Լ� �̸� : AddBicycle::AddBicycle()
	���	  : ������ (MemberAccountCollection ��ü �ּ� ����, CreateAccountUI ��ü ���� �G �ּ� ����)
	���� ���� : MemberAccountCollection* -> MemberAccount ��ü�� �߰��ϱ� ���� collection class �ּ�
	��ȯ��    : ����
*/
CreateAccount::CreateAccount(MemberAccountCollection* member_account_collection_ptr)
{
	member_account_collection_ptr_ = member_account_collection_ptr;
	create_account_ui_ptr_ = new CreateAccountUI(this);
}

/*
	�Լ� �̸� : CreateAccount::~CreateAccount()
	���	  : �ı��� (CreateAccountUI ��ü ����)
	���� ���� : ����
	��ȯ��    : ����
*/
CreateAccount::~CreateAccount()
{
	delete create_account_ui_ptr_;
}

/*
	�Լ� �̸� : CreateAccount::run()
	���	  : control ��ü ����, CreateAccountUI::startInterface ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void CreateAccount::run()
{
	create_account_ui_ptr_->startInterface();
}

/*
	�Լ� �̸� : CreateAccount::createNewAccount()
	���	  : CreateAccount ��ü���� id�� password, phone_number�� ���޹޾Ƽ�, MemberAccountCollection::createNewAccount()�� ȣ��
	���� ���� : ����
	��ȯ��    : ����
*/
void CreateAccount::createNewAccount()
{
	string id = create_account_ui_ptr_->getID();
	string password = create_account_ui_ptr_->getPassword();
	string phone_number = create_account_ui_ptr_->getPhoneNumber();

	member_account_collection_ptr_->createNewAccount(id, password, phone_number);
}
