#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqml.h>
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

    return app.exec();
}
