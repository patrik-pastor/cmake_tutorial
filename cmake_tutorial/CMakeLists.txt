add_subdirectory(${THIRDPARTY_DIRECTORY}/glfw build)

add_library(cmake_tutorial
        main.cpp)

target_include_directories(cmake_tutorial
        PUBLIC ${THIRDPARTY_DIRECTORY}/glfw/include)
target_link_libraries(cmake_tutorial
        glfw)