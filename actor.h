#ifndef ACTOR_H
#define ACTOR_H

#include <QObject>

class Actor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nameActor READ nameActor WRITE setnameActor NOTIFY nameActorChanged)
    Q_PROPERTY(QString nationalityActor READ nationalityActor WRITE setnationalityActor NOTIFY nationalityActorChanged)
    Q_PROPERTY(QString ageActor READ ageActor WRITE setageActor NOTIFY ageActorChanged)
    QString m_nameActor;

    QString m_nationalityActor;

    QString m_ageActor;

public:
    explicit Actor(QObject *parent = nullptr);

    QString nameActor() const;

    QString nationalityActor() const;

    QString ageActor() const;

signals:

    void nameActorChanged(QString nameActor);

    void nationalityActorChanged(QString nationalityActor);

    void ageActorChanged(QString ageActor);

public slots:
    void setnameActor(QString nameActor);
    void setnationalityActor(QString nationalityActor);
    void setageActor(QString ageActor);
};

#endif // ACTOR_H
