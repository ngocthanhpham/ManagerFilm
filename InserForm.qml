import QtQuick 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4
import QtQuick.Controls 2.2

ApplicationWindow{
    title: "Form Insert Film"
    width:  500
    height: 500
    visible: true
    flags: Qt.Dialog
    modality: Qt.ApplicationModal
    Text {
        text: qsTr("Close to come back main window")
        anchors.centerIn: parent
    }
    Item {
        id:itemInsert
        width: 400
        height: 400
        anchors.centerIn: parent
        Rectangle{
            id: recInsert
            width: parent.width
            height: parent.height
            anchors.verticalCenterOffset: 0
            anchors.horizontalCenterOffset: 0
            anchors.centerIn: parent
            MyRectangle{
                id: recInput1
                width: parent.width
                height: parent.height / 8
                anchors.top: parent.top - 30
                RowLayout{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 4
                        Label{
                            anchors.centerIn: parent
                            text: "FilmName"
                        }
                    }
                    TextField{
                        id: txtFName
                        height: parent.height
                        width: parent.width / 4
                        placeholderText: "Input film name"
                    }

                }
            }
            MyRectangle{
                id: recInput2
                width: parent.width
                height: parent.height / 8
                anchors.topMargin: 0
                anchors.top: recInput1.bottom
                RowLayout{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 4
                        Label{
                            anchors.centerIn: parent
                            text: "PublishedYear"
                        }
                    }

                    TextField{
                        id: txtPubYear
                        height: parent.height
                        width: parent.width / 4
                        placeholderText: "Input published year"
                    }

                }
            }
            MyRectangle{
                id: recInput3
                width: parent.width
                height: parent.height / 8
                anchors.top: recInput2.bottom
                RowLayout{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 4
                        Label{
                            anchors.centerIn: parent
                            text: "NameDirector"
                        }
                    }

                    TextField{
                        id: txtDirName
                        height: parent.height
                        width: parent.width / 4
                        placeholderText: "Input name director"
                    }

                }
            }
            MyRectangle{
                id: recInput4
                width: parent.width
                height: parent.height / 8
                anchors.top: recInput3.bottom
                RowLayout{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 4
                        Label{
                            anchors.centerIn: parent
                            text: "NameActor"
                        }
                    }

                    TextField{
                        id: txtNameActor
                        height: parent.height
                        width: parent.width / 4
                        placeholderText: "Input name actor"
                    }

                }
            }
        }
    }

}
