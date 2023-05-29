#include <iostream>
using namespace std;
int main(){
    float area, perimeter, l, b, s, r;
    int n;
    while(1){
        cout<<"\npress\n";
        cout<<"1. area of cirlce\n2. perimeter of square\n3. Area of rectangle\n4. exit the program"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"enter the radius of circle"<<endl;
            cin>>r;
            area = 3.14*r*r;
            cout<<"area of circle is "<<area<<endl;
            break;
        case 2:
            cout<<"enter the side of square "<<endl;
            cin>>s;
            perimeter = 4*s;
            cout<<"perimeter of square is "<<perimeter<<endl;
            break;
        case 3:
            cout<<"enter the length of rectangle "<<endl;
            cin>>l;
            cout<<"enter the breadth of rectangle "<<endl;
            cin>>b;
            area = l*b;
            cout<<"area of rectangle is "<<area<<endl;
            break;
        case 4:
            exit(0);
        default:
            cout<<"sorry wrong input\ntry again"<<endl;
            break;
        }
    }
    return 0;
}