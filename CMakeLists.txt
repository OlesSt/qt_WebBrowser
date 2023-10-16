cmake_minimum_required(VERSION 3.14)

project(qt_WebBrowser LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core WebEngineWidgets)

add_executable(qt_WebBrowser
  main.cpp

  webbrowser.h
  webbrowser.cpp
  webbrowser.ui


  res.qrc
)
target_link_libraries(qt_WebBrowser Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::WebEngineWidgets)

install(TARGETS qt_WebBrowser
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
