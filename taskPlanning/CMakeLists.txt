cmake_minimum_required(VERSION 3.16)

project(taskPlanning VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

file(GLOB_RECURSE SOURCES
    "controller/*.cpp" "controller/*.hpp"
    "model/*.cpp" "model/*.hpp"
    "view/*.cpp" "view/*.hpp"
    "utils/*.cpp" "utils/*.hpp"
)

qt_standard_project_setup()

qt_add_executable(apptaskPlanning
    main.cpp
)

qt_add_qml_module(apptaskPlanning
    URI taskPlanning
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES qml/AddFamilyUnit.qml
        QML_FILES qml/AddUser.qml
        QML_FILES qml/AddTask.qml
        QML_FILES qml/Operations.qml
        QML_FILES qml/AssignTask.qml
        QML_FILES qml/ManageFamilyUnit.qml
        SOURCES ${SOURCES}
        ApplicationContext.hpp
        ApplicationContext.cpp
        ModelContext.hpp
        ModelContext.cpp
        SOURCES ControllerVisualizationContext.hpp ControllerVisualizationContext.cpp
        SOURCES ViewVisualizationContext.hpp ViewVisualizationContext.cpp
        SOURCES ControllerOperationContext.hpp ControllerOperationContext.cpp
        SOURCES ViewOperationContext.hpp ViewOperationContext.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(apptaskPlanning PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.apptaskPlanning
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(apptaskPlanning
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS apptaskPlanning
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
