/*
* @brief IsInt функция проверки строки на число
* @param str[] строка
* @param size размер строки
* @return 1 если число, 0 если не число
*/
int IsInt(const char [], int);

/**
*@brief PrintField функция печати поля
*@param array[] поле
*@return -2 если пользователь вводит некорректное значение, 0 при успешном выполнении
*/
int PrintField(const int [], int);

/**
*@brief LevelDifficulty функция выбора уровня сложности
*@return 0 если лёгкий, 1 если сложный, -1 если ошибка
*/
int LevelDifficulty();

/**
*@brief NextMove функция перехода к следующему шагу
*@param arr[] массив координат
*@return 0 при успешном выполнении
*/
int NextMove(int []);

/**
*@brief CheckGameStatus функция вывода сообщений по ходу игры
*@param field[] поле
*@param fieldSize размер поля
*@param code код состояния
*@return 1 если клетка уже открыта,2 если пользователь указал клетку с миной,3 если пользователь прошёл игру до концу, 0 если ячейка уже помечена или если ячейка уже без фдага
*/
int CheckGameStatus(int [], int, int);

