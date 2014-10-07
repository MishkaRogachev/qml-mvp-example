import QtQuick 2.3

Row {
    id: root
    anchors.fill: parent
    anchors.margins: 5
    spacing: 15

    signal clicked(string s)

    property alias model: repeater.model

    Repeater {
        id: repeater

        Text {
            id: text
            color: "#EFF0F1"
            text: modelData
            font.underline: textMouseArea.containsMouse
            font.pointSize: (textMouseArea.containsMouse &&
                             textMouseArea.pressed) ? 14 : 12
            anchors.verticalCenter: parent.verticalCenter

            MouseArea {
                id: textMouseArea
                anchors.fill: parent
                hoverEnabled: true
                onClicked: root.clicked(modelData)
            }
        }
    }
}


