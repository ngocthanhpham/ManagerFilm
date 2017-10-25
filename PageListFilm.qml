import QtQuick 2.7
import Manager.Film.Film 1.0
import Manager.Film.Director 1.0
import Manager.Film.Actor 1.0
import Manager.Film.FilmBoard 1.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item{
    id:root
    height: 500; width: 700
    signal removeFilm()
    property Alisas btnRemoveFilm: btnRemoveFilm
    Rectangle{
        id: toprec
        width: parent.width
        height: 100
        RowLayout {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.topMargin: 35
            anchors.top: parent.top

            TextField {
                id: txtSearch
                placeholderText: qsTr("Text Field")
            }

            Button {
                id: btnSearch
                text: qsTr("Search")
                onClicked: {
                    console.log("BtnSearch Pressed. Entered text: " + txtSearch.text);
                }

            }
            Button {
                id: btnInsertFilm
                text: qsTr("Insert")
                onClicked: {
                    filmBoard.insertFilm();
                    console.log("BtnInsert Pressed");
                }

            }

            Button {
                id: btnRemoveFilm
                text: qsTr("Remove")
                onClicked: {
                    removeFilm()
                    console.log("BtnRemove Pressed");
                }

            }
        }
        FilmBoard{
            id: filmBoard
            listFilm:[
                Film{
                    name: "Spider-Man:Homecoming"
                    mDirector: Director{
                        nameDirector: "Jon Watts"
                        ageDirector: 50
                        nationalityDirector: "England"
                    }
                    mActor: Actor{
                        nameActor: "TomHolland"
                        ageActor: 27
                        nationalityActor: "American"
                    }
                    yom: 2017
                    pb: 1000
                },
                Film{
                    name: "Thor:Ragnarok"
                    mDirector: Director{
                        nameDirector: "Taika Waititi"
                        ageDirector: 50
                        nationalityDirector: "VietNam"
                    }
                    mActor: Actor{
                        nameActor: "Chris Hemsworth"
                        ageActor: 27
                        nationalityActor: "Japan"
                    }
                    yom: 2017
                    pb: 1000
                }
            ]
            onListFilmChanged: {
                console.log("List film has changed...")
            }

        }

        Component{
            id: filmDelegate
            Row{
                spacing: 5
                Rectangle{
                    width:200
                    height: 30
                    Text {text: modelData.name}
                }
                Rectangle{
                    width:50
                    height: 30
                    Text {text: modelData.yom}
                }
                Rectangle{
                    width:150
                    height: 30
                    Text {text: modelData.mDirector.nameDirector}
                }
                Rectangle{
                    width:150
                    height: 30
                    Text {text: modelData.mActor.nameActor}
                }
            }
        }
        Rectangle{
            id: recbot
            width: parent.width
            height: 400
            anchors.top: toprec.bottom
            ListView{
                anchors.fill: parent
                model: filmBoard.listFilm
                delegate: filmDelegate
                focus: true
            }

        }

    }
}



