#include "director.h"

Director::Director(QObject *parent) : QObject(parent)
{

}

QString Director::nameDirector() const
{
    return m_nameDirector;
}

QString Director::ageDirector() const
{
    return m_ageDirector;
}

QString Director::nationalityDirector() const
{
    return m_nationalityDirector;
}

void Director::setnameDirector(QString nameDirector)
{
    if (m_nameDirector == nameDirector)
        return;

    m_nameDirector = nameDirector;
    emit nameDirectorChanged(m_nameDirector);
}

void Director::setageDirector(QString ageDirector)
{
    if (m_ageDirector == ageDirector)
        return;

    m_ageDirector = ageDirector;
    emit ageDirectorChanged(m_ageDirector);
}

void Director::setnationalityDirector(QString nationalityDirector)
{
    if (m_nationalityDirector == nationalityDirector)
        return;

    m_nationalityDirector = nationalityDirector;
    emit nationalityDirectorChanged(m_nationalityDirector);
}
