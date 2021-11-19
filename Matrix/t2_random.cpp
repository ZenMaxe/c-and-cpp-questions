/*
 سه ماتریس ۳x۳ a,b,c را تعریف کند،
 ماتریس a  را از آخر به اول با اعداد اعشاری پر کند
 ترانهاده a را در b بریزد و چاپ کند
 جمع a و  b   را در c ذخیره و چاپ کند
*/
#include<iostream>
#include<stdlib.h>
#include <cstdlib>
#include<time.h>

using namespace std;


void jam_2_matrix(float matrix_a[3][3],float matrix_b[3][3])
{
  cout.precision(2);
  float matrix_c[3][3];
  std::cout<<"Jam 2 Matrix A,B :"<<"\n";
  for(int x = 0; x < 3; ++x)
   {for(int y = 0; y < 3; ++y)
   {  matrix_c[x][y] = matrix_a[x][y] + matrix_b[x][y];
 }
  }
  for(int x = 0; x < 3; ++x)
  {for(int y = 0; y < 3; ++y)
     std::cout<<matrix_c[x][y]<<'\t';
     std::cout<<"  ";
   std::cout<<'\n';
 }
}


void tranhade(float matrix_a[3][3])
{
  cout.precision(2);
  float matrix_b[3][3];
  std::cout<<"Taranhade Matrix A :"<<"\n";
  for(int x = 0; x < 3; ++x)
  {for(int y = 0; y < 3; ++y)
  {  matrix_b[y][x] = matrix_a[x][y];
 }
  }
for(int x = 0; x < 3; ++x)
  {for(int y = 0; y < 3; ++y)
     std::cout<<matrix_b[x][y]<<'\t';
   std::cout<<'\n';
 }
 jam_2_matrix(matrix_a,matrix_b);
}

int main()
{
 srand(time(NULL));
 int x,y;
 float matrix_a[3][3], matrix_c[3][3];
 
 for( x = 0; x < 3; ++x)
  {for( y = 0;  y < 3; ++y){
      float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
      matrix_a[x][y] = r;
     }
    }
  

  cout.precision(2);
 for( x = 0; x < 3; ++x)
  {for( y = 0; y < 3; ++y)
     std::cout<<matrix_a[x][y]<<'\t';
   std::cout<<'\n';
 }
 tranhade(matrix_a);
 return 0;
}