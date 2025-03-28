#pragma once

#include <memory>

#include <ViewVisualizationContext.hpp>
#include <ViewOperationContext.hpp>

class ApplicationContext
{
public:
    ApplicationContext();

    std::shared_ptr<ViewVisualizationContext> getViewVisualizationContext() const;

    std::shared_ptr<ViewOperationContext> getViewOperationContext() const;

private:
    std::shared_ptr<ViewVisualizationContext> mViewVisualizationContext;
    std::shared_ptr<ViewOperationContext> mViewOperationContext;

};
