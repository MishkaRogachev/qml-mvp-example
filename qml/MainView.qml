import QtQuick 2.3

Rectangle {
    id: root
    color: "#E0E2E4"
    width: 550
    height: 480

    Bar {
        id: bar
        height: 50
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right

        Item {
            objectName: "menuPlaceholder"
            anchors.fill: parent
        }

        Icon {
            id: icon
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            anchors.rightMargin: 10
            source: "qrc:///resources/icons/quit.svg";
            onClicked: Qt.quit()
        }
    }
}
