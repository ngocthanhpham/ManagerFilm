#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <QObject>

class Director : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString NameDirector READ NameDirector WRITE setNameDirector NOTIFY NameDirectorChanged)
    Q_PROPERTY(qint32 AgeDirector READ AgeDirector WRITE setAgeDirector NOTIFY AgeDirectorChanged)
    Q_PROPERTY(QString NationalityDirector READ NationalityDirector WRITE setNationalityDirector NOTIFY NationalityDirectorChanged)
public:
    explicit Director(QObject *parent = nullptr);

    QString NameDirector() const;

    qint32 AgeDirector() const;

    QString NationalityDirector() const;

private:

    QString m_NameDirector;

    qint32 m_AgeDirector;

    QString m_NationalityDirector;

signals:

    void NameDirectorChanged(QString NameDirector);

    void AgeDirectorChanged(qint32 AgeDirector);

    void NationalityDirectorChanged(QString NationalityDirector);

public slots:
    void setNameDirector(QString NameDirector);
    void setAgeDirector(qint32 AgeDirector);
    void setNationalityDirector(QString NationalityDirector);
};

#endif // DIRECTOR_H
