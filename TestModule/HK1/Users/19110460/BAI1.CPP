#include<stdio.h>
#include<math.h>

void nhap(int &x , int &y , int &z , int &t , int &u , int &v);
void tinhDiem(int x , int y , int z , int t , int u , int v);

void main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	tinhDiem(x,y,z,t,u,v);
}

void nhap(int &x , int &y , int &z , int &t , int &u , int &v)
{
	scanf("%d%d%d%d%d%d" , &x , &y , &z , &t , &u , &v);
}

void tinhDiem(int x , int y , int z , int t , int u , int v)
{
	int kqA = 0,kqB = 0,kqC = 0;

	//Dau gua  A va B
	if(x==1) // A la keo
	{
		if(y==3) //B la bao
		{
			kqA += 3;
		}
		else if(y==2) // B la bua
		{
			kqB += 3;

		}
		else // B la keo
		{
			kqA += 1;
			kqB += 1;

		}

	}
	else if(x==2) //A la bua
	{
		if(y==3) //B la bao
		{
			kqB += 3;
		}
		else if(y==2) // B la bua
		{
			kqA +=1;
			kqB += 1;

		}
		else // B la keo
		{
			kqA += 3;

		}

	}
	else //A la bao
	{
		if(y==3) //B la bao
		{
			kqA += 1;
			kqB += 1;
		}
		else if(y==2) // B la bua
		{
			kqA += 3;

		}
		else // B la keo
		{
			kqB += 3;

		}
	}

	//Dau giau A va C
	if(z==1) // A la keo
	{
		if(t==3) //B la bao
		{
			kqA += 3;
		}
		else if(t==2) // B la bua
		{
			kqC += 3;

		}
		else // B la keo
		{
			kqA += 1;
			kqC += 1;

		}

	}
	else if(z==2) //A la bua
	{
		if(t==3) //B la bao
		{
			kqC += 3;
		}
		else if(t==2) // B la bua
		{
			kqA +=1;
			kqC += 1;

		}
		else // B la keo
		{
			kqA += 3;

		}

	}
	else //A la bao
	{
		if(t==3) //B la bao
		{
			kqA += 1;
			kqC += 1;
		}
		else if(t==2) // B la bua
		{
			kqA += 3;

		}
		else // B la keo
		{
			kqC += 3;

		}
	}

	//dau giau B va C

	if(u==1) // B la keo
	{
		if(v==3) //B la bao
		{
			kqB += 3;
		}
		else if(v==2) // B la bua
		{
			kqC += 3;

		}
		else // B la keo
		{
			kqB += 1;
			kqC += 1;

		}

	}
	else if(u==2) //B la bua
	{
		if(v==3) //C la bao
		{
			kqC += 3;
		}
		else if(v==2) // C la bua
		{
			kqB +=1;
			kqC += 1;

		}
		else // C la keo
		{
			kqA += 3;

		}

	}
	else //B la bao
	{
		if(v==3) //C la bao
		{
			kqB += 1;
			kqC += 1;
		}
		else if(v==2) // C la bua
		{
			kqB += 3;

		}
		else // C la keo
		{
			kqC += 3;

		}
	}

	printf("%d %d %d" , kqA , kqB , kqC);

}