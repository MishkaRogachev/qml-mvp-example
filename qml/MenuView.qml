import QtQuick 2.3


Item {
    id: root
    width: 40
    height: 40

    Image {
        id: icon
        anchors.fill: parent
        source: "qrc:///resources/icons/menu.svg";

        anchors.margins: iconMouseArea.containsMouse ? 5 : 10;
        Behavior on anchors.margins {
               NumberAnimation { duration: 100 }
        }

        MouseArea {
            id: iconMouseArea
            anchors.fill: parent
            hoverEnabled: true
        }
    }
}


