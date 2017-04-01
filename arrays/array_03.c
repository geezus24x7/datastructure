/*

 * array_03.c
 *
 *  TASK: Given an array of N integers and a number D, , perform D left rotations on the array.
 *        Then print the updated array as a single line of space-separated integers
 *
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d,k,eff;
    scanf("%d %d",&n,&d);
    int *arr = malloc(n * sizeof(int));
    int *arr_2 = malloc(n * sizeof(int));

    /* Reading the array */
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // Updating the array
    for (int i=0;i<n;i++){
            arr_2[(i+n-d)%n] = arr[i];
    }
    // Printing updated array
	for (int i=0;i<n;i++){
		printf("%d ",arr_2[i]);
	}
    return 0;
}

