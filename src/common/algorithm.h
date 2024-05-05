#ifndef ALGORITHM_H_
#define ALGORITHM_H_

#include "common/types.h"
#include "utils/ui.h"
#include "app/appearance.h"

void init_matrix(board_t board, i8_t dimension);


int isEmpty(board_t board, i8_t row, i8_t column);

/*** 
* This function checks if the player represented by the character 'playerCharacther' has won in any row of the matrix.
* @param dimension The dimension of the matrix (number of rows/columns).
* @param matrix The matrix to be checked.
* @param playerCharacther The character representing the player.
* @return 1 if the player has won, otherwise 0.
*/
int verifyRows(board_t board, i8_t dimension, char playerCharacther);

/*** 
* This function checks if the player has won in any column of the matrix.
* @param dimension The dimension of the matrix (number of rows/columns).
* @param matrix The matrix to be checked.
* @param playerCharacther The character representing the player.
* @return 1 if the player has won, otherwise 0.
*/
int verifyColumns(board_t board, i8_t dimension, char playerCharacther);

/**
 * Verifies if the player has won in the main diagonal of the matrix.
 * @param dimension The dimension of the matrix.
 * @param matrix The matrix to be checked.
 * @param playerCharacther The character representing the player.
 * @return Returns 1 if the player has won in the main diagonal, otherwise returns 0.
 */
int verifyMainDiagonal(board_t board, i8_t dimension, char playerCharacther);

/**
 * Verifies if the player has won in the secondary diagonal of the matrix.
 * @param dimension The dimension of the matrix.
 * @param matrix The matrix to be checked.
 * @param playerCharacther The character representing the player.
 * @return Returns 1 if the player has won in the secondary diagonal, otherwise returns 0.
 */
int verifySecundaryDiagonal(board_t board, i8_t dimension, char playerCharacther);

#endif  // !ALGORITHM_H_
