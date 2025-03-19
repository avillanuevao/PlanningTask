#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <memory>

#include <model/FamiliesUnits.hpp>
#include <model/Users.hpp>

#include <model/signal/AddedFamilyUnit.hpp>
#include <model/signal/AddedUser.hpp>

#include <controller/operation/RegisterFamilyUnit.hpp>
#include <controller/operation/SelectFamilyUnit.hpp>
#include <controller/operation/AddUser.hpp>
#include <controller/visualization/ShowFamilyUnit.hpp>
#include <controller/visualization/ShowUser.hpp>

#include <view/operation/RegisterFamilyUnit.hpp>
#include <view/operation/SelectFamilyUnit.hpp>
#include <view/operation/AddUser.hpp>
#include <view/visualization/ShowFamilyUnit.hpp>
#include <view/visualization/ShowUser.hpp>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits
        = std::make_shared<model::FamiliesUnits>();
    std::shared_ptr<model::Users> mModelUsers
        = std::make_shared<model::Users>();

    std::unique_ptr<controller::operation::RegisterFamilyUnit> mControllerRegisterFamilyUnit
        = std::make_unique<controller::operation::RegisterFamilyUnit>(mModelFamiliesUnits);
    std::unique_ptr<controller::operation::SelectFamilyUnit> mControllerSelectFamilyUnit
        = std::make_unique<controller::operation::SelectFamilyUnit>(mModelFamiliesUnits);
    std::unique_ptr<controller::operation::AddUser> mControllerAddUser
        = std::make_unique<controller::operation::AddUser>(mModelUsers);

    std::shared_ptr<controller::visualization::ShowFamilyUnit> mControllerShowFamilyUnit
        = std::make_shared<controller::visualization::ShowFamilyUnit>();
    std::shared_ptr<controller::visualization::ShowUser> mControllerShowUser
        = std::make_shared<controller::visualization::ShowUser>();

    mModelFamiliesUnits->addSubscriber(mControllerShowFamilyUnit);
    mModelUsers->addSubscriber(mControllerShowUser);

    std::shared_ptr<view::operation::RegisterFamilyUnit> mViewRegisterFamilyUnit
        = std::make_shared<view::operation::RegisterFamilyUnit>(std::move(mControllerRegisterFamilyUnit));
    std::shared_ptr<view::operation::SelectFamilyUnit> mViewSelectFamilyUnit
        = std::make_shared<view::operation::SelectFamilyUnit>(std::move(mControllerSelectFamilyUnit));
    std::shared_ptr<view::operation::AddUser> mViewAddUser
        = std::make_shared<view::operation::AddUser>(std::move(mControllerAddUser));

    std::shared_ptr<view::visualization::ShowFamilyUnit> mViewShowFamilyUnit
        = std::make_shared<view::visualization::ShowFamilyUnit>(mControllerShowFamilyUnit);
    std::shared_ptr<view::visualization::ShowUser> mViewShowUser
        = std::make_shared<view::visualization::ShowUser>(mControllerShowUser);

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
