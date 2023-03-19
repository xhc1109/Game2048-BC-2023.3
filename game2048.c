#include "game2048.h"
#include "dirction.h"
#include "tools.h"
#include <stdio.h>
#include <getch.h>
#include <stdlib.h>
int is_move=1;
int *arr[4];
void init(void)
{
	for(int i=0;i<4;i++)
	{
		arr[i]=malloc(sizeof(int)*4);	
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			arr[i][j]=0;	
		}
	}
}
void start(void)
{
	for(;;)
	{
		rand_two();
		show_view();
		int dir=getch();
		is_move=0;
		switch(dir)
		{
			case 183:up();break;
			case 184:down();break;
			case 186:left();break;
			case 185:right();break;
		}
		if(is_die())
		{
			break;		
		}
	}
}

void end(void* ptr)
{
	
	show_view();
	printf("游戏结束！\n");
	free(ptr);
	ptr=NULL;
}

