#include<iostream>
using namespace std;

void Merge( int A[], int low , int mid , int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[100];

    while( i <= mid && j <= high){
        if(A[i] < A [j]) B[k++] = A[i++];
        else    B[k++] = A[j++];
    }
    for(; i <=mid ; i++)    B[k++] = A[i];
    for(; j <=high ; j++)   B[k++] = A[j];

    for(i = low ; i <=high ; i++  ) A[i] = B[i];
}
void IMergeSort( int A[] , int n){
    int p;
    for( p = 2 ; p <= n ; p*=2 ){
        for( int i = 0 ; i+p-1 <= n ; i+=p ){
            int low = i;
            int high = i+p-1;
            int mid = ( low + high)/2;
            Merge(A, low, mid, high);
        }
    }
    if((p/2) <n) Merge(A, 0 ,p/2-1, n);
}
int main(){
     int temp;
     int A[] = {8 ,3 , 7, 4, 9 ,2, 6, 5,1,10};

    cout<<"Before Sorting: ";
    for(int i = 0; i < 10 ; i++){
         cout<<A[i]<<"__";
     }
     
    cout<<"\nAfter Sorting: ";
    IMergeSort(A, 10);    
    for(int i = 0; i < 10 ; i++){
         cout<<A[i]<<"__";
     }
     return 0;
 }