#include <stdio.h>
void xuat(int a[]);
void main()
{
	int a[10];
	for (int i = 0; i < 6; i++)
		scanf("%d",&a[i]);
	xuat(a);
}

void xuat(int a[])
{
	int diemA = 0,diemB = 0,diemC = 0;
	
	 if (a[0] == a[1])
		{
			diemA+=1;
			diemB+=1;
		}
    else
	{
		if (a[1] == 1 && a[0] == 3)
			diemB += 3;
	
			if (a[0] == 1 && a[1] == 3)
				diemA+=3;

			else{
		 if (a[0] > a[1])
			diemA += 3;
		 else
			 diemB +=3;}
	}
		
    if (a[2] == a[3])
		{
			diemA+=1;
			diemC+=1;
		}
	else
	{
			if (a[3] == 1 && a[2] == 3)
			diemC += 3;
			
			if (a[2] == 1 && a[3] == 3)
			diemA += 3;

			else{
		 if (a[2] > a[3])
			diemA += 3;
		 else 
			 diemC+=3;}

	}
  if (a[4] == a[5])
		{
			diemB++;
			diemC++;
		}
  else
  {
			if (a[5] == 1 && a[4] == 3)
			diemC += 3;
		
				if (a[4] == 1 && a[5] == 3)
			diemB += 3;
				else
				{
		 if (a[4] > a[5])
			diemB += 3;
		 else 
			 diemC +=3;}
  }
		
  
printf("%d %d %d",diemA,diemB,diemC);
}
