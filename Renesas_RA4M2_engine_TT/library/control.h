/**
 ******************************************************************************
 *
 * @file    control.h
 *
 * @brief   Control drive library.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */

#ifndef CONTROL_H_
#define CONTROL_H_

/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include <stdint.h>
#include <stdbool.h>

/**
 *******************************************************************************
 * @brief USER STRUCT/ENUM
 *******************************************************************************
 */
typedef enum
{
    START,
    FRONT,
    REAR,
    LEFT,
    RIGHT,
    STOP
}controlPosition;

controlPosition engineTT;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
void vControlStart();
void vControlFront();
void vControlRear();
void vControlLeft();
void vControlRight();
void vControlStop();

#endif /* CONTROL_H_ */
