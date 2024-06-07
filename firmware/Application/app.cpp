#include "app.hpp"

#include <main.h>

#include <random/random.h>

void appInit()
{
    randomInit(5);
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
}

void appUpdate()
{
    if(100 < randomGet())
        HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
    HAL_Delay(500);
}