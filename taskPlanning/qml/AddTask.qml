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
        }
    }

    Button
    {
        id: backAddFamilyUnitButton
        text: "GoBack"
        onClicked:
        {
            addFamilyUnitScreen.visible = true
            addTaskScreen.visible = false
        }
    }
}
