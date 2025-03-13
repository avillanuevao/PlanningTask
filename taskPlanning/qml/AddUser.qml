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
            console.log(addUserTextField.text)
        }
    }

    Button
    {
        id: backAddFamilyUnitButton
        text: "GoBack"
        visible: true
        onClicked:
        {
            addFamilyUnitScreen.visible = true
            addUserScreen.visible = false
        }
    }
}
