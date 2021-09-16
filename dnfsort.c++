#include<bits/stdc++.h>
using namespace std;

void dnfsort(int arr[],int n){
    int low = 0;
    int mid = 1;
    int high = 2;

    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low],arr[mid]);
                low++;
                mid++;
                break;

            
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[low],arr[high]);
                high--;
                break;



        }
    }

}
int main(){

    int arr[]={0,1,1,0,1,2,1,2,0,0,0,1};
    dnfsort(arr,12);
    for(int i=0;i<12;i++){

        cout<<arr[i]<<" ";

    }





    
    return 0;
}
