#include<iostream>
using namespace std;
int binary(int array[],int s,int key){
    int start =0, end=s-1;
    while(start <= end){
        int mid =(start + end)/2;
        if(array[mid]==key){
            return mid;
        } else if(array[mid]<key){
            start =mid+1;
        }else{
            
        mid =mid-1;
        }
    }
    return 0;
}
int main(){
    cout<<"Name-Bhavya Jain";
    cout<<"Roll No.-43";
    int s;
    cout<<"Enter the size of array:";
    cin>>s;
    int array[s];
    cout<<"Enter the array element:";
    for(int i=0;i<s;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the search element:";
    cin>>key;
    cout<<"The index of the search element"<<binary(array,s,key);
    return 0;
}
    
