#include <bits/stdc++.h>
using namespace std;

void spirallyTraverse(int r, int c, vector<vector<int>> matrix)
{
    int minR = 0, minC = 0, maxR = r - 1, maxC = c - 1, i;
    int tcount = r * c, count = 0;

    while (count < tcount)
    {
        for (i = minC; i <= maxC && count < tcount; i++)
        {
            cout << matrix[minR][i] << " ";
            count++;
        }
        minR++;

        for (i = minR; i <= maxR && count < tcount; i++)
        {
            cout << matrix[i][maxC] << " ";
            count++;
        }
        maxC--;

        for (i = maxC; i >= minC && count < tcount; i--)
        {
            cout << matrix[maxR][i] << " ";
            count++;
        }
        maxR--;

        for (i = maxR; i >= minR && count < tcount; i--)
        {
            cout << matrix[i][minC] << " ";
            count++;
        }
        minC++;
    }
}
int main()
{
    int r, c;
    cin >> r;
    cin >> c;

    vector<vector<int>> matrix;

    for (int i = 0; i < r; i++)
    {
        vector<int> tempo;
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin >> temp;
            tempo.push_back(temp);
        }
        matrix.push_back(tempo);
    }

    spirallyTraverse(r, c, matrix);
    return 0;
}
