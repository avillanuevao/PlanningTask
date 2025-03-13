import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

import "./qml"

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    RowLayout
    {
        ColumnLayout
        {
            ColumnLayout
            {
                id: initialScreen
                Button
                {
                    id: addFamilyUnitButton
                    text: "AddFamilyUnit"
                    visible: true
                    onClicked:
                    {
                        addFamilyUnitScreen.visible = true
                        initialScreen.visible = false
                    }
                }

                Button
                {
                    id: manageFamilyUnitButton
                    text: "ManageFamilyUnit"
                    visible: true
                    onClicked:
                    {
                        manageFamilyUnitScreen.visible = true
                        initialScreen.visible = false
                    }
                }
            }

            AddFamilyUnit
            {
                id: addFamilyUnitScreen
            }

            ManageFamilyUnit
            {
                id: manageFamilyUnitScreen
            }

            AddUser
            {
                id: addUserScreen
            }

            AddTask
            {
                id: addTaskScreen
            }

            Operations
            {
                id: operationsScreen
            }

            AssignTask
            {
                id: assignTaskScreen
            }
        }
    }
}
