// // #include <bits/stdc++.h>
// // using namespace std  ;
// // int linearsearch(int arr[],int n , int  key){
// //     for(int i  = 0;i<n;i++){
// //         if(arr[i]==key){
// //             return i;
// //         }
// //         return  -1;
// //     }
// // }
// // int main(){
// //     int n ;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     int key;
// //     cin>>key;
// //     cout<<linearsearch(arr ,n ,key);
// //     return  0;

// // }
// #include <bits/stdc++.h>
// using namespace std;
// int binsearch( int arr[] ; int n ; int key){

// }
// int main(){
//     int n; 
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
#include <bits/stdc++.h>
using namespace std  ;

int binsearch(int arr[],int n ,int key){
    int s= 0;
    int e = n;
    
    while(e>=s){


        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            e  = mid -1;
            
            
        }
        else{
            s= mid +1;
        }
    
    
    }
    return -1; 
    
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    int key ;
    cin>>key ;
    cout<<binsearch(arr , n , key);
    return 0;
    
}
