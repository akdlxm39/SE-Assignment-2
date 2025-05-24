#include "MemberAccountCollection.h"

/*
	함수 이름 : MemberAccountCollection::createNewAccount()
	기능	  : 멤버 배열에 멤버 추가
	전달 인자 : string, string, string -> 회원 정보
	반환값    : 없음
*/
void MemberAccountCollection::createNewAccount(string id, string password, string phone_number)
{
	if (member_count_ < MAX_NUMBER_OF_MEMBERS) {
		member_accounts_[member_count_] = new MemberAccount(id, password, phone_number);
		member_count_ += 1;
	}
}

/*
	함수 이름 : MemberAccountCollection::getMemberAccount()
	기능	  : 찾으려는 회원에 해당하는 회원 객체 반환
	전달 인자 : string, string -> ID, 비밀번호
	반환값    : MemberAccount* -> 회원 객체 주소
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
