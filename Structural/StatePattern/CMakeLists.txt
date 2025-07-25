add_executable(StatePatternDemo
    main.cpp
    VendingMachine.hpp
    State.hpp
    IdleState.hpp
    IdleState.cpp
    HasMoneyState.hpp
    DispensingState.hpp
)

target_include_directories(StatePatternDemo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})