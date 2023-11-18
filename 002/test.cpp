#include <iostream>
#include <list>

using namespace std;

list<string> strings;

int main()
{
    cout << "~을 입력해주세요...\n['END'를 입력할시 종료됩니다.]\n\n";
    while (true)
    {
        string input;
        cin >> input;
        if ("end" != input || "END" != input)
        {
            strings.push_back(input);
            continue;
        }else if ("end" == input || "END" == input)
        {
            int n = strings.size();
            list<string>::iterator it = strings.begin();
            for (int i = 0; i < n; i++)
            {
                string val = *it;
                cout << "\n\n" << val << " ";
                it++;
            }
            break;
        }
    }
}
