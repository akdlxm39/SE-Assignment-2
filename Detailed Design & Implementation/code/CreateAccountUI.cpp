#include "CreateAccountUI.h"
#include "CreateAccount.h"
/*
	�Լ� �̸� : CreateAccountUI::CreateAccountUI()
	���	  : ������ (CreateAccount ��ü �ּ� ����)
	���� ���� : CreateAccount* -> CreateAccount�� createNewAccount() ȣ���� ���� �ּ�
	��ȯ��    : ����
*/
CreateAccountUI::CreateAccountUI(CreateAccount* create_account_ptr)
{
	create_account_ptr_ = create_account_ptr;
}

/*
	�Լ� �̸� : CreateAccountUI::getID()
	���	  : ID�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ID
*/
string CreateAccountUI::getID()
{
	return id_;
}

/*
	�Լ� �̸� : CreateAccountUI::getPassword()
	���	  : ��й�ȣ�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ��й�ȣ
*/
string CreateAccountUI::getPassword()
{
	return password_;
}

/*
	�Լ� �̸� : CreateAccountUI::getPhoneNumber()
	���	  : ��ȭ��ȣ�� ��ȯ��
	���� ���� : ����
	��ȯ��    : string -> ��ȭ��ȣ
*/
string CreateAccountUI::getPhoneNumber()
{
	return phone_number_;
}

/*
	�Լ� �̸� : CreateAccountUI::startInterface()
	���	  : CreateAccountUI ���� (ȸ�� ���� �Է� ���, �Է� �� CreateAccountUI::createNewAccount() �̺�Ʈ �߻�)
	���� ���� : ����
	��ȯ��    : ����
*/
void CreateAccountUI::startInterface()
{
	// cout << "�����Ϸ��� ȸ���� ID�� ��й�ȣ, ��ȭ��ȣ�� �Է����ּ���.\n����) kim pwdpwd 01011111111\n";
	// cin >> id_ >> password_ >> phone_number_;
	in_fp >> id_ >> password_ >> phone_number_;

	createNewAccount();
}

/*
	�Լ� �̸� : CreateAccountUI::createNewAccount()
	���	  : �̺�Ʈ �߻� ��, CreateAccount�� createNewAccount()�� ȣ���Ͽ� �̺�Ʈ�� �߻������� �˸�
				�̺�Ʈ�� ���� ó�� �Ϸ� ��, ������ ȸ���� ������ ���
	���� ���� : ����
	��ȯ��    : ����
*/
void CreateAccountUI::createNewAccount()
{
	create_account_ptr_->createNewAccount();

	out_fp << "1.1. ȸ������\n";
	out_fp << "> " << id_ << " " << password_ << " " << phone_number_ << "\n\n";
}
