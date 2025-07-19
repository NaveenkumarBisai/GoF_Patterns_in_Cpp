add_executable(AdapterExample
    main.cpp
    RoundHole.hpp
    RoundPeg.hpp
    SquarePeg.hpp
    SquarePegAdapter.hpp
)

target_include_directories(AdapterExample PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})