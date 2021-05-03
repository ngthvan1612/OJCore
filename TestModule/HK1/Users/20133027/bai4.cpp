#include <stdio.h>
void snt (int m, int n){
	for (int i=0;i<m;i++){
		for (int j=0; j<n; j++){
			if (a[i][j]>2){
				for (int b=2; b<a[i][j]; b++){
					if (a[i][j] %b ==0){
						return false;
					}else
						return true;
				}
			else 
				if (a[i][j]==1 || a[i][j] ==2){
					return true;
			}
			}
		}
	}
}

int main(){
	int m,n;
	int max=0;
	scanf ("%d%d", &m, &n);
	int a[m][n];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			scanf ("%d", &a[m][n]);
		}
	}
	int dem[m];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			if (snt (m,n)==true){
				dem[i]=dem[i]+a[i][j];
			}
		}
	}
	for (int i=0; i<m; i++){
		if (max<dem[i]){
			max=dem[i];
		}
	}
	printf ("%d", max);
			
	return 0;
}