#include "Field.hpp"

Field::Field(QObject *parent) :
    QObject(parent),
    m_width(10),
    m_height(10)
{

}

void Field::setWidth(int width)
{
    if (m_width == width) {
        return;
    }

    m_width = width;
    emit widthChanged(width);
}

void Field::setHeight(int height)
{
    if (m_height == height) {
        return;
    }

    m_height = height;
    emit heightChanged(height);
}
