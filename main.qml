import QtQuick 2.3
import QtQuick.Window 2.2

<<<<<<< HEAD
import Pairs 1.0

Window {
    visible: true
    width: 800
    height: 600

    Field {
        id: field
    }

    Rectangle {
        id: board
        color: "lightgray"
        anchors.fill: parent
        anchors.margins: 10

        Grid {
            id: grid
            rows: field.width
            columns: field.height
            spacing: 4

            Repeater {
                model: field.width * field.height

                Rectangle {
                    id: cellItem
                    width: 48
                    height: 32
                    property Cell cell: field.cellAt(index % field.width, index / field.width)

                    Text {
                        anchors.centerIn: parent
                        text: cell.key
                    }
                }
            }
        }
    }
=======
Window {
    visible: true

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
>>>>>>> 26e8e9849641019959546f3fc2571352deee8027
}
