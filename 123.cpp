#include<stdio.h>
#include<string.h>
 
int main()
{
	//Doan nay thi tu lam huuhu
	char ten[] = "Vo Thi Thu Thuy";
	char date[] = "26-8-2003";
	char T[100] , D[100] ;
	int a, b, size = 15, i;
	printf("Nhap ten cua ban (VD Tran Thi Ngoc Tram) : ");
	gets(T);
	printf("Nhap ngay sinh cua ban (VD 1-9-2003) : ");
	gets(D);
	if (strcmp(ten, T) != 0 || strcmp(date, D) != 0) { 
		while(strcmp(ten, T) != 0 && strcmp(date, D) != 0) 
		{
			printf("\nSai goi :b, nhap lai diii =))\n") ;
			printf("\nNhap ten cua ban (VD Tran Thi Ngoc Tram) : ");
	        gets(T);
	        printf("Nhap ngay sinh cua ban (VD 1-9-2003) : ");
	        gets(D); 
	    }} 
	
	 for(i = 2; i <= 1000; i ++){
	printf("Loading  \n");}
	
	
	
	// Doan nay cop XD
   
    
    
    /* FOR THE APEX OF HEART */
    for (a = size/2; a <= size; a = a+2)
    {
        // FOR SPACE BEFORE PEAK-1 : PART 1
        for (b = 1; b < size-a; b = b+2)        
            printf(" ");
 
        // FOR PRINTING PEAK-1 : PART 2
        for (b = 1; b <= a; b++)
            printf("*");
   
        // FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
        for (b = 1; b <= size-a; b++)
            printf(" ");
         
        // FOR PRINTING PEAK-2 : PART 4
        for (b = 1; b <= a-1; b++)
            printf("*");
 
        printf("\n");
    }
 
    /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
 
    for (a = size; a >= 0; a--)
    {
        // FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5  
        for (b = a; b < size; b++)
            printf(" ");
 
        // FOR PRINTING THE BASE OF TRIANGLE : PART 6
        for (b = 1; b <= ((a * 2) - 1); b++)
            printf("*");
 
        printf("\n");
		  
    } printf("\n        I love you UwU"); 
    return 0;
} 
