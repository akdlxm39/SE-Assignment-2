#ifndef MEMBER_ACCOUNT_COLLECTION_H
#define MEMBER_ACCOUNT_COLLECTION_H

#include <string>

#include "MemberAccount.h"

using namespace std;

#define MAX_NUMBER_OF_MEMBERS 100

class MemberAccountCollection
{
private:

	MemberAccount* member_accounts_[MAX_NUMBER_OF_MEMBERS] = {}; //  ȸ�� ��ü �ּ� �迭, nullptr�� �ʱ�ȭ

	int member_count_ = 0;// ȸ�� ��ü�� ���� ���, 0���� �ʱ�ȭ

public:

	void createNewAccount(string id, string password, string phone_number); // ȸ�� �߰�

	MemberAccount* getMemberAccount(string id, string password); // ���ϴ� ȸ�� ��ü �ּ� ��ȯ

};
#endif
