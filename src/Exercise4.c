/*
4. Write a function to check whether a given array is sorted or not.
Return 1 if sorted increasing, -1: decreasing, 0: not sorted
Ex:
______________________________________
| Input: 8 7 9 2 1 5 2               |
| Output: 0                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex4(int arr[], int n){
	//Your codes here
int a,b,c;
c=1;
for(a=0,b=1;a<n-1 && b<n;a++,b++){

	if(arr[a]<arr[b]){
		c*=-1;
	}
	if(arr[a]>arr[b]){
		 c*=2;
	}

}
	if (c==-1 || c==1)
	return 1;
	if (c>2)
	return -1;
	if (c<-1)
	return 0;
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	printf("%d", Ex4(testcase, argc));

	return 0;
}