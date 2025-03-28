import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

ColumnLayout
{
    id: addUserScreen
    visible: false

    TextField
    {
        id: addUserTextField
        placeholderText: qsTr("Enter name")
    }

    Button
    {
        id: addUserButton
        text: "RegisterUser"
        visible: true
        onClicked:
        {
            addUser.addUser(addUserTextField.text)
            Qt.application.isUserFull = true
        }
    }

    Button
    {
        id: backAddFamilyUnitButton
        text: "GoBack"
        visible: true
        onClicked:
        {
            manageFamilyUnitScreen.visible = true
            addUserScreen.visible = false
        }
    }
}
