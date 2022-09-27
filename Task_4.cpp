#include <iostream>
using namespace std;
int count(int num, int arry[], int lgth)
{
    int counter = 0;
    for(int i = 0; i < lgth; i++)
        if(arry[i] == num)
            counter++;
    return counter;
}

int main()
{
    int nums[10];
    int i;
    int sizeone;
    cout<<"Enter size of first array (Maximum 10): ";
   cin>>sizeone;
   cout<<"Enter "<<sizeone<<" Elements for first array: ";
   for(i=0; i<sizeone; i++)
      cin>>nums[i];
    int Input_a_number_to_search = 6;
    cout <<Input_a_number_to_search << " Occurs "
              << count(Input_a_number_to_search, nums, 10)
              << " Times in the array.";
    return 0;
}

