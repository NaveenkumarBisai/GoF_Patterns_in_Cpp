add_executable(FactoryMethodDemo
    Logger.hpp
    LoggerFactory.hpp
    main.cpp
)

target_include_directories(FactoryMethodDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})