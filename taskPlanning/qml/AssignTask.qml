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

        onActivated: {
            console.log("Seleccionado:", currentText)
        }
    }

    ComboBox
    {
        id: taskBox
        // model: myModel.items

        onActivated: {
            console.log("Seleccionado:", currentText)
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
