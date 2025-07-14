add_executable(AbstractFactoryDemo
    Button.hpp
    Checkbox.hpp
    GUIFactory.hpp
    main.cpp
)

target_include_directories(AbstractFactoryDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})