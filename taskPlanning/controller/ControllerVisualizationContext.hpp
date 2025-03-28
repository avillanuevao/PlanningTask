#pragma once

#include <memory>

#include <model/ModelContext.hpp>
#include <controller/visualization/ShowFamilyUnit.hpp>
#include <controller/visualization/ShowUser.hpp>
#include <controller/visualization/ShowTask.hpp>

namespace controller {

class ControllerVisualizationContext
{
public:
    ControllerVisualizationContext(std::shared_ptr<model::ModelContext> modelContext);

    std::shared_ptr<controller::visualization::ShowFamilyUnit> getControllerShowFamilyUnit() const;
    std::shared_ptr<controller::visualization::ShowUser> getControllerShowUser() const;
    std::shared_ptr<controller::visualization::ShowTask> getControllerShowTask() const;

private:
    void initVisualizationControllers();
    void initVisualizationRelations();

    std::shared_ptr<model::ModelContext> mModelContext;

    std::shared_ptr<controller::visualization::ShowFamilyUnit> mControllerShowFamilyUnit;
    std::shared_ptr<controller::visualization::ShowUser> mControllerShowUser;
    std::shared_ptr<controller::visualization::ShowTask> mControllerShowTask;
};

} // namespace controller
