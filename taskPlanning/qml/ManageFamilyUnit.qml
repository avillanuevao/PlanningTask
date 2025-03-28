import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

RowLayout
{
    id: manageFamilyUnitScreen
    visible: false

    ColumnLayout
    {
        ComboBox
        {
            id: familyUnitBox
            model: showFamilyUnit.familiesUnits
            visible: true

            onCurrentTextChanged: {
                selectFamilyUnit.selectFamilyUnit(currentText)
            }
        }

        Button
        {
            id: addUserButton
            text: "AddUser"
            visible: true
            onClicked:
            {
                manageFamilyUnitScreen.visible = false
                addUserScreen.visible = true
            }
        }

        Button
        {
            id: addTaskButton
            text: "AddTask"
            visible: true
            onClicked:
            {
                manageFamilyUnitScreen.visible = false
                addTaskScreen.visible = true
            }
        }

        Button
        {
            id: operationsButton
            text: "Operate"
            visible: Qt.application.isUserFull && Qt.application.isTaskFull
            onClicked:
            {
                manageFamilyUnitScreen.visible = false
                operationsScreen.visible = true
            }
        }

        Button
        {
            id: backMainMenuButton
            text: "GoBack"
            visible: true
            onClicked:
            {
                manageFamilyUnitScreen.visible = false
                initialScreen.visible = true
            }
        }
    }


}


