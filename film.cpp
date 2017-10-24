#include "film.h"

Film::Film(QObject *parent) : QObject(parent)
{

}

Director *Film::MDirector() const
{
    return m_MDirector;
}

Actor *Film::MActor() const
{
    return m_MActor;
}

qint32 Film::YOM() const
{
    return m_YOM;
}

qint64 Film::PB() const
{
    return m_PB;
}

void Film::setMDirector(Director *MDirector)
{
    if (m_MDirector == MDirector)
        return;

    m_MDirector = MDirector;
    emit MDirectorChanged(m_MDirector);
}

void Film::setMActor(Actor *MActor)
{
    if (m_MActor == MActor)
        return;

    m_MActor = MActor;
    emit MActorChanged(m_MActor);
}

void Film::setYOM(qint32 YOM)
{
    if (m_YOM == YOM)
        return;

    m_YOM = YOM;
    emit YOMChanged(m_YOM);
}

void Film::setPB(qint64 PB)
{
    if (m_PB == PB)
        return;

    m_PB = PB;
    emit PBChanged(m_PB);
}
