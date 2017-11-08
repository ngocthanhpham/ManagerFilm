#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <QObject>

class Director : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nameDirector READ nameDirector WRITE setnameDirector NOTIFY nameDirectorChanged)
    Q_PROPERTY(QString ageDirector READ ageDirector WRITE setageDirector NOTIFY ageDirectorChanged)
    Q_PROPERTY(QString nationalityDirector READ nationalityDirector WRITE setnationalityDirector NOTIFY nationalityDirectorChanged)
public:
    explicit Director(QObject *parent = nullptr);

    QString nameDirector() const;

    QString ageDirector() const;

    QString nationalityDirector() const;

private:

    QString m_nameDirector;

    QString m_ageDirector;

    QString m_nationalityDirector;

signals:

    void nameDirectorChanged(QString nameDirector);

    void ageDirectorChanged(QString ageDirector);

    void nationalityDirectorChanged(QString nationalityDirector);

public slots:
    void setnameDirector(QString nameDirector);
    void setageDirector(QString ageDirector);
    void setnationalityDirector(QString nationalityDirector);
};

#endif // DIRECTOR_H
