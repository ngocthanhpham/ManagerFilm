#ifndef FILMBOARD_H
#define FILMBOARD_H

#include <QObject>
#include <QQmlListProperty>
#include "film.h"
#include <QList>
class FilmBoard : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Film> listFilm READ listFilm WRITE setlistFilm NOTIFY listFilmChanged)
private:
    static void appendFilm(QQmlListProperty<Film>*, Film*);
    static int countFilm(QQmlListProperty<Film>*);
    static Film* getFilm(QQmlListProperty<Film>*, int);
    static void clearFilm(QQmlListProperty<Film>*);
private:
    QQmlListProperty<Film> m_listFilm;
    QList<Film*> m_lfilm;

public:
    void appendFilm(Film*);
    int countFilm();
    Film* getFilm(int);
    void clearFilm();

public:
    explicit FilmBoard(QObject *parent = nullptr);

    QQmlListProperty<Film> listFilm();
    Q_INVOKABLE void insertFilm();
    Q_INVOKABLE void removeFilm();

signals:

    void listFilmChanged(QQmlListProperty<Film> listFilm);

public slots:
    void setlistFilm(QQmlListProperty<Film> listFilm);
};

#endif // FILMBOARD_H
