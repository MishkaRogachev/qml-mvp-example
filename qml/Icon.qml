import QtQuick 2.0

Item {
    id: root
    width: 50
    height: 50

    property alias source: icon.source
    signal clicked

    Image {
        id: icon
        anchors.fill: parent
        anchors.margins: iconMouseArea.containsMouse ? 5 : 10;
        Behavior on anchors.margins {
               NumberAnimation { duration: 100 }
        }
    }

    MouseArea {
        id: iconMouseArea
        anchors.fill: root
        hoverEnabled: true
        onClicked: root.clicked()
    }
}
