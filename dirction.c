#include "dirction.h"


void up(void)
{	
	for(int y=0;y<4;y++)
	{
		int end=0;
		for(int x=1;x<4;x++)
		{
			for(int i=x;i>end;i--)
			{
				if(arr[i][y]&&0==arr[i-1][y])
				{
					arr[i-1][y]=arr[i][y];
					arr[i][y]=0;
					is_move=1;
				}
				else if(arr[i][y]&&arr[i][y]==arr[i-1][y])
				{
					arr[i-1][y]*=2;
					arr[i][y]=0;
					is_move=1;
					end=i;
				}
			}
		}
	}
}

void down(void)
{
	for(int y=0;y<4;y++)
	{
		int end=3;
		for(int x=2;x>=0;x--)
		{
			for(int i=x;i<end;i++)
			{
				if(arr[i][y]&&0==arr[i+1][y])
				{
					arr[i+1][y]=arr[i][y];
					arr[i][y]=0;
					is_move=1;
				}
				else if(arr[i][y]&&arr[i][y]==arr[i+1][y])
				{
					arr[i+1][y]*=2;
					arr[i][y]=0;
					is_move=1;
					end=i;
				}
			}
		}
	}
}

void right(void)
{
	for(int x=0;x<4;x++)
	{
		int end =3;
		for(int y=2;y>=0;y--)
		{
			for(int i=y;i<end;i++)
			{
				if(arr[x][i]&&0==arr[x][i+1])
				{
					arr[x][i+1]=arr[x][i];
					arr[x][i]=0;
					is_move=1;
				}
				else if(arr[x][i]&&arr[x][i]==arr[x][i+1])
				{
					arr[x][i+1]*=2;
					arr[x][i]=0;
					is_move=1;
					end=i;
				}
			}
		}
	}
}

void left(void)
{
	for(int x=0;x<4;x++)
	{
		int end =0;
		for(int y=1;y<4;y++)
		{
			for(int i=y;i>end;i--)
			{
				if(arr[x][i]&&0==arr[x][i-1])
				{
					arr[x][i-1]=arr[x][i];
					arr[x][i]=0;
					is_move=1;
				}
				else if(arr[x][i]&&arr[x][i]==arr[x][i-1])
				{
					arr[x][i-1]*=2;
					arr[x][i]=0;
					is_move=1;
					end=i;
				}
			}
		}
	}
}
