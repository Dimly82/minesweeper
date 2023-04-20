/*
* @brief IsInt ������� �������� ������ �� �����
* @param str[] ������
* @param size ������ ������
* @return 1 ���� �����, 0 ���� �� �����
*/
int IsInt(const char [], int);

/**
*@brief PrintField ������� ������ ����
*@param array[] ����
*@return -2 ���� ������������ ������ ������������ ��������, 0 ��� �������� ����������
*/
int PrintField(const int [], int);

/**
*@brief LevelDifficulty ������� ������ ������ ���������
*@return 0 ���� �����, 1 ���� �������, -1 ���� ������
*/
int LevelDifficulty();

/**
*@brief NextMove ������� �������� � ���������� ����
*@param arr[] ������ ���������
*@return 0 ��� �������� ����������
*/
int NextMove(int []);

/**
*@brief CheckGameStatus ������� ������ ��������� �� ���� ����
*@param field[] ����
*@param fieldSize ������ ����
*@param code ��� ���������
*@return 1 ���� ������ ��� �������,2 ���� ������������ ������ ������ � �����,3 ���� ������������ ������ ���� �� �����, 0 ���� ������ ��� �������� ��� ���� ������ ��� ��� �����
*/
int CheckGameStatus(int [], int, int);

