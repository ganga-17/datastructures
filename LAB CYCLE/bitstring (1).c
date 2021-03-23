#include<stdio.h>

void Union(int A1[],int B1[]);
void Intersection(int A1[], int B1[] );
void complement(int A1[], int B1[]);
void Difference(int A1[], int B1[]);
void BitString(int s[]);
int A1[5],B1[5],S[5];
int U[5]={1,2,3,4,5};

int main()
{

  int i=0,j=0;
  int A[]={2,4,5},B[]={1,3,5};
  
  printf("U=");
  for(i=0; i<5; i++)
  {
    printf("%d\t",U[i]);
  } 
  printf("\n");
  
  printf("A=");
  for(i=0; i<3; i++)
  {
    printf("%d\t",A[i]);
  } 
  printf("\n");
  
  printf("B=");
  for(i=0; i<3; i++)
  {
    printf("%d\t",B[i]);
  } 
  printf("\n");
  
  BitString(A); 
  printf("Bit string of A=");
  for(i=0; i<5;i++)
  {
    printf("%d\t",S[i]);
    A1[i]=S[i];
    
  } 
  printf("\n");


  BitString(B); //bit string of B
  printf("Bit string of B=");
  for(i=0; i<5;i++)
  {
    printf("%d\t",S[i]);
    B1[i]=S[i];
  } 
  printf("\n");
  
  Union(A1,B1);
  Intersection(A1,B1);
  complement(A1,B1);
  Difference(A1,B1);
   
   
}

void BitString(int S1[])
{ 
   int i=0,j=0; 
   while(j<5)
   {
      while(i<3)
      {
        if(U[j]!=S1[i])
        {
           S[j]=0;
           j++;
        }
        else 
        {
           S[j]=1;
           i++;
           j++;
        }
      }
   }
} 

void Union(int A1[], int B1[])
{
   int i,C[5];
   
   printf("(bitstring)A U B=\t");
   for(i=0; i<5;i++) 
   {  
      if(A1[i]==B1[i]==1)
        {
          C[i]=1;
          printf("%d\t",C[i]);
        }  
        
      else  
       {
         C[i]=A1[i]+B1[i];
         printf("%d\t",C[i]);
       }  
   }
   printf("\n");
   
   printf("A U B=\t ");
   for(i=0; i<5;i++) 
   {
     if(C[i]==1)
     {
       printf("%d\t",U[i]);
     }
   }
   printf("\n");    
   
   
}   

void Intersection(int A1[], int B1[])
{
   int i,C[5];
   
   printf("(bitstring)A intersection B=");
   for(i=0; i<5;i++)
   {
      C[i]=A1[i]*B1[i];
      printf("%d\t",C[i]);
   }
   printf("\n");
   
   printf("A intersection B=");
   for(i=0; i<5;i++) 
   {
     if(C[i]==1)
     {
       printf("%d\t",U[i]);
     }
   }
   printf("\n");    
   
}     

void complement(int A1[],int B1[])
{
   int i,j;
   printf("A'=\t\t"); 
   for(i=0;i<5;i++)
   {
     if(A1[i]==0)
     {
       S[i]=1;
       printf("%d\t",S[i]);
        
     }
     else
     {
       S[i]=0; 
       printf("%d\t",S[i]);
     }  
   } 
   printf("\n");
   
   printf("B'=\t\t"); 
   for(i=0;i<5;i++)
   {
     if(B1[i]==0)
     {
       S[i]=1;
       printf("%d\t",S[i]);
         
     }
     else
     {
       S[i]=0; 
       printf("%d\t",S[i]);
     }  
   } 
   printf("\n");
   
 
}
     
   void Difference(int A1[],int B1[])
{
   int i,C[5];
   printf("A-B=\t\t"); 
   for(i=0;i<5;i++)
   {
   C[i]=A1[i]*B1[i];
     if(A1[i] == 1 && C[i] == 1)
     {
       A1[i]=0;
       printf("%d\t",A1[i]);
        
     }
     else
     {
       printf("%d\t",A1[i]);
     }  
   } 
   printf("\n");
   
   printf("B-A=\t\t"); 
   for(i=0;i<5;i++)
   {
     if(B1[i]==1 && C[i]==1)
     {
      B1[i]=0;
      printf("%d\t",B1[i]);
        
     }
     else
     {
       printf("%d\t",B1[i]);
     }  
   } 
   printf("\n");
   
 
}
     
   
