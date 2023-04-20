/*
* @brief IsInt функци€ проверки строки на число
* @param str[] строка
* @param size размер строки
* @return 1 если число, 0 если не число
*/
int IsInt(const char [], int);

/**
*@brief PrintField функци€ печати пол€
*@param array[] поле
*@return -2 если пользователь вводит некорректное значение, 0 при успешном выполнении
*/
int PrintField(const int [], int);

/**
*@brief LevelDifficulty функци€ выбора уровн€ сложности
*@return 0 если лЄгкий, 1 если сложный, -1 если ошибка
*/
int LevelDifficulty();

/**
*@brief NextMove функци€ перехода к следующему шагу
*@param arr[] массив координат
*@return 0 при успешном выполнении
*/
int NextMove(int []);

/**
*@brief CheckGameStatus функци€ вывода сообщений по ходу игры
*@param field[] поле
*@param fieldSize размер пол€
*@param code код состо€ни€
*@return 1 если клетка уже открыта,2 если пользователь указал клетку с миной,3 если пользователь прошЄл игру до концу, 0 если €чейка уже помечена или если €чейка уже без фдага
*/
int CheckGameStatus(int [], int, int);

