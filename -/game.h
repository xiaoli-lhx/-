#pragma once
//符号定义
#define ROW 3
#define COL 3

//头文件的关联
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//玩家赢了 - *
//电脑赢了 - #
//平局 - Q
//游戏继续 - c

//判断游戏输赢
char IsWin(char board[ROW][COL], int row, int col);