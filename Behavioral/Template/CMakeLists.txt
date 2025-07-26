add_executable(TemplateMethodDemo
    main.cpp
    Beverage.hpp
    Tea.hpp
    Coffee.hpp
)

target_include_directories(TemplateMethodDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})