#include<iostream>
using namespace std;

int partition(int a[] , int  l , int h){
    int pivot = a[l];
    int i = l;
    int j = h; 
     do{
        do{ i++; }while(a[i] < pivot); 
        do{ j--; }while(a[j] > pivot);
        if(i<j) swap(a[i] , a[j]);
     }while(i<j);

     swap(a[l] , a[j]);

    return j;
}

void quicksort( int a[] , int l , int h){
    {
        int j;
        if(l<h){
            j = partition( a , l , h );
            quicksort( a , l , j);
            quicksort( a , j+1 , h);
        }
    }
}
int main(){
    int n , a[10];
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter the value of elements : ";
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    a[n] = INT_MAX;
    quicksort(a , 0 , n);
  
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<"__";
    }
    
    return 0;
}