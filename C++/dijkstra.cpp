#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class dij
{
private:
    struct path
    {
        int visit;
        int dis;
        int par;
    };
    path *p;
    int n, a[10][10], sou, des;

public:
    dij();
    void read();
    void choice();
    void print(int);
    void display();
};
dij::dij()
{
    cout << "\n  OUTPUT \t";
    cout << "\n DIJKSTRA\n";
    cout << "_____________";
    cout << "\n Enter the number of nodes: ";
    cin >> n;
    cout << "\n Enter the source node :";
    cin >> sou;
    cout << "\n Enter the destination node:";
    cin >> des;
    p = new path[n];
    for (int i = 1; i <= n; i++)
    {
        p[i].visit = 0;
        p[i].dis = 0;
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
}
void dij::read()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                cout << "Enter the values of" << i << "," << j << ":";
                cin >> a[i][j];
            }
        }
    }
}
void dij::choice()
{
    int v = 0, loc;
    p[sou].visit = 1;
    p[sou].dis = 0;
    p[sou].par = 0;
    while (v <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (p[i].visit)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (a[i][j] && !p[j].visit && (p[j].dis > (p[i].dis + a[i][j]) || !p[j].dis))
                    {
                        p[j].dis = p[i].dis + a[i][j];
                        p[j].par = i;
                    }
                }
            }
        }
        int min = 0, flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!p[i].visit && !flag && p[i].dis)
            {
                min = p[i].dis;
                loc = i;
                flag++;
            }
            if (p[i].dis && min > p[i].dis && !p[i].visit)
            {
                min = p[i].dis;
                loc = i;
            }
        }
        p[loc].visit = 1;
        v++;
    }
}
void dij::display()
{
    int i = 1, flag = 0;
    while (i <= n)
    {
        if (p[i].visit && i != sou && i == des)
        {
            cout << "Shortest path from" << sou << "to" << i << "with distance" << p[i].dis << endl;
            print(i);
            cout << i << endl;
            flag++;
        }
        i++;
    }
    if (flag)
        cout << "The node" << des << "is  reachable from the source node " << endl;
}
void dij::print(int i)
{
    if (i != sou)
    {
        i = p[i].par;
        print(i);
        cout << i << "-->";
    }
    else
        return;
}
int main()
{
    dij di;
    di.read();
    di.choice();
    di.display();

    return 0;
}