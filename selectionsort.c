#include<iostream> 
using namespace std; 
int main(){ 
  string gender[5]={"Male","Female","Male","Female","Male"}; 
  int age[5]={25,31,19,27,21}; 
 string name[5]={"John","Mary","Alex","Jane","Mark"}; 
    int i, j, min; 
    for (i = 0; i <4; i++) { 
        min = i; 
        for (j = i + 1; j < 5; j++) { 
            if (age[j] < age[min]){ 
    
                min = j; 
        } 
        if (min!= i){ 
  int temp=age[min]; 
 age[min]=age[i]; 
 age[i]=temp; 
 string temp2=gender[min]; 
gender[min]=gender[i]; 
gender[i]=temp2; 
string temp3=name[min]; 
name[min]=name[i]; 
name[i]=temp3; 
} 
}} 
cout<<"Name"<<" "<<"Age"<<"  "<<"Gender"<<endl; 
for(int k=0;k<5;k++){ 
cout<<name[k]<<" "<<age[k]<<"  "<<gender[k]<<"\n"; 
} 
return 0; 
}