#ifndef ACTOR_H
#define ACTOR_H

#include <QObject>

class Actor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString NameActor READ NameActor WRITE setNameActor NOTIFY NameActorChanged)
    Q_PROPERTY(QString NationalityActor READ NationalityActor WRITE setNationalityActor NOTIFY NationalityActorChanged)
    Q_PROPERTY(qint32 AgeActor READ AgeActor WRITE setAgeActor NOTIFY AgeActorChanged)
    QString m_NameActor;

    QString m_NationalityActor;

    qint32 m_AgeActor;

public:
    explicit Actor(QObject *parent = nullptr);

    QString NameActor() const;

    QString NationalityActor() const;

    qint32 AgeActor() const;

signals:

    void NameActorChanged(QString NameActor);

    void NationalityActorChanged(QString NationalityActor);

    void AgeActorChanged(qint32 AgeActor);

public slots:
    void setNameActor(QString NameActor);
    void setNationalityActor(QString NationalityActor);
    void setAgeActor(qint32 AgeActor);
};

#endif // ACTOR_H
