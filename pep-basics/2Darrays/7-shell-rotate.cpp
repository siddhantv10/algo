#include <bits/stdc++.h>
using namespace std;

#define MAX 100

void rotate(int oneD[], int l, int r)
{
    r = r % l;
    while (r < 0)
    {
        r = r + l;
    }

    reverse(oneD, oneD + l - r);
    reverse(oneD + l - r, oneD + l);
    reverse(oneD, oneD + l);
}

void convertToOneD(int a[][MAX], int n, int m, int s, int *oneD)
{
    int minr = s - 1, minc = s - 1;
    int maxr = n - s, maxc = m - s;

    int total = 2 * (maxr - minr) + 2 * (maxc - minc);
    int idx = 0;

    // int oneD[total];

    for (int i = minr, j = minc; i <= maxr; i++)
    {
        oneD[idx] = a[i][j];
        idx++;
    }
    minc++;

    for (int i = maxr, j = minc; j <= maxc; j++)
    {
        oneD[idx] = a[i][j];
        idx++;
    }
    maxr--;

    for (int i = maxr, j = maxc; i >= minr; i--)
    {
        oneD[idx] = a[i][j];
        idx++;
    }
    maxc--;

    for (int i = minr, j = maxc; j >= minc; j--)
    {
        oneD[idx] = a[i][j];
        idx++;
    }

    // return oneD;
}

void fillShellFromOneD(int a[][MAX], int n, int m, int s, int oneD[])
{
    int minr = s - 1, minc = s - 1;
    int maxr = n - s, maxc = m - s;
    int idx = 0;

    for (int i = minr, j = minc; i <= maxr; i++)
    {
        a[i][j] = oneD[idx];
        idx++;
    }
    minc++;

    for (int i = maxr, j = minc; j <= maxc; j++)
    {
        a[i][j] = oneD[idx];
        idx++;
    }
    maxr--;

    for (int i = maxr, j = maxc; i >= minr; i--)
    {
        a[i][j] = oneD[idx];
        idx++;
    }
    maxc--;

    for (int i = minr, j = maxc; j >= minc; j--)
    {
        // oneD[idx] = a[i][j];
        a[i][j] = oneD[idx];
        idx++;
    }
}

void rotateShell(int a[][MAX], int n, int m, int s, int r)
{
    int minr = s - 1, minc = s - 1;
    int maxr = n - s, maxc = m - s;
    int oneDlength = 2 * (maxr - minr) + 2 * (maxc - minc);

    int oneD[oneDlength] = {0};
    convertToOneD(a, n, m, s, oneD);

    // int oneDlength = sizeof(oneD)/sizeof(oneD[0]);
    rotate(oneD, oneDlength, r);

    fillShellFromOneD(a, n, m, s, oneD);
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int r, s;
    cin >> s >> r;

    rotateShell(a, n, m, s, r);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}