
set (HAL_DRIVER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/STM32F4xx_HAL_Driver)
set (CMSIS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/CMSIS)

file(GLOB STM32_Drivers_SRC_C "${HAL_DRIVER_DIR}/Src/*.c")

add_library (STM32_Drivers ${STM32_Drivers_SRC_C})

target_compile_definitions (STM32_Drivers PRIVATE USE_HAL_DRIVER)
target_include_directories (STM32_Drivers PUBLIC 
    # project
    ../Core/Inc
    
    # CMSIS
    ${CMSIS_DIR}/Include
    ${CMSIS_DIR}/Device/ST/STM32F4xx/Include
    
    # HAL
    ${HAL_DRIVER_DIR}/Inc
    ${HAL_DRIVER_DIR}/Inc/Legacy
)
