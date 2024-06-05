#include<iostream> 
using namespace std; 
int main(){ 
int grade[5]={75,90,60,80,85}; 
int age[5]={20,22,19,21,20}; 
string name[5]={"John","Mary","Alex","Jane","Mark"}; 
for(int i=0;i<4;i++){ 
for(int j=0;j<4;j++){ 
if(grade[j]>grade[j+1]){ 
grade[j]=grade[j+1]; 
grade[j+1]=temp; 
int t2=age[j]; 
age[j]=age[j+1]; 
age[j+1]=t2; 
string t3=name[j]; 
name[j]=name[j+1]; 
name[j+1]=t3; 
} 
int temp=grade[j]; 
} 
} 
cout<<"Name"<<" "<<"Grade"<<"  "<<"Age"<<endl; 
for(int k=0;k<5;k++){ 
cout<<name[k]<<" "<<grade[k]<<"  "<<age[k]<<"\n"; 
} 
return 0; 
}