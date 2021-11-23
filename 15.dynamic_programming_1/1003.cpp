#include <iostream>

using namespace std;
pair<int, int> memory[41];

pair<int, int> fibo(int cur)
{
    if (memory[cur].first != -1)
    {
        return {memory[cur].first, memory[cur].second};
    }
    else if (cur == 0)
    {
        return {1, 0};
    }
    else if (cur == 1)
    {
        return {0, 1};
    }
    else
    {
        pair<int, int> x = fibo(cur - 1);
        pair<int, int> y = fibo(cur - 2);
        memory[cur] = {x.first + y.first, x.second + y.second};
        return memory[cur];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int d, cur;
    cin >> d;

    for (int i = 0; i < 41; i++)
    {
        memory[i].first = -1;
    }

    for (int i = 0; i < d; i++)
    {
        cin >> cur;
        cout << fibo(cur).first << " " << fibo(cur).second;
        if (i != d - 1)
        {
            cout << "\n";
        }
    }
}