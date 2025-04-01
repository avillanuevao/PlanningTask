#include "ControllerVisualizationContext.hpp"

#include <model/signal/AddedUser.hpp>
#include <model/signal/AddedTask.hpp>
#include <model/signal/AddedFamilyUnit.hpp>

namespace controller {

ControllerVisualizationContext::ControllerVisualizationContext(std::shared_ptr<model::ModelContext> modelContext)
    : mModelContext(modelContext)
{
    initVisualizationControllers();
    initVisualizationRelations();
}

void ControllerVisualizationContext::initVisualizationControllers()
{
    mControllerShowFamilyUnit = std::make_shared<controller::visualization::ShowFamilyUnit>();
    mControllerShowUser = std::make_shared<controller::visualization::ShowUser>();
    mControllerShowTask = std::make_shared<controller::visualization::ShowTask>();
}

void ControllerVisualizationContext::initVisualizationRelations()
{
    mModelContext->getModelFamiliesUnits()
        ->utils::Publisher<model::signal::AddedFamilyUnit>::addSubscriber(mControllerShowFamilyUnit);

    mModelContext->getModelFamiliesUnits()
        ->utils::Publisher<model::signal::AddedUser>::addSubscriber(mControllerShowUser);

    mModelContext->getModelFamiliesUnits()
        ->utils::Publisher<model::signal::AddedTask>::addSubscriber(mControllerShowTask);
}

std::shared_ptr<controller::visualization::ShowFamilyUnit> ControllerVisualizationContext::getControllerShowFamilyUnit() const
{
    return mControllerShowFamilyUnit;
}

std::shared_ptr<controller::visualization::ShowUser> ControllerVisualizationContext::getControllerShowUser() const
{
    return mControllerShowUser;
}

std::shared_ptr<controller::visualization::ShowTask> ControllerVisualizationContext::getControllerShowTask() const
{
    return mControllerShowTask;
}

} // namespace controller
