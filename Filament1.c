#include <stdio.h>
 
main()
{
     char m1[1000],m2[1000];  
   
    printf("Enter the palindrome =");
    gets(m1);
    strcpy(m2,m1);
    strrev(m2);
    if(!strcmp(m1,m2))
   	{
		   printf("yes,This is palindrome");
 	}
 	    
    else
	{
		
        printf("No, This is not palindrome");
    }
    
    
    
    
}
