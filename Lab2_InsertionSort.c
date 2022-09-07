#include <stdio.h>
#include <stdlib.h>                     
#include <time.h>          

int main()
{
    double arr[100];
    int i, j, n,temp, currLoc;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    srand((unsigned int)(time(NULL)));      
    for (i = 0; i < n; i++)
    	 arr[i] = rand();                
        printf("Unsorted Array of size %d\n",n);                       
        for (i = 0; i < n; i++)
        	printf("%lf ", arr[i]);
	for (i=1; i<n; i++){
	    currLoc = i;
	    while (currLoc > 0 && arr[currLoc-1] > arr[currLoc]){
	    temp = arr[currLoc];
					arr[currLoc] = arr[currLoc-1];
					arr[currLoc-1] = temp;
					currLoc--;
	}
    }
    printf("\n Sorted Array of size %d \n", n);
    for (i = 0; i<n; i++)
        printf("%lf ", arr[i]);
    return 0;
}
