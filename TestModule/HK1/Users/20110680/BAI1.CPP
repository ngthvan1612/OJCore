#include <stdio.h>
int kiemtra(int x, int y);
void main()
{
	int diema = 0, diemb = 0, diemc = 0, a[100];
	//scanf("%d%d%d%d%d%d", &x,&y,&z,&t,&u, &v);
	for(int i = 1; i <= 6; i++) scanf("%d", &a[i]);
	for (i = 1; i <= 5; i = i +2)
	{
		if (i == 1) 
		{
			diema = kiemtra(a[i], a[i+1]) + diema;
			if (kiemtra(a[i], a[i+1]) == 1) diemb = diemb +1;
			else if (kiemtra(a[i], a[i+1]) == 0) diemb = diemb +3;
		}
		if (i == 3) 
		{
			diema = kiemtra(a[i], a[i+1]) + diema;
			if (kiemtra(a[i], a[i+1]) == 1) diemc = diemc +1;
			else if (kiemtra(a[i], a[i+1]) == 0) diemc = diemc +3;
		}
		if (i == 5) 
		{
			diemb = kiemtra(a[i], a[i+1]) + diemb;
			if (kiemtra(a[i], a[i+1]) == 1) diemc = diemc +1;
			else if(kiemtra(a[i], a[i+1]) == 0) diemc = diemc +3;
		}
	} 
	printf("%d %d %d", diema, diemb, diemc);


}
int kiemtra(int x, int y)
{
	if (((x == 1) && (y == 3)) || ((x == 3) && ( y ==2))) return 3;
	else if (((x == 1) && (y == 2)) || ((x == 2) && (y == 3))) return 0;
	else if (x == y) return 1; 
}
