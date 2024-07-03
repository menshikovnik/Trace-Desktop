cmake_minimum_required(VERSION 3.5)

project(Trace-Desktop VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets Network REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include_directories(
    ${CMAKE_SOURCE_DIR}/auth
    ${CMAKE_SOURCE_DIR}/auth/log-in
    ${CMAKE_SOURCE_DIR}/auth/registration
)

set(SOURCES
    main.cpp
    auth/auth.cpp
    auth/registration/registration.cpp
    auth/log-in/log_in.cpp
)

set(HEADERS
    auth/auth.h
    auth/registration/registration.h
    auth/log-in/log_in.h
)

set(UIS
    auth/registration/registration_window.ui
    auth/log-in/log_in_window.ui
)

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${UIS}
    auth/auth.h auth/auth.cpp
)

target_link_libraries(${PROJECT_NAME} Qt6::Widgets Qt6::Network)

target_sources(Trace-Desktop
  PRIVATE
    .gitignore
)
