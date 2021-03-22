#include <iostream>

using namespace std;

int main()
{
    char identity[14];

    string gender;
    int age = 0;
    int year = 0;

    bool isIdentyPosible = false;
    string IdentyPosiblity;

    int area = 0;
    string birthArea;

    cout << "주민등록번호를 입력해 주세요 (-, 공백 미포함) : ";
    cin >> identity;
    cout << endl;


    if (identity[12] - 48 == 11 - ((identity[0] - 48) * 2 + (identity[1] - 48) * 3 + (identity[2] - 48) * 4 + (identity[3] - 48) * 5 + (identity[4] - 48) * 6 + (identity[5] - 48) * 7 + (identity[6] - 48) * 8 + (identity[7] - 48) * 9 + (identity[8] - 48) * 2 + (identity[9] - 48) * 3 + (identity[10] - 48) * 4 + (identity[11] - 48) * 5) % 11 % 10)
    {
        IdentyPosiblity = "유효";

        cout << "당신의 주민등록번호 : " << identity << endl;
        cout << endl;
        cout << "주민등록번호유효성 : " << IdentyPosiblity << endl;
        cout << endl;

        cout << "--------- 상세정보 ---------" << endl;

        if (identity[6] % 2 == 1)
        {
            gender = "남자";
        }
        else
        {
            gender = "여자";
        }


        year = (identity[0] - 48) * 10 + identity[1] - 48;
        if (year >= 22)
        {
            year += 1900;
        }
        else
        {
            year += 2000;
        }

        age = 2021 - year;

        area = (identity[7] - 48) * 10 + identity[8] - 48;

        if (area <= 8)
        {
            birthArea = "서울";
        }
        else if (area <= 12)
        {
            birthArea = "부산";
        }
        else if (area <= 15)
        {
            birthArea = "인천";
        }
        else if (area <= 18)
        {
            birthArea = "경기도 주요 도시";
        }
        else if (area <= 25)
        {
            birthArea = "그밖의 경기도";
        }
        else if (area <= 34)
        {
            birthArea = "강원도";
        }
        else if (area <= 39)
        {
            birthArea = "충청북도";
        }
        else if (area <= 47)
        {
            birthArea = "충청남도";
        }
        else if (area <= 54)
        {
            birthArea = "전라북도";
        }
        else if (area <= 66)
        {
            birthArea = "전라남도";
        }
        else if (area <= 90)
        {
            birthArea = "경상도";
        }
        else
        {
            cout << "Error" << endl;
        }

        //cout << "\n성별 : " << gender << endl;
        //cout << "나이 : " << age << endl;
        //cout << "출생연도 : " << year << endl;
        //cout << "출생지역 : " << birthArea;

        cout << "\n성별 : " << gender << "\n나이 : " << age << "\n출생연도 : " << year << "\n출생지역 : " << birthArea << endl;
        cout << endl;
        cout << "----------------------------" << endl;
    }
    else
    {
        IdentyPosiblity = "비유효";

        cout << "당신의 주민등록번호 : " << identity << endl;
        cout << endl;
        cout << "주민등록번호유효성 : " << IdentyPosiblity << endl;
        cout << endl;
        cout << "올바른 주민등록번호로 다시 시도해 주세요.";
        cout << endl;
    }
}