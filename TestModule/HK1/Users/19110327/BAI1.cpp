#include<iostream>
using namespace std;
int KiemTra(int x, int y);
int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int x, y, z, t, u, v;
    cin >> x >> y >> z >> t >> u >> v;
    if (KiemTra(x, y) == 1)
    {
        A = A + 3;
    }
    else
    {
        if (KiemTra(x, y) == 0)
        {
            A++;
            B++;
        }
        else
        {
            B = B + 3;
        }

    }
    if (KiemTra(z, t) == 1)
    {
        A = A + 3;
    }
    else
    {
        if (KiemTra(z, t) == 0)
        {
            A++;
            C++;
        }
        else
        {
            C = C + 3;
        }

    }
    if (KiemTra(u, v) == 1)
    {
        B = B + 3;
    }
    else
    {
        if (KiemTra(u,v) == 0)
        {
            B++;
            C++;
        }
        else
        {
            C = C + 3;
        }

    }
    cout << A << " " << B << " " << C;
    return 0;
}
int KiemTra(int x, int y)
{
    if (x == 1 && y == 3)
    {
        return 1;
    }
    else {
        if (x == 3 && y == 2)
        {
            return 1;
        }
        else
        {
            if (x == 2 && y == 1)
            {
                return 1;
            }
            else
            {
                if (x == y)
                {
                    return 0;
                }
                else {
                    return -1;
                }
            }
        }


    }



}