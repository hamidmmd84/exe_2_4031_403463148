#include<iostream>
using namespace std;
int main(){
int age;
bool ismember;
cout<<"enter age:";
cin>>age;
cout<<"are you a club member?(1 for yes,0 for no):";
cin>>ismember;

if(age<12){
  cout<<"the price is 10 toman.\n";
}else if(age>=12&&age<18){
if(ismember){
  cout<<"the price is 12 toman.\n";
}else{
  cout<<"the price is 15 toman.\n";
}
}else if(age>=18&&age<=60){
if(ismember){
  cout<<"the price is 20 toman.\n";
}else{
  cout<<"the price is 25 toman.\n";
}
}else{// age>60
  cout<<"the price is 10 toman.\n";
}
return 0;
}




