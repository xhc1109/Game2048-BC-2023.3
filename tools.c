#include "tools.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>



void rand_two(void)
{
	srand(time(NULL));
	if(is_full()) return;
	for(;is_move;)
	{
		int x=rand()%4;
		int y=rand()%4;
		if(0== arr[x][y])
		{
			arr[x][y]=2;
			return;
		}
	}
}

void show_view(void)
{
	system("clear");
	for(int i=0;i<4;i++)
	{
		printf("---------------------\n");
		for(int j=0;j<4;j++)	
		{
			if(arr[i][j])
			{
				printf("|%4d",arr[i][j]);
			}
			else
			{
				printf("|    ");
			}
			
		}
		printf("|\n");
	}
		
	printf("---------------------\n");
	
}
int is_full(void)
{
	for(int i =0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int is_die(void)
{
	if(0==is_full())
	{
		return 0;
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if((arr[i][j]==arr[i][j+1])||(arr[j][i]==arr[j+1][i]))
			{
				return 0;
			}
		}
	}
	return 1;

}
