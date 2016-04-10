#ifndef FIELD_HPP
#define FIELD_HPP

#include <QObject>
#include <QVector>

class Cell;

class Field : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(int height READ height WRITE setHeight NOTIFY heightChanged)
public:
    explicit Field(QObject *parent = 0);

    int width() const { return m_width; }
    int height() const { return m_height; }

    Q_INVOKABLE Cell *cellAt(int x, int y);

signals:
    void widthChanged(int width);
    void heightChanged(int height);

public slots:
    void setWidth(int width);
    void setHeight(int height);

private:
    void applySize();

    QVector<Cell*> m_cells;

    int m_width;
    int m_height;

};

#endif // FIELD_HPP
