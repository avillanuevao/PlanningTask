#pragma once

#include <memory>

#include <ModelContext.hpp>
#include <controller/visualization/ShowFamilyUnit.hpp>
#include <controller/visualization/ShowUser.hpp>
#include <controller/visualization/ShowTask.hpp>

class ControllerVisualizationContext
{
public:
    ControllerVisualizationContext(std::shared_ptr<ModelContext> modelContext);

    std::shared_ptr<controller::visualization::ShowFamilyUnit> getControllerShowFamilyUnit() const;
    std::shared_ptr<controller::visualization::ShowUser> getControllerShowUser() const;
    std::shared_ptr<controller::visualization::ShowTask> getControllerShowTask() const;

private:
    void initVisualizationControllers();
    void initVisualizationRelations();

    std::shared_ptr<ModelContext> mModelContext;

    std::shared_ptr<controller::visualization::ShowFamilyUnit> mControllerShowFamilyUnit;
    std::shared_ptr<controller::visualization::ShowUser> mControllerShowUser;
    std::shared_ptr<controller::visualization::ShowTask> mControllerShowTask;
};
