#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> count(N);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        count.at(a - 1)++;
        count.at(b - 1)++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << count.at(i) << endl;
    }
}