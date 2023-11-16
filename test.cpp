#include <iostream>
#include <list>

using namespace std;

list<string> questions = {"1+1", "2*2", "20*200"};
list<int> answer = {2, 4, 4000};
list<bool> answers;

int main()
{
    list<string>::iterator it = questions.begin();
    list<int>::iterator it2 = answer.begin();
    int n = questions.size();
    for (int i = 0; i < n; i++) 
    {
        string val = *it;
        int val2 = *it2;
        cout << val << endl;
        int input; 
        cin >> input;
        cout << "\n";
        if (val2 == input)
        {
            answers.push_back(true);
        }else
        {
            answers.push_back(false);
        }
        it++;
        it2++;
    }
    for (int i = 0; i < answers.size();)
    {
        list<bool>::iterator it = answers.begin();
        bool val = *it;
        if (val == true)
        {
            cout << i << "번째 문제는 정답입니다.";
        }else
        {
            cout << i << "번째 문제는 오답입니다.";
        }
        it++;
    }
}