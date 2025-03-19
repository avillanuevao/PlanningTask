#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <memory>

#include <model/FamiliesUnits.hpp>
#include <model/Users.hpp>

#include <model/signal/AddedFamilyUnit.hpp>
#include <model/signal/AddedUser.hpp>

#include <controller/RegisterFamilyUnit.hpp>
#include <controller/ShowFamilyUnit.hpp>
#include <controller/SelectFamilyUnit.hpp>
#include <controller/AddUser.hpp>
#include <controller/ShowUser.hpp>

#include <view/RegisterFamilyUnit.hpp>
#include <view/ShowFamilyUnit.hpp>
#include <view/SelectFamilyUnit.hpp>
#include <view/AddUser.hpp>
#include <view/ShowUser.hpp>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits
        = std::make_shared<model::FamiliesUnits>();
    std::shared_ptr<model::Users> mModelUsers
        = std::make_shared<model::Users>();

    std::unique_ptr<controller::RegisterFamilyUnit> mControllerRegisterFamilyUnit
        = std::make_unique<controller::RegisterFamilyUnit>(mModelFamiliesUnits);
    std::unique_ptr<controller::SelectFamilyUnit> mControllerSelectFamilyUnit
        = std::make_unique<controller::SelectFamilyUnit>(mModelFamiliesUnits);
    std::unique_ptr<controller::AddUser> mControllerAddUser
        = std::make_unique<controller::AddUser>(mModelUsers);

    std::shared_ptr<controller::ShowFamilyUnit> mControllerShowFamilyUnit
        = std::make_shared<controller::ShowFamilyUnit>();
    std::shared_ptr<controller::ShowUser> mControllerShowUser
        = std::make_shared<controller::ShowUser>();

    mModelFamiliesUnits->addSubscriber(mControllerShowFamilyUnit);
    mModelUsers->addSubscriber(mControllerShowUser);

    std::shared_ptr<view::RegisterFamilyUnit> mViewRegisterFamilyUnit
        = std::make_shared<view::RegisterFamilyUnit>(std::move(mControllerRegisterFamilyUnit));
    std::shared_ptr<view::SelectFamilyUnit> mViewSelectFamilyUnit
        = std::make_shared<view::SelectFamilyUnit>(std::move(mControllerSelectFamilyUnit));
    std::shared_ptr<view::AddUser> mViewAddUser
        = std::make_shared<view::AddUser>(std::move(mControllerAddUser));

    std::shared_ptr<view::ShowFamilyUnit> mViewShowFamilyUnit
        = std::make_shared<view::ShowFamilyUnit>(mControllerShowFamilyUnit);
    std::shared_ptr<view::ShowUser> mViewShowUser
        = std::make_shared<view::ShowUser>(mControllerShowUser);

    mControllerShowFamilyUnit->addSubscriber(mViewShowFamilyUnit);
    mControllerShowUser->addSubscriber(mViewShowUser);

    engine.rootContext()->setContextProperty("registerFamilyUnit", mViewRegisterFamilyUnit.get());
    engine.rootContext()->setContextProperty("selectFamilyUnit", mViewSelectFamilyUnit.get());
    engine.rootContext()->setContextProperty("addUser", mViewAddUser.get());

    engine.rootContext()->setContextProperty("showFamilyUnit", mViewShowFamilyUnit.get());
    engine.rootContext()->setContextProperty("showUser", mViewShowUser.get());


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
