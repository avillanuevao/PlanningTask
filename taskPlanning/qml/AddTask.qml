import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

ColumnLayout
{
    id: addTaskScreen
    visible: false

    TextField
    {
        id: addTaskTextField
        placeholderText: qsTr("Enter name")
    }

    Button
    {
        id: addTaskButton
        text: "RegisterTask"
        onClicked:
        {
            addTask.addTask(addTaskTextField.text)
            Qt.application.isTaskFull = true

        }
    }

    Button
    {
        id: backAddFamilyUnitButton
        text: "GoBack"
        onClicked:
        {
            manageFamilyUnitScreen.visible = true
            addTaskScreen.visible = false
        }
    }
}
