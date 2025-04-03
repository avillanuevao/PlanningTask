#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <memory>

#include <ApplicationContext.hpp>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    ApplicationContext applicationContext;

    engine.rootContext()->setContextProperty("registerFamilyUnit", applicationContext.getViewOperationContext()->getViewRegisterFamilyUnit().get());
    engine.rootContext()->setContextProperty("selectFamilyUnit", applicationContext.getViewOperationContext()->getViewSelectFamilyUnit().get());
    engine.rootContext()->setContextProperty("addUser", applicationContext.getViewOperationContext()->getViewAddUser().get());
    engine.rootContext()->setContextProperty("addTask", applicationContext.getViewOperationContext()->getViewAddTask().get());
    engine.rootContext()->setContextProperty("selectUser", applicationContext.getViewOperationContext()->getViewSelectUser().get());
    engine.rootContext()->setContextProperty("selectTask", applicationContext.getViewOperationContext()->getViewSelectTask().get());
    engine.rootContext()->setContextProperty("assignTask", applicationContext.getViewOperationContext()->getViewAssignTask().get());

    engine.rootContext()->setContextProperty("showFamilyUnit", applicationContext.getViewVisualizationContext()->getViewShowFamilyUnit().get());
    engine.rootContext()->setContextProperty("showTask", applicationContext.getViewVisualizationContext()->getViewShowTask().get());
    engine.rootContext()->setContextProperty("showUser", applicationContext.getViewVisualizationContext()->getViewShowUser().get());


    const QUrl url(QStringLiteral("qrc:/taskPlanning/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
