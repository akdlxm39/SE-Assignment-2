#ifndef MEMBER_ACCOUNT_COLLECTION_H
#define MEMBER_ACCOUNT_COLLECTION_H

#include <string>

#include "MemberAccount.h"

using namespace std;

#define MAX_NUMBER_OF_MEMBERS 100

class MemberAccountCollection
{
private:

	MemberAccount* member_accounts_[MAX_NUMBER_OF_MEMBERS] = {}; //  회원 객체 주소 배열, nullptr로 초기화

	int member_count_ = 0;// 회원 객체의 개수 기록, 0으로 초기화

public:

	void createNewAccount(string id, string password, string phone_number); // 회원 추가

	MemberAccount* getMemberAccount(string id, string password); // 원하는 회원 객체 주소 반환

};
#endif
