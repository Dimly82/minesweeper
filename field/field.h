int fieldSize;

/**
 * @brief Declares variables
 * @param fieldSize1 size of field
 * @return int 0 if success
 */
int DeclareVars(int);

/**
 * @brief Counts mines around cell
 * @param field field
 * @param x x coordinate
 * @param y y coordinate
 * @return int 0 if success
 */
int CountMinesAround(int[][fieldSize], int, int);

/**
 * @brief Generates field
 * @param field field
 * @param quantityOfMines quantity of mines
 * @return int 0 if success
 */
int GenerateField(int[][fieldSize], int);

/**
 * @brief Makes all cells open
 * @param field field
 * @return int 0 if success, 1 if mine was opened
 */
int OpenAllCells(int[][fieldSize]);

/**
 * @brief Opens cell
 * @param field field
 * @param coord coordinates
 * @return int 0 if success
 */
int OpenCell(int[][fieldSize], const int[]);