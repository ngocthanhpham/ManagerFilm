#include "director.h"

Director::Director(QObject *parent) : QObject(parent)
{

}

QString Director::NameDirector() const
{
    return m_NameDirector;
}

qint32 Director::AgeDirector() const
{
    return m_AgeDirector;
}

QString Director::NationalityDirector() const
{
    return m_NationalityDirector;
}

void Director::setNameDirector(QString NameDirector)
{
    if (m_NameDirector == NameDirector)
        return;

    m_NameDirector = NameDirector;
    emit NameDirectorChanged(m_NameDirector);
}

void Director::setAgeDirector(qint32 AgeDirector)
{
    if (m_AgeDirector == AgeDirector)
        return;

    m_AgeDirector = AgeDirector;
    emit AgeDirectorChanged(m_AgeDirector);
}

void Director::setNationalityDirector(QString NationalityDirector)
{
    if (m_NationalityDirector == NationalityDirector)
        return;

    m_NationalityDirector = NationalityDirector;
    emit NationalityDirectorChanged(m_NationalityDirector);
}
