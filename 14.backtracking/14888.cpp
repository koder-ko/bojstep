#include <iostream>
#include <vector>

using namespace std;

int n;

int high = -1000000000;
int low = 1000000000;

vector<int> num;
int op[4];

void cal(int cnt, int cur)
{
    if (cnt == n - 1)
    {
        if (high < cur)
        {
            high = cur;
        }

        if (low > cur)
        {
            low = cur;
        }

        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if(op[i] != 0){
                op[i] -= 1;
                if(i == 0){
                    cal(cnt + 1, cur + num[cnt + 1]);
                }
                else if(i == 1){
                    cal(cnt + 1, cur - num[cnt + 1]);
                }
                else if(i == 2){
                    cal(cnt + 1, cur * num[cnt + 1]);
                }
                else if(i == 3){
                    cal(cnt + 1, cur / num[cnt + 1]);
                }
                op[i] += 1;
            }
        }
    }
}

int main()
{

    ios::sync_with_stdio(false);

    cin >> n;
    int cur;
    for (int i = 0; i < n; i++)
    {
        cin >> cur;
        num.push_back(cur);

    }
    for (int i = 0; i < 4; i++)
    {
        cin >> cur;
        op[i] = cur;
    }

    cal(0, num[0]);

    cout << high << "\n" << low;

    return 0;
}