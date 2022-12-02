#include <iostream>
#include<list>
#define size_max 4
using namespace std;


class CarQue{
    public:

    string arr[size_max];
    int fst = 0;
    int lst = -1;

    int enque(string x){
        if(lst>= size_max-1){
            cout<<"Storage Maxed-out"<<endl;
            return 0;
        }
        arr[++lst]=x;
        return 0;
    }


    void printout(){
        for(int i=fst;i<=lst;i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
    string getCarNum(){
        return arr[1];
    }
    string getCounterNum(){
        return arr[3];
    }
    void srch_info(){
        cout<<"Date :"<<arr[0]<<endl;
        cout<<"Car NO: "<<arr[1]<<endl;
        cout<<"Ticket NO: "<<arr[2]<<endl;
        cout<<"Counter : "<<arr[3]<<endl;
    }

};
int main(){
    std::list<CarQue>hvy;
    std::list<CarQue>med;
    std::list<CarQue>lht;

    int hvy_cnt=0;
    int med_cnt=0;
    int lht_cnt=0;


    CarQue a;
    a.enque("22/02/2022");
    a.enque("11");
    a.enque("111");
    a.enque("1");

    hvy.push_front(a);

    CarQue b;
    b.enque("22/02/2022");
    b.enque("22");
    b.enque("222");
    b.enque("1");

    hvy.push_front(b);

   cout<<"---Heavy Car---"<<endl;
   cout<< hvy.empty()<<endl;

     std::list<CarQue>::iterator it;
     string srch_hvy ="11";
     for (it = hvy.begin(); it != hvy.end(); it++)
     {

        string carNum = it->getCarNum();
        it->printout();

        if(carNum==srch_hvy){
             cout<<"---Car Found---"<<endl;
             it->srch_info();
          }
     }



    CarQue c;
    c.enque("22/02/2022");
    c.enque("33");
    c.enque("333");
    c.enque("2");

    med.push_front(c);


    CarQue d;
    d.enque("22/02/2022");
    d.enque("44");
    d.enque("444");
    d.enque("2");

    med.push_front(d);

    cout<<"---Medium Car---"<<endl;
    cout<< med.empty()<<endl;

    string srch_med ="33";
    for (it = med.begin(); it != med.end(); it++)
    {

        string carNum = it->getCarNum();
        it->printout();

        if(carNum==srch_med){
            cout<<"---Car Found---"<<endl;
            it->srch_info();
        }
    }





    CarQue e;
    e.enque("22/02/2022");
    e.enque("55");
    e.enque("555");
    e.enque("3");

    lht.push_front(e);

    CarQue f;
    f.enque("22/02/2022");
    f.enque("66");
    f.enque("666");
    f.enque("3");

    lht.push_front(f);

    cout<<"---Light Car---"<<endl;
    cout<< lht.empty()<<endl;

    string srch_lht="66";
    for (it = lht.begin(); it != lht.end(); it++)
    {

        string carNum = it->getCarNum();
        it->printout();

        if(carNum==srch_lht){
            cout<<"---Car Found---"<<endl;
            it->srch_info();
        }
    }

    cout<<"Number of heavy cars : "<<hvy.size()<<endl;
    cout<<"Number of medium cars : "<<med.size()<<endl;
    cout<<"Number of light cars : "<<lht.size()<<endl;

    int hvyToll=800;
    int medToll=500;
    int lhtToll=300;


    int cnt_cnter1=0;
    int cnt_cnter2=0;
    int cnt_cnter3=0;
    int cnter1_collection=0;
    int cnter2_collection=0;
    int cnter3_collection=0;

    for (it=hvy.begin();it !=hvy.end();it++){
       string cnterNum=it->getCounterNum();
       if(cnterNum=="1"){
            cnt_cnter1++;
            cnter1_collection+=hvyToll;
       }
       else if(cnterNum=="2"){
            cnt_cnter2++;
            cnter2_collection+=hvyToll;

       }
       else if(cnterNum=="3"){
            cnt_cnter3++;
            cnter3_collection+=hvyToll;
       }
       else{
           cout<<"---Error---"<<endl;
       }

    }

    for(it=med.begin();it !=med.end();it++){
        string cnterNum=it->getCounterNum();
        if(cnterNum=="1"){
            cnt_cnter1++;
            cnter1_collection+=medToll;
        }
        else if(cnterNum=="2"){
            cnt_cnter2++;
            cnter2_collection+=medToll;
        }
        else if(cnterNum=="3"){
            cnt_cnter3++;
            cnter3_collection+=medToll;
        }
        else{
            cout<<"---Error---"<<endl;
        }

    }


    for(it=lht.begin();it !=lht.end();it++){
        string cnterNum=it->getCounterNum();
        if(cnterNum=="1"){
            cnt_cnter1++;
            cnter1_collection+=lhtToll;
        }
        else if(cnterNum=="2"){
            cnt_cnter2++;
            cnter2_collection+=lhtToll;
        }
        else if(cnterNum=="3"){
            cnt_cnter3++;
            cnter3_collection+=lhtToll;
        }
        else{
            cout<<"---Error---"<<endl;
        }

    }

    cout<<"Counter-1 Collection[Heavy] : "<<cnter1_collection<<endl;
    cout<<"Counter-2 Collection[Medium]: "<<cnter2_collection<<endl;
    cout<<"Counter-3 Collection[Light] : "<<cnter3_collection<<endl;

    int total=cnter1_collection+cnter2_collection+cnter3_collection;
    cout<<"Total Collection[All]: "<<total<<endl;



    return 0;

}
