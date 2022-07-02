//duplicate elements of an array
#include<stdio.h>

int main()  
{     
    int arr[10],dup[10],i ,j,k,d=0;   
    
	printf("Enter 10 elements:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}   
      
    printf("Duplicate elements in given array: \n");   
    for(i=0;i<10;i++) 
	{  
        for(j=i+1;j<10;j++) 
		{  
            if(arr[i]==arr[j])  
                {	
                	
                    dup[d]=arr[j];
					d++;	
				} 
        }  
    }
	
	for(i=0;i<d;i++){
		printf("%d ",dup[i]);
	}  
    
    
    return 0;  
}  
