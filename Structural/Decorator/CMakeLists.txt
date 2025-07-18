add_executable(DecoratorDemo
    main.cpp
    Coffee.hpp
    CoffeeDecorator.hpp
    MilkDecorator.hpp
    SugarDecorator.hpp
    WhipDecorator.hpp
)

target_include_directories(DecoratorDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})