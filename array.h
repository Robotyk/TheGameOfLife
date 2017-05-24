#pragma once
static int SIZE_X = 88;
static int SIZE_Y = 22;
char** create();
char at(int x, int y, char ** tab);
void insert(int x, int y, char ** tab);
void del(char ** tab);