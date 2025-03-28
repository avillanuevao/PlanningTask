#include "ApplicationContext.hpp"

#include <ControllerVisualizationContext.hpp>
#include <ControllerOperationContext.hpp>
#include <ModelContext.hpp>

ApplicationContext::ApplicationContext() {
    std::shared_ptr<ModelContext> modelContext = std::make_shared<ModelContext>();
    std::unique_ptr<ControllerVisualizationContext> controllerVisualizationContext = std::make_unique<ControllerVisualizationContext>(modelContext);
    mViewVisualizationContext = std::make_shared<ViewVisualizationContext>(std::move(controllerVisualizationContext));
    std::unique_ptr<ControllerOperationContext> controllerOperationContext = std::make_unique<ControllerOperationContext>(modelContext);
    mViewOperationContext = std::make_shared<ViewOperationContext>(std::move(controllerOperationContext));
}

std::shared_ptr<ViewVisualizationContext> ApplicationContext::getViewVisualizationContext() const
{
    return mViewVisualizationContext;
}

std::shared_ptr<ViewOperationContext> ApplicationContext::getViewOperationContext() const
{
    return mViewOperationContext;
}
