#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = ('%c', set);
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------------扫雷游戏---------------\n");
	for (j = 0;j <= col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ",i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------扫雷游戏---------------\n");

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//横坐标1~9 纵坐标1~9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x - 1][y] +
		board[x + 1][y] +
		board[x - 1][y + 1] +
		board[x][y + 1] +
		board[x + 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已经被排查过了\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("踩雷了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					//统计周围坐标有几个雷
					//区分字符‘1’和数字1
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}