#include<iostream>
#include<string.h>
using namespace std;

class Student {
  public:
    string name;
    string id;
    float cgpa;
};

int main(){
  Student stu1;
  stu1.name = "Sharul Islam";
  stu1.id = "22-46327-1";
  stu1.cgpa = 3.25;

  Student stu2;
  stu2.name = "Hasebul Islam";
  stu2.id = "21-46325-1";
  stu2.cgpa = 3.65;

  Student stu3;
  stu3.name = "Nahidul Islam";
  stu3.id = "22-46333-1";
  stu3.cgpa = 3.95;

  Student stu4;
  stu4.name =" Monjurul Islam";
  stu4.id = "20-46325-1";
  stu4.cgpa = 3.55;

  Student stu5;
  stu5.name =" Monjurul Islam";
  stu5.id = "19-46325-1";
  stu5.cgpa = 3.50;

  float arr[5]={3.25,3.65,3.95,3.55,3.50};
  int min_index =0;
  int temp=0;
  for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"<==============================>"<<endl;

    for(int i=0; i<5; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
 for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
  cout<<endl;

    return 0;
}




