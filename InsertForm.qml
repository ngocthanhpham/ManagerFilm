import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4

import Manager.Film.Film 1.0
import Manager.Film.Director 1.0
import Manager.Film.Actor 1.0

ApplicationWindow{
    id: insertWindow
    objectName: "insertWindow"
    title: "Form Insert Film"
    width:  500
    height: 500
    visible: true
    flags: Qt.Dialog
    modality: Qt.ApplicationModal

    signal sendFilm(var film)
    Film{
        id: filmData
        mDirector: Director{
            nameDirector: txtDirName.text
            ageDirector: "0"
            nationalityDirector: "Default"
        }
        mActor: Actor{
            nameActor: txtActorName.text
            ageActor: "0"
            nationalityActor: "Default"
        }
        name: txtFName.text
        pb: txtPubYear.text
    }

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
                anchors.top: parent.top
                RowLayout{
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 3
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
                    x: 0
                    y: 0
                    width: parent.width
                    height: parent.height
                    Rectangle{
                        height: parent.height
                        width: parent.width / 3
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
                        width: parent.width / 3
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
                        width: parent.width / 3
                        Label{
                            anchors.centerIn: parent
                            text: "NameActor"
                        }
                    }

                    TextField{
                        id: txtActorName
                        height: parent.height
                        width: parent.width / 4
                        placeholderText: "Input name actor"
                    }

                }
            }
            MyRectangle{
                id: wrapperbtn
                width: parent.width
                height: parent.height / 8
                anchors.top: recInput4.bottom
                RowLayout{
                    width: parent.width
                    height: parent.height

                    Item{
                        height: parent.height
                        width: parent.width / 2
                        Button{
                            id: btnOK
                            text: "OK"
                            anchors.centerIn: parent
                            onClicked: {
                                sendFilm(filmData)
                                insertWindow.close()
                                console.log("OK btn clicked...")
                            }
                        }
                    }

                    Item{
                        height: parent.height
                        width: parent.width / 2
                        Button{
                            id: btnCancel
                            text: "Cancel"
                            anchors.centerIn: parent
                            onClicked: {
                                insertWindow.close()
                                console.log("Cancel btn clicked...")
                            }
                        }
                    }

                }
            }

        }
    }

}
