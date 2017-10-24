#ifndef FILM_H
#define FILM_H

#include <QObject>
#include "director.h"
#include "actor.h"

class Film : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Director* MDirector READ MDirector WRITE setMDirector NOTIFY MDirectorChanged)
    Q_PROPERTY(Actor* MActor READ MActor WRITE setMActor NOTIFY MActorChanged)
    Q_PROPERTY(qint32 YOM READ YOM WRITE setYOM NOTIFY YOMChanged)
    Q_PROPERTY(qint64 PB READ PB WRITE setPB NOTIFY PBChanged)

private:

    Director* m_MDirector;

    Actor* m_MActor;

    qint32 m_YOM;

    qint64 m_PB;

public:
    Film(QObject *parent = nullptr);


    Director* MDirector() const;

    Actor* MActor() const;

    qint32 YOM() const;

    qint64 PB() const;

signals:

    void MDirectorChanged(Director* MDirector);

    void MActorChanged(Actor* MActor);

    void YOMChanged(qint32 YOM);

    void PBChanged(qint64 PB);

public slots:

    void setMDirector(Director* MDirector);
    void setMActor(Actor* MActor);
    void setYOM(qint32 YOM);
    void setPB(qint64 PB);
};

#endif // FILM_H
