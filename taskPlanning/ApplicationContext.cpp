#include "ApplicationContext.hpp"

#include <controller/ControllerVisualizationContext.hpp>
#include <controller/ControllerOperationContext.hpp>
#include <model/ModelContext.hpp>

ApplicationContext::ApplicationContext() {
    std::shared_ptr<model::ModelContext> modelContext = std::make_shared<model::ModelContext>();
    std::unique_ptr<controller::ControllerVisualizationContext> controllerVisualizationContext = std::make_unique<controller::ControllerVisualizationContext>(modelContext);
    mViewVisualizationContext = std::make_shared<view::ViewVisualizationContext>(std::move(controllerVisualizationContext));
    std::unique_ptr<controller::ControllerOperationContext> controllerOperationContext = std::make_unique<controller::ControllerOperationContext>(modelContext);
    mViewOperationContext = std::make_shared<view::ViewOperationContext>(std::move(controllerOperationContext));
}

std::shared_ptr<view::ViewVisualizationContext> ApplicationContext::getViewVisualizationContext() const
{
    return mViewVisualizationContext;
}

std::shared_ptr<view::ViewOperationContext> ApplicationContext::getViewOperationContext() const
{
    return mViewOperationContext;
}

