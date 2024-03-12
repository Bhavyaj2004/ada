#include<iostream>
using namespace std;
int binary_search(int A[],int key,int imin,int imax){
    if(imax < imin){
    cout<<"Array is empty";
}
else if(key<imin || key>imax){
    return -1; 
}
else{
   int imid =(imin+imax)/2;
    if(A[imid]> key){
        return binary_search(A,key,imin,imid-1);
    }
    else if(A[imid]<key){
        return binary_search(A,key,imid+1,imax);
    }
    else{
        return imid;
    }
}
}
int main()
{
    cout<<"Name-Bhavya Jain";
    cout<<"Roll no.-43";
 int n,A[4];
 cout<<"enter the elements in your array";
 for(int i=0;i<4;i++){
     cin>>A[i];
 }
 cout<<"Enter the element you want to search";
 cin>>n;
int r= binary_search(A,n,0,4);
    if(r!=-1){
        cout<<"Eleement is prresent on <<r;
            }
    else{
        cout<<"Element is not in array";
            }
 return 0;
}

