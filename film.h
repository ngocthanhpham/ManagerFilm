#ifndef FILM_H
#define FILM_H

#include <QObject>
#include "director.h"
#include "actor.h"

class Film : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Director* mDirector READ mDirector WRITE setmDirector NOTIFY mDirectorChanged)
    Q_PROPERTY(Actor* mActor READ mActor WRITE setmActor NOTIFY mActorChanged)
    Q_PROPERTY(QString yom READ yom WRITE setyom NOTIFY yomChanged)
    Q_PROPERTY(QString pb READ pb WRITE setpb NOTIFY pbChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

private:

    Director* m_mDirector;

    Actor* m_mActor;

    QString m_yom;

    QString m_pb;

    QString m_name;

public:
    Film(QObject *parent = nullptr);

    ~Film();

    Director* mDirector() const;

    Actor* mActor() const;

    QString yom() const;

    QString pb() const;

    QString name() const;

signals:

    void mDirectorChanged(Director* mDirector);

    void mActorChanged(Actor* mActor);

    void yomChanged(QString yom);

    void pbChanged(QString pb);

    void nameChanged(QString name);

public slots:

    void setmDirector(Director* mDirector);
    void setmActor(Actor* mActor);
    void setyom(QString yom);
    void setpb(QString pb);
    void setName(QString name);
};

#endif // FILM_H
