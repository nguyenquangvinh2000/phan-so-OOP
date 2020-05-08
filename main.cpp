//Nguyễn Quang Vinh - A36341
#include<iostream>
#include "phanso.h"
using namespace std;
int main()
{
  Phanso p1,p2;
  p1.setTu(5);
  p1.setMau(10);
  p1.Print();
  
  cout<<"phan so p1 co tu so la:"<<p1.getTu()<<endl;
  cout<<"phan so p1 co mau so la:"<<p1.getMau();
  return 0;
}