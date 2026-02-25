#include<stdio.h>
#include<conio.h>

int main () {

    int n, i, arr[100];
    printf("Enter the number of elements (1+100): ");
    scanf ("%d", &n);
    printf("Enter %d elements in the arry:\\n", n);
    for(i = 0; i < n; i++) {
       printf("element _ %d : ", i);
       scanf("%d", arr[i]);
       }
       printf("\\nElements  in the array are: " );
	 for(i = 0; i < n; i++) {
	  printf("%d ", arr[i]);
	  }

       printf("\\n");
       return 0;
       }																																																																																																																																																																																																																																																;
