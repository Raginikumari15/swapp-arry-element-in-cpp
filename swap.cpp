#include <iostream>
using namespace std;
int main(){
  
  int a[4] = {1,2,3,4};
  cout<<"before"<< a[3]<< endl;
  int temp = a[0];
  a[0]=a[3];
  a[3]= temp;
  cout<< a[3];
  
}