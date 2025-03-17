#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <memory>

#include <controller/RegisterFamilyUnit.hpp>
#include <controller/ShowFamilyUnit.hpp>
#include <controller/SelectFamilyUnit.hpp>
#include <model/FamiliesUnits.hpp>
#include <model/signal/AddedFamilyUnit.hpp>
#include <view/RegisterFamilyUnit.hpp>
#include <view/ShowFamilyUnit.hpp>
#include <view/SelectFamilyUnit.hpp>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits
        = std::make_shared<model::FamiliesUnits>();

    std::unique_ptr<controller::RegisterFamilyUnit> mControllerRegisterFamilyUnit
        = std::make_unique<controller::RegisterFamilyUnit>(mModelFamiliesUnits);
    std::shared_ptr<controller::ShowFamilyUnit> mControllerShowFamilyUnit
        = std::make_shared<controller::ShowFamilyUnit>();
    std::unique_ptr<controller::SelectFamilyUnit> mControllerSelectFamilyUnit
        = std::make_unique<controller::SelectFamilyUnit>(mModelFamiliesUnits);

    mModelFamiliesUnits->addSubscriber(mControllerShowFamilyUnit);

    std::shared_ptr<view::RegisterFamilyUnit> mViewRegisterFamilyUnit
        = std::make_shared<view::RegisterFamilyUnit>(std::move(mControllerRegisterFamilyUnit));
    std::shared_ptr<view::ShowFamilyUnit> mViewShowFamilyUnit
        = std::make_shared<view::ShowFamilyUnit>(mControllerShowFamilyUnit);
    std::shared_ptr<view::SelectFamilyUnit> mViewSelectFamilyUnit
        = std::make_shared<view::SelectFamilyUnit>(std::move(mControllerSelectFamilyUnit));

    mControllerShowFamilyUnit->addSubscriber(mViewShowFamilyUnit);

    engine.rootContext()->setContextProperty("registerFamilyUnit", mViewRegisterFamilyUnit.get());
    engine.rootContext()->setContextProperty("showFamilyUnit", mViewShowFamilyUnit.get());
    engine.rootContext()->setContextProperty("selectFamilyUnit", mViewSelectFamilyUnit.get());

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
