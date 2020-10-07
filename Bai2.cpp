#include <iostream>
using namespace std;

int main()
{
	int n;
    int** a;
    int** b;
    int** c;
    int** d;
    
    cin>>n;
    a = new int*[n];
    b = new int*[n];
    c = new int*[n];
    d = new int*[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[n];
    for(int i = 0; i < n; i++)
        b[i] = new int[n];
    for(int i = 0; i < n; i++)
        c[i] = new int[n];
	for(int i = 0; i < n; i++)
        d[i] = new int[n];        
    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>a[i][j] ;
        }
    }
    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>b[i][j] ;
        }
    }
    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j]=a[i][j]+b[i][j] ;
        }
}
    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j < n; j++)
        {
        	d[i][j]=0;
            for(int k=0; k<n; k++)
                d[i][j] += a[i][k]*b[k][j]; 
        }
}  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++)
    {
        delete[] a[i];
    }

    delete[] a;
    return 0;
}
