cmake_minimum_required(VERSION 3.1.0)

project(CtyproAsci VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(CtyproAsci
	src/main.cpp 
	src/mainwindow.cpp 
	src/Engine/handle_text.cpp 
	src/Engine/Cipher_src/caesar.cpp 
	src/Engine/Conversion_src/Binary.cpp
	src/Engine/Conversion_src/hex.cpp
	src/Engine/Conversion_src/rot13.cpp
)

target_link_libraries(CtyproAsci Qt5::Widgets)