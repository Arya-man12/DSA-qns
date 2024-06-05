#include<iostream>
using namespace std;
void merge(int array[],int const left,int const mid,int const right){
	int const subarr1=mid-left+1;
	int const subarr2=right-mid;
	auto*leftarray=new int[subarr1];
	 auto*rightarray=new int[subarr2];
	    for(auto i=0;i<subarr1;i++){
	    	leftarray[i]=array[left+i];
	    	
		}
		for(auto j=0;j<subarr2;j++){
			rightarray[j]=array[mid+1+j];
		}
		auto indsubarr1=0; 
		auto indsubarr2=0;
		int mergedindex=left;
		while(indsubarr1<subarr1 && indsubarr2<subarr2){
			if(leftarray[indsubarr1]<=rightarray[indsubarr2])
			{
				array[mergedindex]=leftarray[indsubarr1];
				indsubarr1++;
			}
			else{
				array[mergedindex]=rightarray[indsubarr2];
				indsubarr2++;
			}
			mergedindex++;
		}
		while(indsubarr1<subarr1){
			array[mergedindex]=leftarray[indsubarr1];
			indsubarr1++;
			mergedindex++;
		}
		while(indsubarr2<subarr2){
			array[mergedindex]=rightarray[indsubarr2];
			indsubarr2++;
			mergedindex++;
		}
		delete[]leftarray;
		delete[]rightarray;
}
void mergeSort(int array[],int const begin,int const end){
	if(begin>=end)
	     return;
	int mid =begin+(end-begin)/2;
	mergeSort(array,begin,mid);
	mergeSort(array,mid+1,end);
	merge(array,begin,mid,end);
}
void printArray(int A[],int size){
	for(int i=0;i<size;i++)
	  cout<<A[i]<<" ";
	cout<<endl;
}
int main(){
	int arr[]={87,23,56,91,42,18,70,65,33,79};
	int fib[100];
	int n=sizeof(arr)/sizeof(arr[0]);
	fib[0]=1;
	fib[1]=1;
	int sum=0;
	int loc=2;
	while(sum<n){
		sum=fib[loc-2]+ fib[loc-1];
		fib[loc]=sum;
		loc++;
		
	}
	int siz=loc-1;
	int fibo[siz];
	int locat=0;
	for(int i=1;i<siz;i++){
		int x =fib[i]-1;
		fibo[locat]=x;
		locat++;
	}
	siz=siz-1;
	cout<<endl;
	int fib_arr[siz];
	for(int i=0;i<siz;i++){
		int pos =fibo[i];
		fib_arr[i]=arr[pos];
	}
	for(int i=0;i<siz;i++){
		cout<<fib_arr[i]<<endl;
	}
	
	mergeSort(fib_arr,0,siz-1);
		cout<<endl<<"Sorted array"<<endl;
		printArray(fib_arr,siz-1);
		for(int i=0;i<siz;i++){
			int pos=fibo[i];
			arr[pos]=fib_arr[i];
		}
		cout<<"Final Array"<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}