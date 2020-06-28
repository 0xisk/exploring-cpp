
#include<iostream>
using namespace std;
double stockCost(int x, int y, int z, int stock);

int main()
{
    int x, y, z, stock;
    double stockVal=0;
    char choice;
    do
    {

        cout<<"\n Enter whole part of stock:";
        cin >>x;
        cout<<"\n Enter Numerator:";
        cin>>y;
        cout<<"\n Enter Denominator:";
        cin>>z;
        cout<<"\n Enter number of stocks:";
        cin>>stock;
        stockVal = stockCost(x,y,z,stock);
        cout<<"\n Cost of single stock: "<< stockVal;
    }   while(choice == 'y'||choice == 'Y');
}


double stockCost(int x, int y, int z, int stock)
{
    double price;
    price=(x * z + y)/(z * stock);
    return price;
}

