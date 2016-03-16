#ifndef CELL_HPP
#define CELL_HPP

#include <QObject>

class Cell : public QObject
{
    Q_OBJECT
public:
    explicit Cell(QObject *parent = 0);

signals:

public slots:
};

#endif // CELL_HPP
