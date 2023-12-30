// maxdistance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdbool.h>
bool b[100001];
bool a[1001][1001];
int M = -1;
void dfs(int u, int v, int n, int count) {
    b[u] = false;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] && b[i]) {
            if (i == v) {
                if (count + 1 > M) {
                    M = count + 1;
                    break;
                }
            }
            dfs(i, v, n, count + 1);
            b[i] = true;
        }   
    }
}
int graphFunction(int n, int e[][2], int u, int v)
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
    for (int i = 0; i < (numRow * 2); i++) {
        a[e[i][0]][e[i][1]] = true;
        a[e[i][1]][e[i][0]] = true;
    }
    dfs(u, v, n, 0);
    return M;
}
int main()
{
    int n, u, v;
    n = 6;
    int e[][2] = { {1, 3}, {1, 2}, {2, 3}, {3,4},{2,5},{4,6},{6,5},{4,5} };
    u = 1;
    v = 3;
    int result = graphFunction(n, e, u, v);
    printf("%d", result);

    return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <stdio.h>
#include <stdbool.h>

#define MAX_N 5000

int severity[MAX_N + 1];
bool visited[MAX_N + 1];
bool a[MAX_N + 1][MAX_N + 1];

void dfs(int u, int v, int n) {
    visited[u] = false;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] && visited[i]) {
            if (i == v) {
                visited[v] = true;
            }
            dfs(i, v, n);
            visited[i] = true;
        }
    }
}

void calculateSeverity(int person, int severityIndex) {
    if (severityIndex > severity[person]) {
        severity[person] = severityIndex;
    }
}

bool check(int n, int e[][2], int b[], int u, int v) {
    for (int i = 0; i <= n; i++) {
        visited[i] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = false;
        }
    }
    int numRow = sizeof(e) / sizeof(e[0]);
    for (int i = 0; i < (numRow * 2); i++) {
        a[e[i][0]][e[i][1]] = true;
        a[e[i][1]][e[i][0]] = true;
    }

    dfs(u, v, n);
    return visited[v];
}

int main() {
    int n = 10;
    int e[][2] = { {1, 2}, {1, 3}, {2, 4}, {4, 6}, {2, 8}, {6, 9}, {7, 10} };
    int b[] = { 3, 8, 5 };

    // Initialize severity levels
    for (int i = 0; i < n; i++) {
        severity[i] = 0;  // Default severity
    }

    for (int i = 0; i < n; i++) {
        severity[b[i] - 1] = 10;  // Severity F0
    }

    // Update severity based on contact tracing information
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (check(n, e, b, i, j)) {
                calculateSeverity(j, severity[i] - 5);  // Severity F1
                calculateSeverity(j, severity[i] - 3);  // Severity F2
                calculateSeverity(j, severity[i] - 1);  // Severity F3
            }
        }
    }

    // Create and calculate severity for infectious clusters
    int infectious_clusters[MAX_N];
    int num_clusters = 0;

    for (int i = 0; i < n; i++) {
        if (severity[i] > 0) {
            int cluster_severity = 0;
            for (int j = 0; j < n; j++) {
                if (check(n, e, b, i, j)) {
                    cluster_severity += severity[j];
                }
            }
            infectious_clusters[num_clusters++] = cluster_severity;
        }
    }

    // Sort the infectious_clusters array in descending order
    for (int i = 0; i < num_clusters - 1; i++) {
        for (int j = i + 1; j < num_clusters; j++) {
            if (infectious_clusters[i] < infectious_clusters[j]) {
                int temp = infectious_clusters[i];
                infectious_clusters[i] = infectious_clusters[j];
                infectious_clusters[j] = temp;
            }
        }
    }

    // Print the results
    for (int i = 0; i < num_clusters; i++) {
        printf("%d ", infectious_clusters[i]);
    }
    printf("\n");

    return 0;
}