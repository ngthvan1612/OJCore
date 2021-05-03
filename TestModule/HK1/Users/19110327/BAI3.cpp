#include<iostream>
using namespace std;
void Nhap(int A[], int n);
int KiemTra(int A[], int n);

int main()
{
    int A[100];
    int n;
    cin >> n;
    Nhap(A, n);
    cout << KiemTra(A, n);

    return 0;
}
void Nhap(int A[], int n)

{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int KiemTra(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] % 2 == 0 && A[i + 1] % 2 == 0)
        {
            return i+1;
        }
        if (A[i] % 2 == 1 && A[i + 1] % 2 == 1)
        
           return i+1;

    }
    return -1;
}