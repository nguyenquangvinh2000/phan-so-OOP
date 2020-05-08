#include<iostream>
#include "phanso.h"
using namespace std;

void Phanso::Print()
{
  cout<<tu<<"/"<<mau<<endl;
};
void Phanso::setTu(int t){
  tu=t;
};
void Phanso::setMau(int m){
  if(m!=0)
    mau=m;
  else
    mau=1;

};
int Phanso::getTu(){
  return tu;
};
int Phanso::getMau(){
  return mau;
};