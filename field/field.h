/**
 * @brief Checks if game is won
 * @param field field
 * @param fieldSize field size
 * @return 0 if game is not won, 1 if game is won
 */
int CheckForWin(const int[], int);

/**
 * @brief Counts mines around cell
 * @param field field
 * @param fieldSize field size
 * @param x x coordinate
 * @param y y coordinate
 * @return int 0
 */
int CountMinesAround(int[], int, int, int);

/**
 * @brief Generates field
 * @param field field
 * @param fieldSize field size
 * @param quantityOfMines quantity of mines
 * @return int 0
 */
int GenerateField(int[], int, int);

/**
 * @brief Makes all cells open
 * @param field field
 * @param fieldSize field size
 * @return int 0
 */
int OpenAllCells(int[], int);

/**
 * @brief Opens empty nearby cells for given empty cell
 * @param field field
 * @param fieldSize field size
 * @param x x coordinate
 * @param y y coordinate
 * @return int 0
 */
int OpenEmptyNearbyCells(int[], int, int, int);

/**
 * @brief Opens cell
 * @param field field
 * @param fieldSize field size
 * @param coord coordinates
 * @return int 0 if success, 1 if cell is already open, 2 if mine was opened, 3 if win, -3 if coordinates are out of field
 */
int OpenCell(int[], int, const int[]);

/**
 * @brief Sets flag
 * @param field field
 * @param fieldSize field size
 * @param coord coordinates
 * @param quantityOfMines quantity of mines
 * @return int 0 if success, 1 if cell is already open, 4 if flag is already set, -3 if coordinates are out of field
 */
int SetFlag(int[], int, const int[], int *);

/**
 * @brief Removes flag
 * @param field field
 * @param fieldSize field size
 * @param coord coordinates
 * @param quantityOfMines quantity of mines
 * @return int 0 if success, 1 if cell is opened, 5 if flag is not set, -3 if coordinates are out of field
 */
int RemoveFlag(int[], int, const int[], int *);