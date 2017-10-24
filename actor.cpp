#include "actor.h"

Actor::Actor(QObject *parent) : QObject(parent)
{

}

QString Actor::NameActor() const
{
    return m_NameActor;
}

QString Actor::NationalityActor() const
{
    return m_NationalityActor;
}

qint32 Actor::AgeActor() const
{
    return m_AgeActor;
}

void Actor::setNameActor(QString NameActor)
{
    if (m_NameActor == NameActor)
        return;

    m_NameActor = NameActor;
    emit NameActorChanged(m_NameActor);
}

void Actor::setNationalityActor(QString NationalityActor)
{
    if (m_NationalityActor == NationalityActor)
        return;

    m_NationalityActor = NationalityActor;
    emit NationalityActorChanged(m_NationalityActor);
}

void Actor::setAgeActor(qint32 AgeActor)
{
    if (m_AgeActor == AgeActor)
        return;

    m_AgeActor = AgeActor;
    emit AgeActorChanged(m_AgeActor);
}
