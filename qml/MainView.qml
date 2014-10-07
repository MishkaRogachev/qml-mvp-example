import QtQuick 2.3

Rectangle {
    id: root
    color: "#bacce6"
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
    }
}
