#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <controller/RegisterFamilyUnit.hpp>
#include <memory>
#include <model/FamiliesUnits.hpp>
#include <view/RegisterFamilyUnit.hpp>
#include <view/ShowFamilyUnit.hpp>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits
        = std::make_shared<model::FamiliesUnits>();
    std::unique_ptr<controller::RegisterFamilyUnit> mControllerRegisterFamilyUnit
        = std::make_unique<controller::RegisterFamilyUnit>(mModelFamiliesUnits);

    std::shared_ptr<view::RegisterFamilyUnit> mViewRegisterFamilyUnit
        = std::make_shared<view::RegisterFamilyUnit>(std::move(mControllerRegisterFamilyUnit));

    std::shared_ptr<view::ShowFamilyUnit> mViewShowFamilyUnit
        = std::make_shared<view::ShowFamilyUnit>();

    engine.rootContext()->setContextProperty("registerFamilyUnit", mViewRegisterFamilyUnit.get());
    engine.rootContext()->setContextProperty("showFamilyUnit", mViewShowFamilyUnit.get());

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
