# CMake for Builder Pattern

add_executable(BuilderDemo
    Item.hpp
    Meal.hpp
    MealBuilder.hpp
    main.cpp
)

target_include_directories(BuilderDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})