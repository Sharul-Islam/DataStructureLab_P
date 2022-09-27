#include<iostream>

using namespace std;


int main()
{
   int array1[10], array2[10], common[10];
   int i,p,m=0;
   int sizeone, sizetwo, x, tnt=0;
   cout<<"Enter the size of first array (maximum 10): ";
   cin>>sizeone;
   cout<<"Enter "<<sizeone<<" Elements of first array: ";
   for(i=0; i<sizeone; i++)
      cin>>array1[i];
   cout<<"Enter the size of second array (max.10): ";
   cin>>sizetwo;
   cout<<"Enter "<<sizetwo<<" Elements for second array: ";
   for(i=0; i<sizetwo; i++)
      cin>>array2[i];
   for(i=0; i<sizeone; i++)
   {
      for(p=0; p<sizetwo; p++)
      {
         if(array1[i]==array2[p])
         {
            tnt = 0;
            for(x=0; x<m; x++)
            {
               if(array1[i]==common[x])
                  tnt++;
            }
            if(tnt==0)
            {
               common[m] = array1[i];
               m++;
            }
         }
      }
   }
   if(m==0)
      cout<<"No common elements!";
   else
   {
      cout<<"Here are all "<<m<<" Common elements:";
      for(i=0; i<m; i++)
         cout<<common[i]<<" ";
   }
   cout<<endl;
   return 0;

}



