#include<stdio.h>
#include <stdlib.h>
//Cho một mảng các số nguyên arr, một nghịch thế trong dãy là một cặp số u, v thảo mãn u<v và a[u] > a[v]. hãy viết hàm đếm số nghịch thế trong mảng arr bằng C
int count_paradox(int arr[], int n){
    int count = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    /*Test case
    {3,2,1} ->3 (correct)
    {4,6,2,9} ->2 (correct)
    {82,12,38,10,15,54, 51,71, 95, 12,1,21,90,10,89,97,42,1,84,92} ->78 (correct)
    {43,99,75,84,32,81,90,7,47,12,6,84,35,39,34,30,40,24,14,54}-> 122 (correct)
    {18,63,85,71,40,12,62,65,7,96,94,27,87,56,73,1,6,26,41,19}-> 111(correct)
    */
    FILE *file = fopen("paradox.txt", "r"); // open file.txt

    if (file == NULL) {
        printf("Không thể mở tệp");
        return 1;
    }

    int maxColumns = 100; //hard code
    int numRows = 0; 
    int a[maxColumns][maxColumns];
    char line[256]; 
    while (fgets(line, sizeof(line), file) != NULL) {
        char *token;
        int numColumns = 0; // cullumn in a row
        token = strtok(line, " "); //separate first number

        while (token != NULL) {
            a[numRows][numColumns] = atoi(token); // string to number
            numColumns++;
            token = strtok(NULL, " "); //separate next number 
        }
        if(numColumns>0){
        printf("%d\t\t",numRows);
        printf("%d\n",count_paradox(a[numRows],numColumns)) ;
        }
        numRows++;
    }

    fclose(file);// close file.txt
    return 0;
}   