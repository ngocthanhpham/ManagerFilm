#include "filmboard.h"

void FilmBoard::appendFilm(QQmlListProperty<Film> *lpFilm, Film *film)
{
    FilmBoard *fb = qobject_cast<FilmBoard*>(lpFilm->object);
    fb->appendFilm(film);
}

int FilmBoard::countFilm(QQmlListProperty<Film> *lpFilm)
{
    FilmBoard *fb = qobject_cast<FilmBoard*>(lpFilm->object);
    return fb->countFilm();
}

Film *FilmBoard::getFilm(QQmlListProperty<Film> *lpFilm, int index)
{
    FilmBoard *fb = qobject_cast<FilmBoard*>(lpFilm->object);
    return fb->getFilm(index);
}

void FilmBoard::clearFilm(QQmlListProperty<Film> *lpFilm)
{
    FilmBoard *fb = qobject_cast<FilmBoard*>(lpFilm->object);
    fb->clearFilm();
}

void FilmBoard::appendFilm(Film *f)
{
    m_lfilm.append(f);
}

int FilmBoard::countFilm()
{
    return m_lfilm.count();
}

Film *FilmBoard::getFilm(int index)
{
    return m_lfilm.at(index);
}

void FilmBoard::clearFilm()
{
    m_lfilm.clear();
}

FilmBoard::FilmBoard(QObject *parent) : QObject(parent)
{

}

QQmlListProperty<Film> FilmBoard::listFilm()
{
    return QQmlListProperty<Film>(this, this, &FilmBoard::appendFilm,
                                  &FilmBoard::countFilm,
                                  &FilmBoard::getFilm,
                                  &FilmBoard::clearFilm);
}

void FilmBoard::insertFilm()
{
    Film *film = new Film();
    film->setName("Default");
    film->setyom(2017);
    m_lfilm.append(film);
    emit listFilmChanged(m_listFilm);
}

void FilmBoard::setlistFilm(QQmlListProperty<Film> listFilm)
{
    if (m_listFilm == listFilm)
        return;

    m_listFilm = listFilm;
    emit listFilmChanged(m_listFilm);
}
