#include<iostream>
using namespace std;



int main(){
    int numbers[10] = {0};
    int arry[10];

    cout<<"Enter the number of elements :" <<endl;

    for(int i=0; i<10; i++){
        cin >> arry[i];
        numbers[arry[i]]++;
    }
    for(int i=0; i<10; i++){
        if(numbers[arry[i]]!=-1){
            cout << arry[i] << " Occurs = " << numbers[arry[i]] << " Time";
            if(numbers[arry[i]]>1) cout << "s";
            cout << endl;
            numbers[arry[i]] = -1;
        }
    }


    return 0;
}
