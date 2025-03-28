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
            selectUser.selectUser(currentText)
            Qt.application.isUserFull = true
        }
    }

    ComboBox
    {
        id: taskBox
        model: showTask.tasks

        onCurrentTextChanged: {
            selectTask.selectTask(currentText)
            Qt.application.isTaskFull = true
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
