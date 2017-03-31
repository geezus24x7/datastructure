/*
TASK: Print all N integers in A in reverse order as a single line of space-separated integers.

Input: 
4
1 4 3 2

Output:
2 3 4 1
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
	for (int j=n-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}
