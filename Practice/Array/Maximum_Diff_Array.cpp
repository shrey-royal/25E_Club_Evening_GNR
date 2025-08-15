#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n];
    int max;
    int min;
    for(int i = 0 ; i < n ; i++){
        cout << " Enter an arr[" << i << "] :";
        cin >> arr[i];
    }
    max = min = arr[0];
    for(int i=0 ; i <n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }else if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Min :" << min << endl;
    cout << "Max :" << max << endl;
    cout << "Maximum Difference :" << max - min;
    return 0 ;
}