// dfscheck.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
bool b[100001];
bool a[1001][1001];
bool kt = false;
void dfs(int u, int v, int n) {
    b[u] = false;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] && b[i]) {
            if (i == v) {
                kt = true;
            }
            dfs(i, v, n);
            b[i] = true;
        }
    }
}
bool check(int n, int e[][2], int u, int v)
{
    for (int i = 0; i <= n; i++) {
        b[i] = true;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = false;
        }
    }
    int numRow = sizeof(e) / sizeof(e[0]);
    for (int i = 0; i < (numRow*2); i++) {
        a[e[i][0]][e[i][1]] = true;
    }
    dfs(u, v, n);
    return kt;
}
int main()
{
    int n,u,v;
    n = 3;
    int e[][2] = {{1, 2}, {2, 3}};
    u = 1;
    v = 3;
    if (check(n, e, u, v)) {
        printf("Co duong tu %d toi %d.\n", u, v);
    }
    else {
        printf("Khong có duong di tu %d toi  %d.\n", u, v);
    }
   

    return 0;
    
}

