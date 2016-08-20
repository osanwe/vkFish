import QtQuick 2.0
import Sailfish.Silica 1.0

Row {
    spacing: Theme.paddingMedium

    Rectangle {
        width: 1
        height: repost.height
        color: Theme.primaryColor
    }

    Loader {
        id: repost
        property var _wallpost: rwallpost
        property var _repost: rwallpost.repost
        width: parent.width - Theme.paddingMedium
        active: rwallpost.id !== 0
        source: "WallPostView.qml"
    }

    Component.onCompleted: console.log(rwallpost.id)
}

