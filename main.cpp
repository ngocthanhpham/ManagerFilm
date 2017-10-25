#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqml.h>
#include <QQmlComponent>
#include <QDebug>
#include <QQmlProperty>
#include <QQmlContext>
#include "director.h"
#include "actor.h"
#include "film.h"
#include "filmboard.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //register type qml Director
    qmlRegisterType<Director>("Manager.Film.Director", 1, 0, "Director");
    //register type qml Actor
    qmlRegisterType<Actor>("Manager.Film.Actor", 1, 0, "Actor");
    //register type qml Film
    qmlRegisterType<Film>("Manager.Film.Film", 1, 0, "Film");
    //register type qml FilmBoard
    qmlRegisterType<FilmBoard>("Manager.Film.FilmBoard", 1, 0, "FilmBoard");


    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
        /*set property 1*/
//    engine.rootContext()->setContextProperty("number",5000);

    /*set property 2*/
    QObject *obj1 = engine.rootObjects()[0];
    QObject *dadItem = obj1->findChild<QObject*>("dadItem");
    dadItem->setProperty("number", 16000);

    FilmBoard fBoard;
    QObject::connect(dadItem, SIGNAL(removeFilmQML()), &fBoard, SLOT(removeFilm()));
           /*set property 3*/

//    QQmlEngine qEngine;
//    QQmlComponent component(&qEngine, QUrl::fromLocalFile(":/main.qml"));
//    QObject *object = component.create();

//    QObject *dadItem = object->findChild<QObject*>("dadItem");
//    if(dadItem) dadItem->setProperty("number", 15000);
//    else {
//        qDebug() << "Can't get dadItem";
//    }

    return app.exec();
}
