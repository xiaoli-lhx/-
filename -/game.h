#pragma once
//���Ŷ���
#define ROW 3
#define COL 3

//ͷ�ļ��Ĺ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//���Ӯ�� - *
//����Ӯ�� - #
//ƽ�� - Q
//��Ϸ���� - c

//�ж���Ϸ��Ӯ
char IsWin(char board[ROW][COL], int row, int col);