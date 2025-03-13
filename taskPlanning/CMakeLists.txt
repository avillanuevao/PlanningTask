cmake_minimum_required(VERSION 3.16)

project(taskPlanning VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(apptaskPlanning
    main.cpp
)

qt_add_qml_module(apptaskPlanning
    URI taskPlanning
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES view/IRegisterFamilyUnit.hpp
        SOURCES controller/IRegisterFamilyUnit.hpp
        SOURCES view/RegisterFamilyUnit.hpp view/RegisterFamilyUnit.cpp
        SOURCES controller/RegisterFamilyUnit.hpp controller/RegisterFamilyUnit.cpp
        SOURCES model/IFamiliesUnits.hpp
        SOURCES model/FamiliesUnits.hpp model/FamiliesUnits.cpp
        SOURCES model/IFamilyUnit.hpp
        SOURCES model/FamilyUnit.hpp model/FamilyUnit.cpp
        SOURCES model/ITasks.hpp
        SOURCES model/Tasks.hpp model/Tasks.cpp
        SOURCES model/IUsers.hpp
        SOURCES model/Users.hpp model/Users.cpp
        SOURCES model/ITask.hpp
        SOURCES model/Task.hpp model/Task.cpp
        SOURCES model/IUser.hpp
        SOURCES model/User.hpp model/User.cpp
        QML_FILES qml/AddFamilyUnit.qml
        QML_FILES qml/AddUser.qml
        QML_FILES qml/AddTask.qml
        QML_FILES qml/Operations.qml
        QML_FILES qml/AssignTask.qml
        QML_FILES qml/ManageFamilyUnit.qml
        SOURCES view/ShowFamilyUnit.hpp view/ShowFamilyUnit.cpp
        SOURCES utils/Publisher.hpp
        SOURCES utils/Subscriber.hpp
        SOURCES controller/IShowFamilyUnit.hpp
        SOURCES controller/ShowFamilyUnit.hpp controller/ShowFamilyUnit.cpp
        SOURCES model/signal/AddedFamilyUnit.hpp model/signal/AddedFamilyUnit.cpp
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
