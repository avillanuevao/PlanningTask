import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

RowLayout
{
    id: addFamilyUnitScreen
    visible: false

    ColumnLayout
    {
        TextField
        {
            id: addFamilyUnitTextField
            placeholderText: qsTr("Enter name")
        }

        Button
        {
            id: addUserButton
            text: "RegisterFamilyUnit"
            visible: true
            onClicked:
            {
                registerFamilyUnit.registerFamilyUnit(addFamilyUnitTextField.text)
                manageFamilyUnitButton.visible = true
            }
        }

        Button
        {
            id: backAddFamilyUnitButton
            text: "GoBack"
            visible: true
            onClicked:
            {
                initialScreen.visible = true
                addFamilyUnitScreen.visible = false
            }
        }
    }


}


