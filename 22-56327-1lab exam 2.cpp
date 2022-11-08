#include <iostream>
#include <string>
using namespace std;

class product {
public:
string pName;
int pId;
string pCat;
int uPrice;
};

int main()
{
int i,j;
product temp;
product arr[5];

arr[0].pName = "Tea";
arr[0].pId = 2001;
arr[0].pCat ="Food";
arr[0].uPrice = 100;

arr[1].pName ="Coffee";
arr[1].pId = 2002;
arr[1].pCat = "Food";
arr[1].uPrice = 256;

arr[2].pName = "Milk";
arr[2].pId = 2003;
arr[2].pCat = "Food";
arr[2].uPrice = 42;

arr[3].pName = "Cocacola";
arr[3].pId = 2004;
arr[3].pCat = "Drink";
arr[3].uPrice = 25;

arr[4].pName = "Wiseman Sunglass";
arr[4].pId = 2005;
arr[4].pCat = "Wearing";
arr[4].uPrice = 1300;

int button;
cout << "1.Bubble Sort: " << endl;
cout << "2.Selection Sort: " << endl;
cout << "3.Seacrh Product";
cout << " Select : ";

cin>>button;

switch (button) {
case 1:
cout <<"Bubble Sort";

for (i = 0; i < 5; i++) {
for (j = 0; j < 5 - i - 1; j++) {
if (arr[j].uPrice > arr[j + 1].uPrice) {
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}

cout << "Sorted list of products : " << endl;
for (i = 0; i < 5; i++) {
cout<< arr[i].pName << "//" << arr[i].pId << "//" << arr[i].pCat << "//" << arr[i].uPrice << "//" << endl;
}

break;
case 2:

 cout<<"Selection Sort";

 for(int i=0;i<5;i++)
{
    int minIndex =1;
    for(int j=i+1;j<5;j++)
    {
    if(arr[minIndex].uPrice>arr[j].uPrice)
    {
    minIndex=j;


    }
    temp=arr[minIndex];
    arr[minIndex]=arr[i];
    arr[i]=temp;

    }
    cout<< arr[i].pName << "//" << arr[i].pId << "//" << arr[i].pCat << "//" << arr[i].uPrice << "//"<<endl;

}

}
}
return 0;
}
























case 2:

cout<<"Selection sort";

for(int i=0;i<5;i++)
{
    int min_index =1;
    for(int j=i+1;j<5;j++)
    {
    if(arr[min_index].uPrice.>arr[j].uPrice)
    {
    min_index=j;


    }
    temp=arr[min_index];
    arr[min_index]=arr[i];
    arr[i]=temp;

    }
    cout<<arr[i].pName << "//" << arr[i].pId << "//" << arr[i].pCat << "//" << arr[i].uPrice << "//" << endl;

}


return 0;
}
