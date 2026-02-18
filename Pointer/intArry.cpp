#include<iostream>
using namespace std;

int main(){
    int arr[10]={0}; //assign all element as 0

    cout<<"first element of arr: "<<arr[0]<<endl;//garvage value if array is empty
    cout<<"address of arr using pointer: "<<arr<<endl; //by defoult locate 1st index of array
    cout<<"address of arr using & operter: "<<&arr[0]<<endl;//garvage value
    cout<<"*arr: "<<*arr<<endl; //print value of first index 
    //*arr+1 means print value of 2nd location of array and as soon as ...
    
    //******formula*******
    // arr[i]=*(arr+i)
    // i[arr]=*(i+arr)
    //both executin is right

    return 0;
}