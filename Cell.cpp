#include "Cell.hpp"

Cell::Cell(QObject *parent) :
    QObject(parent),
    m_key(0)
{

}

void Cell::setKey(int key)
{
    if (m_key == key) {
        return;
    }

    m_key = key;
    emit keyChanged(key);
}
