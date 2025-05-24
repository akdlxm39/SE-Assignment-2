#include "main.h"
#include "fileio.h"

using namespace std;

// 변수 선언
ifstream in_fp;
ofstream out_fp;

// 함수 선언
void startSystem();

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
    UserManager* user_manager = new UserManager(member_accounts);
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
                CreateAccount* create_account_ctrl = new CreateAccount(member_accounts);
                create_account_ctrl->run();
                delete create_account_ctrl;
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                LogIn* log_in_ctrl = new LogIn(user_manager);
                log_in_ctrl->run();
                delete log_in_ctrl;
                break;
            }
            case 2:
            {
                LogOut* log_out_ctrl = new LogOut(user_manager);
                log_out_ctrl->run();
                delete log_out_ctrl;
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                AddBicycle* add_bicycle_ctrl = new AddBicycle(bicycles);
                add_bicycle_ctrl->run();
                delete add_bicycle_ctrl;
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                RentBicycle* rent_bicycle_ctrl = new RentBicycle(user_manager, bicycles);
                rent_bicycle_ctrl->run();
                delete rent_bicycle_ctrl;
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                ViewRentedBicycles* view_rented_bicycles_ctrl = new ViewRentedBicycles(user_manager);
                view_rented_bicycles_ctrl->run();
                delete view_rented_bicycles_ctrl;
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                ProgramExit* program_exit_ctrl = new ProgramExit(&is_program_exit);
                program_exit_ctrl->run();
                delete program_exit_ctrl;
                break;
            }
            }
            break;
        }
        }
    }
}