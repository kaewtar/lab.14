#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N ,double B[])
{
    double x=0 , y=0 , z=1 , a=0, n = A[0] , m = A[0];
     for(int i=0; i < N ; i++)
    {
        x += A[i];
    }
    B[0] = x / N ;
    
    for(int i=0; i < N ; i++)
    {
        y += pow(A[i]-B[0],2);
        z *= A[i];
        a += 1.0/A[i];
        if(A[i] >= m) m = A[i];
        if(A[i] <= n) n = A[i];
    }
    B[1] = sqrt(y/N);
    B[2] = pow(z,1.0/N);
    B[3] = N/a;
    B[4] = m;
    B[5] = n;


   
}