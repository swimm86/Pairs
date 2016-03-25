#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QtQml>

#include "Cell.hpp"
#include "Field.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<Cell>("Pairs", 1, 0, "Cell");
    qmlRegisterType<Field>("Pairs", 1, 0, "Field");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
