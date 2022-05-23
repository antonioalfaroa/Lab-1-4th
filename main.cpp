#include <iostream>
#include <iomanip>

using namespace std;

int main (void){

  string constants = "1066  1492  512  1  -23";
  cout<< fixed << showpoint;
  cout<<right<<setw(40)<<"1066  "<<endl;
  cout<<right<<setw(40)<<"1492  "<<endl;
  cout<<right<<setw(40)<<"512   "<<endl;
  cout<<right<<setw(40)<<"1     "<<endl;
  cout<<right<<setw(40)<<"-23   "<<endl;

  float sum1,sum2, div;
  sum1 = 1066 + 1492;
  sum2 = 512 + 1 + (-23);
  div = sum1/sum2;
  cout<<right<<setw(40)<<"The answer is "<<div<<endl;

  
  cout<<right<<setw(40)<<"23.62  "<<endl;
  cout<<right<<setw(40)<<"46.0   "<<endl;
  cout<<right<<setw(40)<<"43.4443"<<endl;
  cout<<right<<setw(40)<<"100.1  "<<endl;
  cout<<right<<setw(40)<<"98.98  "<<endl;
  float sumt;
  sumt = 23.62+46.0+43.4443+100.1+98.98;
  cout<<right<<setw(40)<<"The sum of the number is :  "<<sumt<<endl;
  
	return 0;
}
