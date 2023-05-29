#include<iostream>
using namespace std;

class employee {
    string name;
    int id;
    int age;
public:
    void getdata(){
        cout<<"enter the name of the employee"<<endl;
        cin>>name;
        cout<<"enter the age of the employee"<<endl;
        cin>>age;
        cout<<"enter the age of the employee"<<endl;
        cin>>id;
    }
    void putdata(){
        cout<<"name of the employee: "<<name<<endl;
        cout<<"age of the employee: "<<age<<endl;
        cout<<"id of the employee: "<<id<<endl;
    }
};
int main(){
    employee emp[3];
    int i;
    for(i = 0; i < 3; i++){
        emp[i].getdata();
    }
    for(i = 0; i < 3; i++){
        emp[i].putdata();
    }
}