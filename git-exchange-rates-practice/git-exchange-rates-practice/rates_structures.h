#ifndef BOOK_SUBSCRIPTION_H
// ���������, �� ��� �� ��������� ������������� BOOK_SUBSCRIPTION_H ����� � ������� ������� ���������. 
// ���� �� �� ��� ���������, �� ��������� ��� ����� �������; ���� �� ��� ���������, ���� ��� ����� ��������.
#define BOOK_SUBSCRIPTION_H
// ���� ���� ����� ������� �����, �������� #ifndef �� ����������, � ��� ����� ��������.
#include "constant.h"//����������� ����������� constant.h

struct rates
    //��������� ��� ��������� � ������ rates
{
    char bank[MAX_STRING_SIZE];//�������� �����
    float buy_price;//���� �������
    float sell_price;//���� �������
    char adress[MAX_STRING_SIZE];//����� ��������� �����
};

#endif