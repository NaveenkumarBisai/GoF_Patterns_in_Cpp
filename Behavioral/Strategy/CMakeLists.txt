# CMake for Strategy Pattern

add_executable(StrategyDemo
    ImageFilter.hpp
    ImageProcessor.hpp
    main.cpp
)

target_include_directories(StrategyDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})