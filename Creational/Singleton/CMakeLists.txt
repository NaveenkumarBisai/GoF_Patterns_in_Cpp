# Creational/Singleton/CMakeLists.txt

# Create an executable from pattern files
add_executable(SingletonDemo
    Singleton.hpp
    main.cpp
)

# Optional: Include current directory headers
target_include_directories(SingletonDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})