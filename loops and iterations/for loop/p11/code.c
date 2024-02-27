#include "stdio.h"

void main()
{
	int arr[10][10];
	int i,j=0,k=0,vert=-1,hori=0,limit=10,limit_limit=9,hori_top=1,hori_bot=9,vert_right=9,vert_left=0;
	for(i=1;i<=100;i++)
	{
		switch(k)
			{
				case 0:
				vert ++;
				break;
				case 1:
				hori++;
				break;
				case 2:
				vert--;
				break;
				case 3:
				hori--;
				break;
			}
			
		if(i>limit)
		{
			j++;
			if(k == 3)k = 0;
			else k++;
			switch(k)
			{
				case 0:
				hori = hori_top;
				vert = hori_top;
				hori_top++;
				break;
				case 1:
				vert = vert_right;
				hori = 10 - vert_right;
				vert_right--;
				break;
				case 2:
				hori = hori_bot;
				vert = hori_bot - 1;
				hori_bot--;
				break;
				case 3:
				vert = vert_left;
				hori = 8 - vert_left;
				vert_left++;
				break;
			}
			limit += limit_limit;
			if(j>1){limit_limit--;j=0;}
			
		}
		
		arr[hori][vert]=i;
	}

for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
		if(arr[i][j]<10)printf(" ");
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
}