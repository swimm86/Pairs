#ifndef CELL_HPP
#define CELL_HPP

#include <QObject>

class Cell : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int key READ key NOTIFY keyChanged)
public:
    explicit Cell(QObject *parent = 0);

    int key() const { return m_key; }

    void setKey(int key);

signals:
    void keyChanged(int key);

private:
    int m_key;
};

#endif // CELL_HPP
