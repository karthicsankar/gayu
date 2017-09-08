#include<stdio.h> 
int hcf(int x,int y); 
void main() 
{ 
    int i,j,k; 
    clrscr(); 
    printf("Enter 2 Numbers : "); 
    scanf("%d%d",&i,&j); 
    if(i>j) 
      { 
           k=hcf(i,j); 
      } 
    else 
     { 
           k= hcf(i,j); 
     } 
           printf("HCF is= %d",k); 
           getch(); 
} 
    int hcf(int a,int b) 
    { 
       int r=1; 
       while(r!=0) 
          { 
               r=a%b; 
               a=b; 
               b=r; 
          } 
               return(a); 
    }  
