#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nums[100]={1,3,5};


    for(int i=0;i<3;i++){
    	printf("%d\t",nums[i] );
    }
    nums[3]=9;
    printf("%d\t",nums[3] );
    for(int i=4; i<30;i++){
    	nums[i]=nums[i-1]*2;
    	printf("%d\t",nums[i]);
    	
    }
}