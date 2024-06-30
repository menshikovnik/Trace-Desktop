cmake_minimum_required(VERSION 3.5)

project(Trace-Desktop VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(SOURCES
    main.cpp
    registration/registration.cpp
)

set(HEADERS
    registration/registration.h
)

set(UIS
    registration/registration.ui
)

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
)

target_link_libraries(${PROJECT_NAME} Qt6::Widgets)

target_sources(Trace-Desktop
  PRIVATE
    .gitignore
)
