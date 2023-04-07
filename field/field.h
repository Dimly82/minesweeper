/**
 * @brief Counts mines around cell
 * @param field field
 * @param fieldSize field size
 * @param x x coordinate
 * @param y y coordinate
 * @return int 0 if success
 */
int CountMinesAround(int[], int, int, int);

/**
 * @brief Generates field
 * @param field field
 * @param fieldSize field size
 * @param quantityOfMines quantity of mines
 * @return int 0 if success
 */
int GenerateField(int[], int, int);

/**
 * @brief Makes all cells open
 * @param field field
 * @param fieldSize field size
 * @return int 0 if success, 1 if mine was opened
 */
int OpenAllCells(int[], int);

/**
 * @brief Opens empty nearby cells for given empty cell
 * @param field field
 * @param fieldSize field size
 * @param x x coordinate
 * @param y y coordinate
 * @return int 0 if success
 */
int OpenEmptyNearbyCells(int[], int, int, int);

/**
 * @brief Opens cell
 * @param field field
 * @param fieldSize field size
 * @param coord coordinates
 * @return int 0 if success
 */
int OpenCell(int[], int, const int[]);