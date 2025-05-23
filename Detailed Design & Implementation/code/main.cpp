#include "main.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



// 함수 선언
void startSystem();

// 변수 선언
ifstream in_fp;
ofstream out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    startSystem();

    out_fp.close();
    in_fp.close();

    return 0;
}

void startSystem()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    MemberAccountCollection* member_accounts = new MemberAccountCollection();
    UserManager* user_manager = new UserManager();
    BicycleCollection* bicycles = new BicycleCollection();

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
            {
                CreateAccount* createAccount = new CreateAccount(member_accounts);
                createAccount->run();
                delete createAccount;
                break;
            }
            case 2:
            {
                break;
            }
            }
        }
    }
}