#include <iostream>
#include <list>

using namespace std;

list<string> strings;

int main()
{
    cout << "~을 입력해주세요...\n['END'를 입력할시 종료됩니다.]\n\n";
    for (;;)
    {
        string input;
        cin >> input;
        if ("end" == input || "END" == input)
        {
            int n = strings.size();
            list<string>::iterator it = strings.begin();
            cout << "\n\n저장된 입력값들 : ";
            for (int i = 0; i < n; i++)
            {
                string val = *it;
                cout << val << ", ";
                it++;
            }
            break;
        }else
        {
            strings.push_back(input);
            continue;
        }
    }
}
