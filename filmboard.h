#ifndef FILMBOARD_H
#define FILMBOARD_H

#include <QObject>
#include <QQmlListProperty>
#include "film.h"
#include <QList>
class FilmBoard : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Film> ListFilm READ ListFilm WRITE setListFilm NOTIFY ListFilmChanged)
private:
    static void appendFilm(QQmlListProperty<Film>*, Film*);
    static int countFilm(QQmlListProperty<Film>*);
    static Film* getFilm(QQmlListProperty<Film>*, int);
    static void clearFilm(QQmlListProperty<Film>*);
private:
    QQmlListProperty<Film> m_ListFilm;
    QList<Film> m_lfilm;

public:
    void appendFilm(Film*);
    int countFilm();
    Film* getFilm(int);
    void clearFilm();

public:
    explicit FilmBoard(QObject *parent = nullptr);

    QQmlListProperty<Film> ListFilm() const;

signals:

    void ListFilmChanged(QQmlListProperty<Film> ListFilm);

public slots:
    void setListFilm(QQmlListProperty<Film> ListFilm);
};

#endif // FILMBOARD_H
