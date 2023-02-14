#此文件从模板自动生成! 请勿更改!
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)
cmake_minimum_required(VERSION 3.22)

# specify cross-compilers and tools
set(CMAKE_C_COMPILER "arm-none-eabi-gcc")
set(CMAKE_CXX_COMPILER "arm-none-eabi-g++")
set(CMAKE_ASM_COMPILER  "arm-none-eabi-gcc")
set(CMAKE_AR "arm-none-eabi-ar")
set(CMAKE_OBJCOPY "arm-none-eabi-objcopy")
set(CMAKE_OBJDUMP "arm-none-eabi-objdump")
set(SIZE "arm-none-eabi-size")

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Output/Lib)
# project settings
project(ODriveFirmware C CXX ASM)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

add_definitions(-DSTM32F405xx -DUSE_HAL_DRIVER -DARM_MATH_CM4 -DHW_VERSION_MAJOR=3 -DHW_VERSION_MINOR=6 -DHW_VERSION_VOLTAGE=24
                -DFIBRE_ENABLE_SERVER)

message("${CMAKE_BUILD_TYPE}")
if(${CMAKE_BUILD_TYPE} STREQUAL "Release")
add_definitions(-DFPU_FPV4)
endif()

file(GLOB_RECURSE SOURCES "autogen/*.*" "syscalls.c" "Board/v3/*.*" "communication/*.*" "fibre-cpp/*.*" "Drivers/*.*" "MotorControl/*.*" "ThirdParty/*.*")
set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/Board/v3/STM32F405RGTx_FLASH.ld)

# add_subdirectory(Drivers)
# add_subdirectory(Middlewares)
# add_subdirectory(Bootloader)

add_executable(${PROJECT_NAME}.elf ${SOURCES} ${LINKER_SCRIPT})
target_include_directories(${PROJECT_NAME}.elf 
        PUBLIC  / MotorControl Board/v3/Inc doctest doctest/parts fibre-cpp/include fibre-cpp/platform_support
                fibre-cpp/include ThirdParty/CMSIS/Device/ST/STM32F4xx/Include ThirdParty/CMSIS/Include ThirdParty/FreeRTOS/Source/include ThirdParty/FreeRTOS/Source/portable/GCC/ARM_CM4F
                ThirdParty/STM32_USB_Device_Library/Core/Inc ThirdParty/STM32_USB_Device_Library/Class/CDC/Inc ThirdParty/STM32F4xx_HAL_Driver/Inc ThirdParty/STM32F4xx_HAL_Driver/Inc/Legacy
                ThirdParty/FreeRTOS/Source/CMSIS_RTOS)
target_compile_options(${PROJECT_NAME}.elf 
        PUBLIC  -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wno-psabi -mthumb -ffunction-sections -fdata-sections -fno-common -fmessage-length=0
                $<$<COMPILE_LANGUAGE:ASM>:-x$<SEMICOLON>assembler-with-cpp>)
target_link_options(${PROJECT_NAME}.elf 
        PUBLIC  -mcpu=cortex-m4 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wl,--undefined=uxTopUsedPriority,-gc-sections,--print-memory-usage,-Map=${PROJECT_BINARY_DIR}/${PROJECT_NAME}.map
                -mthumb -specs=nosys.specs -u_printf_float -u_scanf_float -flto -lc -lm -lnosys -T ${LINKER_SCRIPT}
)
target_link_libraries(${PROJECT_NAME}.elf
        PUBLIC  -larm_cortexM4lf_math -L${CMAKE_SOURCE_DIR}/ThirdParty/CMSIS/Lib/GCC
                # -lFreeRTOS -lDrivers -L${CMAKE_SOURCE_DIR}/Output/Lib
)
set(HEX_FILE ${CMAKE_SOURCE_DIR}/Output/${PROJECT_NAME}.hex)
set(BIN_FILE ${CMAKE_SOURCE_DIR}/Output/${PROJECT_NAME}.bin)

add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -Oihex $<TARGET_FILE:${PROJECT_NAME}.elf> ${HEX_FILE}
        COMMAND ${CMAKE_OBJCOPY} -Obinary $<TARGET_FILE:${PROJECT_NAME}.elf> ${BIN_FILE}
        COMMENT "Building ${HEX_FILE}
Building ${BIN_FILE}")
