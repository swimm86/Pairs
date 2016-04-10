#include "Field.hpp"

#include "Cell.hpp"

Field::Field(QObject *parent) :
    QObject(parent),
    m_width(10),
    m_height(10)
{
    applySize();
}

Cell *Field::cellAt(int x, int y)
{
    if (x < 0 || x >= width()) {
        return nullptr;
    }

    if (y < 0 || y >= height()) {
        return nullptr;
    }

    int index = x + y * width();

    if (index >= m_cells.count()) {
        return nullptr;
    }

    return m_cells.at(index);
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

void Field::applySize()
{
    for (Cell *cell : m_cells) {
        delete cell;
    }

    m_cells.clear();

    for (int y = 0; y < height(); ++y) {
        for (int x = 0; x < width(); ++x) {
            Cell *cell = new Cell(this);
            cell->setKey(qrand() % 6);
            m_cells.append(cell);
        }
    }
}
