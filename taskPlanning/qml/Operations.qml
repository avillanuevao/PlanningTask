import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

ColumnLayout
{
    id: operationsScreen
    visible: false

    Button
    {
        id: assignTask
        text: "AssignTask"
        onClicked:
        {
            operationsScreen.visible = false
            assignTaskScreen.visible = true
        }
    }

    // Button
    // {
    //     id: desassignTask
    //     text: "DeassignTask"
    //     onClicked:
    //     {
    //     }
    // }

    // Button
    // {
    //     id: completeTask
    //     text: "CompleteTask"
    //     onClicked:
    //     {
    //     }
    // }

    // Button
    // {
    //     id: removeTask
    //     text: "RemoveTask"
    //     onClicked:
    //     {
    //     }
    // }

    // Button
    // {
    //     id: removeUser
    //     text: "RemoveUser"
    //     onClicked:
    //     {
    //     }
    // }

    // Button
    // {
    //     id: checkFamilyUnit
    //     text: "CheckFamilyUnit"
    //     onClicked:
    //     {
    //     }
    // }

    Button
    {
        id: goBack
        text: "GoBack"
        onClicked:
        {
            manageFamilyUnitScreen.visible = true
            operationsScreen.visible = false
        }
    }
}
