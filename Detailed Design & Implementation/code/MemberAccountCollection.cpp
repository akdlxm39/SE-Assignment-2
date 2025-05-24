#include "MemberAccountCollection.h"

/*
	�Լ� �̸� : MemberAccountCollection::createNewAccount()
	���	  : ��� �迭�� ��� �߰�
	���� ���� : string, string, string -> ȸ�� ����
	��ȯ��    : ����
*/
void MemberAccountCollection::createNewAccount(string id, string password, string phone_number)
{
	if (member_count_ < MAX_NUMBER_OF_MEMBERS) {
		member_accounts_[member_count_] = new MemberAccount(id, password, phone_number);
		member_count_ += 1;
	}
}

/*
	�Լ� �̸� : MemberAccountCollection::getMemberAccount()
	���	  : ã������ ȸ���� �ش��ϴ� ȸ�� ��ü ��ȯ
	���� ���� : string, string -> ID, ��й�ȣ
	��ȯ��    : MemberAccount* -> ȸ�� ��ü �ּ�
*/
MemberAccount* MemberAccountCollection::getMemberAccount(string id, string password)
{
	for (int i = 0; i < member_count_; i++) {
		if (member_accounts_[i]->isMatched(id, password)) {
			return member_accounts_[i];
		}
	}
	return nullptr;
}
