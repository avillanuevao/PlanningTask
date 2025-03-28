import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

ColumnLayout
{
    id: assignTaskScreen
    visible: false

    ComboBox
    {
        id: userBox
        model: showUser.users

        onCurrentTextChanged: {
            console.log("Seleccionado userBox:", currentText)
        }
    }

    ComboBox
    {
        id: taskBox
        model: showTask.tasks

        onCurrentTextChanged: {
            console.log("Seleccionado taskBox:", currentText)
        }
    }

    Button
    {
        id: assignTask
        text: "AssignTask"
        onClicked:
        {
        }
    }

    Button
    {
        id: goBack
        text: "GoBack"
        onClicked:
        {
            operationsScreen.visible = true
            assignTaskScreen.visible = false
        }
    }
}
