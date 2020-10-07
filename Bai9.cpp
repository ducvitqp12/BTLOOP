#include<stdio.h>
#include<iostream>

using namespace std;

int A[1000];

void show(int i, int n){
    for(int k=i; k<n ; k++){
	for(int j=i; j<=k; j++) {
	if(j!=k ) {printf("%d ", A[j]); }else printf("%d \n", A[j]);}

}}
int main()
{
	
	int n,i,j;
	cin>>n;
	for(i=0; i<n ; i++) cin>>A[i];
	for(i=0; i<n ; i++) {
	show(i , n);
}
        return 0;
}
