/*
ب بنویسیدکه پس از خواندن سه عدد و کنترل آنها، با تعریف و اعلان و سه بار صدازدن تابع فاکتوریل، مقدار زیر   را محاسبه کند :
C(n,k)=n!/k! * (n-k)!
*/


#include <stdio.h>
#include <math.h>
#include <iostream>
int factorial(int n)
{
  if(n == 1){
    return 1;
  }
  return n * factorial(n - 1);
}
int main()

{
using namespace std;
int a;
int b;
int i;

cout<<"input number and get the factorial 1 : ";
cin>>a;

cout<<"input number and get the factorial 2 : ";
cin>>b;

cout<<"\na = "<<a<<"!"<<endl;
cout<<"b = "<<b<<"!"<<endl;
cout<<"C(n,k)=n!/k! * (n-k)!"<<endl;
cout <<"Answer: "<<factorial(a) / (factorial(b) * factorial(a - b))<<endl;
cout<<"factorial(a):"<<factorial(a)<<"\tfactorial(b): "<<factorial(b)<<"\nfactorial(a-b): "<<factorial(a-b)<<endl;
}
