// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class StackQueue
{
private:
    stack<int> s1;
    stack<int> s2;

public:
    void push(int);
    int pop();
};

void StackQueue ::push(int x)
{
    s1.push(x);
}

int StackQueue ::pop()
{
    if (s1.empty())
    {
        return -1;
    }

    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    int ans = s2.top();
    s2.pop();
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }

    return ans;
}